#include "CastleRender.h"

Void FBAView::CastleRender::LostLife(int damage) {
	this->HP -= damage;
	
	if ((this->HP / this->base->Vida_max) > 0.6) {
		this->Texture = base->baseState[0]; //Sprite original
		this->indiceStatus = 0;
	}
	else if ((this->HP / this->base->Vida_max)<=0.6 && (this->HP / this->base->Vida_max) > 0.3) {
		this->Texture = base->baseState[1]; //2do sprite
		this->indiceStatus = 1;
	}
	else if ((this->HP / this->base->Vida_max) <= 0.3 && (this->HP / this->base->Vida_max) > 0) {
		this->Texture = base->baseState[2]; //3er sprite
		this->indiceStatus = 2;
	}
	else if (life <= 0) { muerto = 1; }

	return Void();
}