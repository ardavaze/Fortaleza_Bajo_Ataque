#include "ArrowRender.h"

void ArrowRender::MakeFly(){
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
