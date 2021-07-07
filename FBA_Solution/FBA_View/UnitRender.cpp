#include "UnitRender.h"
#include "SurvivalRender.h"

FBAView::UnitRender::UnitRender(FBAModel::Units^ unit) {
	this->unit = unit;
	this->board = gcnew RenderTexture(this->unit->Image->Size.X, this->unit->Image->Size.Y);
	this->body = gcnew Sprite(this->unit->Image);	
	//rango
}

void FBAView::UnitRender::ProcessCollision() {
	int k;
	for (int i = 0; i < rango; i++) {//recorremos 2 cuadrados del espacio fisico al frente o detras de la unidad
		if (this->band == Game_obj::Band::Allies) { k = (numRectangule + i); }
		else { k = ((i * -1) - 1); }
		if ( ( (frstRectangule + k) < SurvivalRender::physicalSpace->Length) && ( (frstRectangule + k) >= 0 ) ) {
			for (int j = 0; j < SurvivalRender::physicalSpace[frstRectangule + k]->Count ; j++) {
				if (SurvivalRender::physicalSpace[frstRectangule + k ][j]->band != this->band) {
					this->dist = i * 20;
					this->state = UnitRender::States::Attack;
					this->enemyUnit = SurvivalRender::physicalSpace[frstRectangule + k][j];
					return;
				}
			}
		}
	}
	this->enemyUnit = nullptr;
	this->state = UnitRender::States::Move;
}

void FBAView::UnitRender::ToDo() {
	double timeaux;
	if (this->frstTimeJob) {
		timeJob->Restart();
		statejob = state;
		indice = 0;
		switch (statejob) {
		case FBAView::UnitRender::States::Attack:
			totalTimeJob = (60 / attackVelocity);
			break;
		case FBAView::UnitRender::States::Move:
			totalTimeJob=((80 / 50) / movementVelocity);
			break;
		case FBAView::UnitRender::States::Die:
			totalTimeJob = deathTime;
			break;
		}
		positionx = Position.X;
		frstTimeJob = 0;
	}
	timeJob->Stop();
	timeaux = timeJob->Elapsed.TotalSeconds;
	timeJob->Start();
	if (timeaux >= (indice + 1) * (totalTimeJob / this->unit->MoveAnimation->Count)) {
		indice = int(timeaux * (this->unit->AttackAnimation->Count / totalTimeJob));
		healthbar->GetBar(double(this->HP)/this->unit->Maxlife);
		switch (statejob) {
		case FBAView::UnitRender::States::Attack:
			if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
			this->body->Texture = unit->AttackAnimation[indice];
			if ((indice == this->unit->MoveAnimation->Count / 2) &&(state== FBAView::UnitRender::States::Attack)) {
				this->enemyUnit->LoseLife(this->attackDamage); 
			}
			if (indice == unit->AttackAnimation->Count / 2)
				this->unit->attackSound->Play();
			break;
		case FBAView::UnitRender::States::Move:
			if (indice >= this->unit->MoveAnimation->Count) { indice = 0; }
			this->body->Texture = unit->MoveAnimation[indice];
			if(state== FBAView::UnitRender::States::Move)
				if (this->unit->band == FBAModel::Units::Band::Allies) {
					Position = Vector2f(positionx + int(timeaux * movementVelocity * 50), Position.Y);
				}
				else {
					Position = Vector2f(positionx - int(timeaux * movementVelocity * 50), Position.Y);
				}
			break;
		case FBAView::UnitRender::States::Die:
			if (indice >= this->unit->DeathAnimation->Count) { indice = 0; }
			this->body->Texture = unit->DeathAnimation[indice];
			if (indice == unit->DeathAnimation->Count / 2) {
				this->unit->deathSound->Play();
				if (this->unit->band == FBAModel::Units::Band::Enemies) {
					SurvivalRender::userCoins = SurvivalRender::userCoins + 10;
				}
			}
			break;
		}
		this->PaintTexture();
	}
	if (timeaux >= totalTimeJob) {
		frstTimeJob = 1;
		if (this->statejob==UnitRender::States::Die) {
			death = 1;
		}
	}
}

Void FBAView::UnitRender::LoseLife(int damage){
	this->HP -= damage;
	if (HP <= 0) {
		HP = 0;
		state = UnitRender::States::Die; 
		frstTimeJob = 1;
	}
	return Void();
}

Void FBAView::UnitRender::PaintTexture() {
	this->board->Clear(SFML::Graphics::Color::Color(0,0,0,0));
	this->board->Draw(healthbar);
	this->board->Draw(body);
	this->board->Display();
	this->Texture = this->board->Texture;
	return Void();
}



