#include "PhysicalElement.h"
#include "SurvivalRender.h"
void FBAView::PhysicalElement::OccupySpace() {
	for (int i = 0; i < ( TextureRect.Width/20 ) + ( TextureRect.Width%20 == 0 ? 0 : 1 ); i++) {
		if (((int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) + i) < 96) {
			index = (SurvivalRender::physicalSpace[int(Position.X) / 20 + int(Position.X) % 20 < 10 ? 0 : 1 + i]->Count);
			SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) + i]->Add(this);
		}
	}
}
void FBAView::PhysicalElement::FreeSpace() {
	for (int i = 0; i < (TextureRect.Width / 20) + (TextureRect.Width % 20 == 0 ? 0 : 1); i++) {
		if (((int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) + i) < 96) {
			SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) + i]->RemoveAt(index);
		}
}
}
