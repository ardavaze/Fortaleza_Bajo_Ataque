#include "UnitRender.h"
#include "SurvivalRender.h"

void FBAView::UnitRender::ProcessCollision() {
	int k;
	for (int i = 0; i < 2; i++) {//recorremos 2 cuadrados del espacio fisico al frente o detras de la unidad
		if (this->band == Game_obj::Band::Allies) { k = (numRectangule + i); }
		else { k = ((i * -1) - 1); }
		if ( ( (frstRectangule + k) < 96 ) && ( (frstRectangule + k) >= 0 ) ) {
			for (int j = 0; j < SurvivalRender::physicalSpace[frstRectangule + k]->Count ; j++) {
				if (SurvivalRender::physicalSpace[frstRectangule + k ][j]->band != this->band) {
					this->attackMove = 1;
					this->enemyUnit = SurvivalRender::physicalSpace[frstRectangule + k][j];
					return;
				}
			}
		}
	}
	this->enemyUnit = nullptr;
	this->attackMove = 0;
}

void FBAView::UnitRender::Todo() {
	if (!muerto) {
		double timeaux;
		if (this->frstTimeJob) {
			timeJob->Restart();
			attackMoveJob = attackMove;
			if (attackMove) {
				totalTimeJob = (60 / attackVelocity); }
			else { totalTimeJob = ((80 / 50) / movementVelocity); } //tiempo en que demora moverse una sola vez y la velocidad es 80 pix por movimiento
			positionx = Position.X;
			frstTimeJob = 0;
		}
		timeJob->Stop();
		timeaux = timeJob->Elapsed.TotalSeconds;
		timeJob->Start();
		if (timeaux >= (indice + 1) * (totalTimeJob / this->unit->MoveAnimation->Count)) {
			if (attackMoveJob) {
				indice = int(timeaux * (this->unit->AttackAnimation->Count / totalTimeJob));
				if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
				this->Texture = unit->AttackAnimation[indice];
				if (indice == unit->AttackAnimation->Count / 2)
					this->unit->attackSound->Play();
			}
			else {
				indice = int(timeaux * (this->unit->MoveAnimation->Count / totalTimeJob));
				if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
				this->Texture = unit->MoveAnimation[indice];
			}
			this->Texture->Update(unit->HealthBar[0],45,0);
			if (this->life!=0) {
				this->Texture->Update(unit->HealthBar[1], 49, 4);
			}
			for (int i = 0; i < int(112* this->life/ this->unit->Maxlife); i++){
				this->Texture->Update(unit->HealthBar[2], 53+i, 4);
			}
			if (this->life > this->unit->Maxlife*0.95) {
				this->Texture->Update(unit->HealthBar[3], 53+111, 4);
			}
		}
		if (!attackMove) {
			if (this->unit->band == FBAModel::Units::Band::Allies) {
				Position = Vector2f(positionx + int(timeaux * movementVelocity * 50), Position.Y);
			}
			else {
				Position = Vector2f(positionx - int(timeaux * movementVelocity * 50), Position.Y);
			}
		}
		if (timeaux >= totalTimeJob) {
			frstTimeJob = 1;
			if (attackMove && attackMoveJob) { enemyUnit->LostLife(this->attackDamage); }
		}
	}
	else {
		double timeaux;
		if (this->frstTimeJob) {
			timeJob->Restart();
			indice = 0;
			totalTimeJob = deathTime;//tiempo en que demora moverse una sola vez y la velocidad es 80 pix por movimiento
			frstTimeJob = 0;
		}
		timeJob->Stop();
		timeaux = timeJob->Elapsed.TotalSeconds;
		timeJob->Start();
		if (timeaux >= (indice + 1) * (totalTimeJob / this->unit->DeathAnimation->Count)) {
			if (indice == unit->DeathAnimation->Count / 2)
				this->unit->deathSound->Play();
			indice = int(timeaux * (this->unit->DeathAnimation->Count / totalTimeJob));
			if (indice >= this->unit->DeathAnimation->Count) { indice = 0; }
			this->Texture = unit->DeathAnimation[indice];
			this->Texture->Update(unit->HealthBar[0], 45, 0);
		}
		if (timeaux >= totalTimeJob) {
			dead = 1;
		}
	}
}

Void FBAView::UnitRender::LostLife(int damage){
	this->life -= damage;
	if (life <= 0) { 
		life = 0;
		muerto = 1; 
		frstTimeJob = 1;
	}
	return Void();
}



