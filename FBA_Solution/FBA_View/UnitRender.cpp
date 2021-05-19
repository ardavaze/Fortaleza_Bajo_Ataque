#include "UnitRender.h"

Void FBAView::UnitRender::MakeAttack(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		Actual = Attack[indice];
	}
	contador++;
}

Void FBAView::UnitRender::MakeMove(){
	if (contador >= FactorLentitud) {
		contador = 0;
		indice++;
		if (indice > 19)
			indice = 0;
		Actual = Move[indice];
		position.X += 2;
		Actual->Position = Vector2f(position.X, position.Y);
	}
	contador++;
}
