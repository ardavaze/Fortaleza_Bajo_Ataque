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
		this->Origin = Vector2f(this->Texture->Size.X, 0);
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
			this->Origin = Vector2f(this->Texture->Size.X,0);
			Position= Vector2f(Position.X-2, Position.Y);
		}
	}
	contador++;
}

void FBAView::UnitRender::ProcessCollision() {
	for (int i = 0; i < 2; i++) {
		if (((int(this->Position.X) / 20) + (((int(this->Position.X) % 20) < 10) ? 0 : 1) +
			(this->TextureRect.Width / 20) + (((this->TextureRect.Width % 20) == 0) ? 0 : 1) + ((this->band == FBAModel::Game_obj::Band::Allies) ? i : (i * -1)))<96) {
			int k =  (int(this->Position.X) / 20) + ( ( (int(this->Position.X) % 20) < 10) ? 0 : 1 ) +
				(this->TextureRect.Width / 20) + ( ( (this->TextureRect.Width % 20) == 0) ? 0 : 1) + ( (this->band == FBAModel::Game_obj::Band::Allies) ? i : (i * -1) );
			for (int j = 0; j < SurvivalRender::physicalSpace[(int(this->Position.X) / 20) + (((int(this->Position.X) % 20) < 10) ? 0 : 1) +
				(this->TextureRect.Width / 20) + (((this->TextureRect.Width % 20) == 0) ? 0 : 1) + ((this->band == FBAModel::Game_obj::Band::Allies) ? i : (i * -1))]->Count
				; j++) {
				if (SurvivalRender::physicalSpace[(int(this->Position.X) / 20) + (((int(this->Position.X) % 20) < 10) ? 0 : 1) +
					(this->TextureRect.Width / 20) + (((this->TextureRect.Width % 20) == 0) ? 0 : 1) + ((this->band == FBAModel::Game_obj::Band::Allies) ? i : (i * -1))][j]->band != this->band) {
					this->attackMove = 1;
					return;
				}
			}
		}
	}
	this->attackMove = 0;
}

void FBAView::UnitRender::Todo(){
	if (attackMove)
		MakeAttack();
	else
		MakeMove();
}



