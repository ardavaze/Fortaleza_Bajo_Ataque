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
					return;
				}
			}
		}
	}
	this->attackMove = 0;
}

void FBAView::UnitRender::Todo() {
	double timeaux;
	if (this->frstTimeJob) {
		timeJob->Restart();
		attackMoveJob = attackMove;
		frstTimechange = 1;
		if (attackMove) { totalTimeJob = (60 / attackVelocity); }
		else {totalTimeJob = ((80/50) / movementVelocity);} //tiempo en que demora moverse una sola vez y la velocidad es 80 pix por movimiento
		positionx=Position.X;
	}
	frstTimeJob = 0;
	timeJob->Stop();
	timeaux = timeJob->Elapsed.TotalSeconds;
	timeJob->Start();
	if (timeaux >= (indice + 1) * (totalTimeJob / this->unit->MoveAnimation->Count)) {
		if (attackMoveJob) {
			indice = int(timeaux * (this->unit->AttackAnimation->Count / totalTimeJob));
			if (indice >= 20) { indice = 0; }
			this->Texture = unit->AttackAnimation[indice];
		}
		else {
			indice = int(timeaux * (this->unit->MoveAnimation->Count / totalTimeJob));
			if (indice >= 20) { indice = 0; } 
			this->Texture = unit->MoveAnimation[indice];
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
	if (timeaux >= totalTimeJob) frstTimeJob = 1;
}



