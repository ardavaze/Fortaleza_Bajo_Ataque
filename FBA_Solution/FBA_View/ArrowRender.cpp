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
	for (int i = 0; i < SurvivalRender::physicalSpace[a.X]->Count; i++) {
		if ((SurvivalRender::physicalSpace[a.X][i]->band == FBAModel::Game_obj::Band::Enemies) && (a.Y > SurvivalRender::physicalSpace[a.X][i]->Position.Y) && (a.Y < SurvivalRender::physicalSpace[a.X][i]->Position.Y + 50)) {    //Si es enemigo
			impacto = 1;
			//SurvivalRender::physicalSpace[a][i]->BajarVida(20);
			SurvivalRender::physicalSpace[a.X][i]->Color=SFML::Graphics::Color::Red;
			return;
		}

	}
}

