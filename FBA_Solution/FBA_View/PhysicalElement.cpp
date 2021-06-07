#include "PhysicalElement.h"
#include "SurvivalRender.h"
void FBAView::PhysicalElement::OccupySpace() {
	this->size.X = (this->sizeElement.X) * Math::Abs(this->Scale.X);//calculamos el ancho y alto de los elementos considerando la escala a la que esten
	this->size.Y = (this->sizeElement.Y) * Math::Abs(this->Scale.Y);
	Vector2f positionElementaux;
	if ((this->Scale.X/ Math::Abs(this->Scale.X)) >0) {
		positionElementaux.X = this->Position.X + (this->positionElement.X * Math::Abs(this->Scale.X));
	}
	else {
		positionElementaux.X = this->Position.X + ((this->Texture->Size.X - (this->positionElement.X + this->sizeElement.X)) * Math::Abs(this->Scale.X));
	}
	positionElementaux.Y=this->Position.Y;
	if ((int(positionElementaux.X) % 20) < 10) {
		frstRectangule = (int(positionElementaux.X) / 20);//primer rectangulo
	}
	else {
		frstRectangule = (int(positionElementaux.X) / 20) + 1;
	}
	if ((int(this->size.X) % 20) < 10) {
		numRectangule = int(this->size.X) / 20; //todos los rectangulos que va a ocupar el elemento
	}
	else {
		numRectangule = (int(this->size.X) / 20) + 1;
	}
	index = gcnew array<int>(numRectangule);
	for (int i = 0; i < numRectangule; i++){
		if (((frstRectangule + i) < 96) && ((frstRectangule + i) >= 0)) { //aseguramos que el elemento está entre los 96 rectangulos del espacio fisico
			index[i] = (SurvivalRender::physicalSpace[frstRectangule + i]->Count);
			SurvivalRender::physicalSpace[frstRectangule + i]->Add(this);
		}
	}
}
void FBAView::PhysicalElement::FreeSpace() {
	for (int i = 0; i < numRectangule; i++) {  //todos los rectangulos que va a ocupar el elemento
		if (((frstRectangule + i) < 96) && ((frstRectangule + i) >= 0)) {  //aseguramos que el elemento está entre los 96 rectangulos del espacio fisico
			SurvivalRender::physicalSpace[frstRectangule + i]->RemoveAt(index[i]);
		}
	}
}
