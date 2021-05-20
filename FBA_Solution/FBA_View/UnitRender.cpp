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
	this->Scale = Vector2f(0.7, 0.7);
	contador++;
}

Void FBAView::UnitRender::MakeMove(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		this->Texture = unit->MoveAnimation[indice]->Texture;
		position.X += 2;
		this->Position = Vector2f(position.X, position.Y);
		this->Scale = Vector2f(0.7,0.7);
	}
	contador++;
}
