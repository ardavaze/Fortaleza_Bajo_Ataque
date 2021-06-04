#include "PhysicalElement.h"
#include "SurvivalRender.h"
void FBAView::PhysicalElement::OccupySpace(int x) {
	for (int i = 0; i < ( TextureRect.Width/20 ) + ( TextureRect.Width%20 == 0 ? 0 : 1 ); i++) {
		physics->index = (SurvivalRender::physicalSpace[int(Position.X) / 20 + int(Position.X) % 20 < 10 ? 0 : 1 + i]->Count);
		SurvivalRender::physicalSpace[ ( int(Position.X)/20 ) + ( int(Position.X)%20 < 10 ? 0 : 1 ) + i]->Add(physics);
	}
}
void FBAView::PhysicalElement::FreeSpace() {
	for (int i = 0; i < (TextureRect.Width / 20) + (TextureRect.Width % 20 == 0 ? 0 : 1); i++) {
		SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) + i]->RemoveAt(index);

	}
}
