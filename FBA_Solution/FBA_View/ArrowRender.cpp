#include "ArrowRender.h"
#include "SurvivalRender.h"
void FBAView::ArrowRender::MakeFly(){
	Timearrow->Stop();
	this->Position = SFML::System::Vector2f(xInicial + velX * Timearrow->Elapsed.TotalSeconds, yInicial + velY * Timearrow->Elapsed.TotalSeconds + (400 / 2) * Math::Pow(Timearrow->Elapsed.TotalSeconds, 2));
	this->Rotation= (Math::Atan((velY+400* Timearrow->Elapsed.TotalSeconds)/(velX)))*180/Math::PI;
	if (this->Position.Y > 1000)
		throwed = 0;
	Timearrow->Start();
}
void FBAView::ArrowRender::ProcessCollision(){
	//1920/20=96
	Vector2i a;
	a.X = ((int)this->Position.X + 953*0.125*Math::Cos((this->Rotation)*Math::PI/180) ) / 20;//# del physicalspace
	a.Y = this->Position.Y + 953 * 0.125 * Math::Sin((this->Rotation) * Math::PI / 180);
	if (a.X<95){
		for (int i = 0; i < SurvivalRender::physicalSpace[a.X]->Count; i++) {
			if ((SurvivalRender::physicalSpace[a.X][i]->band == FBAModel::Game_obj::Band::Enemies) && (a.Y >= (SurvivalRender::physicalSpace[a.X][i]->Position.Y + SurvivalRender::physicalSpace[a.X][i]->positionElement.Y * Math::Abs(SurvivalRender::physicalSpace[a.X][i]->Scale.Y))) && (a.Y < (SurvivalRender::physicalSpace[a.X][i]->Position.Y + (SurvivalRender::physicalSpace[a.X][i]->positionElement.Y + SurvivalRender::physicalSpace[a.X][i]->sizeElement.Y * 3 / 4) * Math::Abs(SurvivalRender::physicalSpace[a.X][i]->Scale.Y)))) {    //Si es enemigo
				impacto = 1;
				//SurvivalRender::physicalSpace[a][i]->BajarVida(20);
				if ((SurvivalRender::physicalSpace[a.X][i] !=nullptr)&&(SurvivalRender::physicalSpace[a.X][i]->state!=UnitRender::States::Die)) {
					SurvivalRender::physicalSpace[a.X][i]->LoseLife(80);
				}
				this->throwed = 0;
				return;
			}
		}
	}
	else {
		throwed = 0;
	}
}

