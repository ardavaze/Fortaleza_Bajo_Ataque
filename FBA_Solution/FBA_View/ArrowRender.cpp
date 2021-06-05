#include "ArrowRender.h"
#include "SurvivalRender.h"
void FBAView::ArrowRender::MakeFly(){
	Timearrow->Stop();
	this->Position = SFML::System::Vector2f(xInicial + velX * Timearrow->Elapsed.TotalSeconds, yInicial + velY * Timearrow->Elapsed.TotalSeconds + (400 / 2) * Math::Pow(Timearrow->Elapsed.TotalSeconds, 2));
	this->Rotation= (Math::Atan((velY+400* Timearrow->Elapsed.TotalSeconds)/(velX)))*180/Math::PI;
	if ((this->Position.Y > 600) &&(this->Position.Y < 700)) {
		analizeCollision = 1;
	}
	else
		analizeCollision = 0;

	if (this->Position.Y > 1000)
		throwed = 0;
	Timearrow->Start();
}
void FBAView::ArrowRender::ProcessCollision(){
	//1920/20=96
	int a = (int)this->Position.X / 20; //# del physicalspace
	for (int i = 0; i < SurvivalRender::physicalSpace[a]->Count; i++) {
		if ((SurvivalRender::physicalSpace[a][i]->band == FBAModel::Game_obj::Band::Enemies) && (this->Position.Y > SurvivalRender::physicalSpace[a][i]->Position.Y - 50) && (this->Position.Y < SurvivalRender::physicalSpace[a][i]->Position.Y + 50)) {    //Si es enemigo
			impacto = 1;
			//SurvivalRender::physicalSpace[a][i]->BajarVida(20);
			SurvivalRender::physicalSpace[a][i]->Color=SFML::Graphics::Color::Red;
			return;
		}

	}
}

