#include "CastleRender.h"

FBAView::CastleRender::CastleRender(FBAModel::Base^base) {
	this->base = base;
	this->HP = base->Vida_max;
	this->Texture = base->baseState[0];
	this->cover = gcnew Sprite(base->coverState[0]);
}

Void FBAView::CastleRender::LoseLife(int damage) {
	this->HP -= damage;
	this->HPBar->UpdateUserHP(double(this->HP) / this->base->Vida_max);
	if ((double(this->HP) / this->base->Vida_max) > 0.6) {
		this->Texture = base->baseState[0]; //Sprite original
		this->cover->Texture = base->coverState[0];
		

	}
	else if ((double(this->HP) / this->base->Vida_max)<=0.6 && (double(this->HP) / this->base->Vida_max) > 0.3) {
		this->Texture = base->baseState[1]; //2do sprite
		this->cover->Texture = base->coverState[1];
		if (firstTime1) {
			base->deathSound->Play();
			firstTime1 = 0;
		}
	}
	else if ((double(this->HP) / this->base->Vida_max) <= 0.3 && (double(this->HP) / this->base->Vida_max) > 0) {
		this->Texture = base->baseState[2]; //3er sprite
		this->cover->Texture = base->coverState[2];
		if (firstTime2) {
			base->deathSound->Play();
			firstTime2 = 0;
		}
	}
	else if (HP <= 0) {
		HP = 0;
		state = States::Die;
		if (firstTime3) {
			base->deathSound->Play();
			firstTime3 = 0;
		}
	}
	return Void();
}

Void FBAView::CastleRender::ProcessCollision() {
	return Void();
}

Void FBAView::CastleRender::ToDo() {
	if (!arrowRender->throwed) {
		this->arrowRender->Position = crossbow->Position;
		this->arrowRender->Rotation = this->crossbow->Rotation;
	}
}

Void FBAView::CastleRender::ThrowArrow() {
	if (arrowRender->throwed == 0) {
		base->attackSound->Play();
		arrowRender->throwed = 1;
		arrowRender->velocity.X = arrowRender->arrow->Velocity * Math::Cos((arrowRender->Rotation) * Math::PI / 180);
		arrowRender->velocity.Y = arrowRender->arrow->Velocity * Math::Sin((arrowRender->Rotation) * Math::PI / 180);
		arrowRender->Timearrow = gcnew System::Diagnostics::Stopwatch;
		arrowRender->Timearrow->Restart();
		arrowRender->posInit.X = arrowRender->Position.X;
		arrowRender->posInit.Y = arrowRender->Position.Y;
	}
}
