#include "ArrowRender.h"
#include "SurvivalRender.h"
#include "PhysicalElement.h"

Void FBAView::ArrowRender::ProcessCollision(){
	//1920/20=96
	Vector2i a;
	a.X = ((int)this->Position.X) / 20;//# del physicalspace
	a.Y = this->Position.Y;
	if (arrowBall) {
		a.X = a.X + (this->posPunta.X*this->Scale.X*Math::Cos((this->Rotation)*Math::PI/180) ) / 20;//# del physicalspace
		a.Y = a.Y + this->posPunta.Y * this->Scale.Y * Math::Sin((this->Rotation) * Math::PI / 180);
	}
	if ( (a.X< SurvivalRender::physicalSpace->Length)&&(a.X>=0) ){
		for (int i = 0; i < SurvivalRender::physicalSpace[a.X]->Count; i++) {
			if ((SurvivalRender::physicalSpace[a.X][i]->band !=band)) {    //Si es enemigo				
				if ( (a.Y >= (SurvivalRender::physicalSpace[a.X][i]->Position.Y + SurvivalRender::physicalSpace[a.X][i]->positionElement.Y * Math::Abs(SurvivalRender::physicalSpace[a.X][i]->Scale.Y))) &&
					 (a.Y < (SurvivalRender::physicalSpace[a.X][i]->Position.Y + (SurvivalRender::physicalSpace[a.X][i]->positionElement.Y + SurvivalRender::physicalSpace[a.X][i]->sizeElement.Y * 3 / 4) * Math::Abs(SurvivalRender::physicalSpace[a.X][i]->Scale.Y)))) {
					impacto = 1;
					enemyUnit = SurvivalRender::physicalSpace[a.X][i];
				}
				return;
			}
		}
	}
	else {
		throwed = 0;
	}
}

Void FBAView::ArrowRender::ToDo() {
	if (throwed == 1) {
		this->Position = SFML::System::Vector2f(posInit.X + velocity.X * Timearrow->Elapsed.TotalSeconds, posInit.Y + velocity.Y * Timearrow->Elapsed.TotalSeconds + (PhysicalElement::g * PhysicalElement::pixPerMeter / 2) * Math::Pow(Timearrow->Elapsed.TotalSeconds, 2));
		if (arrowBall) {
			this->Rotation = (Math::Atan((velocity.Y + PhysicalElement::g * PhysicalElement::pixPerMeter * Timearrow->Elapsed.TotalSeconds) / (velocity.X))) * 180 / Math::PI;
		}
		else {
			this->Rotation += 15;
		}
		if (this->Position.Y > 1000)
			throwed = 0;
	}
	if (impacto) {
		enemyUnit->LoseLife(damage);
		impacto = 0;
		throwed = 0;
	}
}
