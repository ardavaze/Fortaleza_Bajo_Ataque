#include "UnitRender.h"

Void FBAView::UnitRender::MakeAttack(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		this->Texture = unit->AttackAnimation[indice]->Texture;
	}
	this->Position = Vector2f(position.X, position.Y);
	if (this->unit->band == FBAModel::Units::Band::allies) {
		this->Scale = Vector2f(0.7, 0.7);
	}
	else {
		this->Scale = Vector2f(-0.7, 0.7);
	}
	contador++;
}

Void FBAView::UnitRender::MakeMove(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		this->Texture = unit->MoveAnimation[indice]->Texture;
		if(this->unit->band == FBAModel::Units::Band::allies) {
			this->Scale = Vector2f(0.7, 0.7);
			position.X += 2;
		}
		else {
			this->Scale = Vector2f(-0.7, 0.7);
			position.X -= 2;
		}
		this->Position = Vector2f(position.X, position.Y);
	}
	contador++;
}
