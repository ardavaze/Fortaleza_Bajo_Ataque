#include "ControlElements.h"
#include "SurvivalRender.h"

void FBAView::ControlElements::OcuppySpace(array<array<ControlElements^>^>^ controlSpace)
{
	int incialX = this->Position.X;
	int incialY = this->Position.Y;
	int finalX=incialX+ Math::Round(Math::Abs(this->Texture->Size.X * this->Scale.X));
	int finalY = incialY + Math::Round(Math::Abs(this->Texture->Size.Y * this->Scale.Y));
	Image^ image = this->Texture->CopyToImage();
	for (int i=incialX; i < finalX; i++) {
		for (int j = incialY; j < finalY; j++) {
			if (image->GetPixel((i-incialX)/ this->Scale.X,(j-incialY)/ this->Scale.Y).A>122) {
				controlSpace[i][j] = this;
			}
		}
	}

}

void FBAView::ControlElements::MouseCollision(ClickArgs^)
{
	throw gcnew System::NotImplementedException();
}
