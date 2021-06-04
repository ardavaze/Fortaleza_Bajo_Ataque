#include "UnitRender.h"
#include "SurvivalRender.h"
Void FBAView::UnitRender::MakeAttack(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		this->Texture = unit->AttackAnimation[indice]->Texture;
	}
	if (this->unit->band == FBAModel::Game_obj::Band::Allies) {
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
		if(this->unit->band == FBAModel::Units::Band::Allies) {
			this->Scale = Vector2f(0.7, 0.7);
			Position= Vector2f(Position.X +2, Position.Y);
		}
		else {
			this->Scale = Vector2f(-0.7, 0.7);
			Position= Vector2f(Position.X-2, Position.Y);
		}
	}
	contador++;
}



