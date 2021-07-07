#include "BackGroundRender.h"

FBAView::BackGroundRender::BackGroundRender(FBAModel::Skin_Background^ backGround) {
	BG1 = gcnew Sprite(backGround->texture);
	BG2 = gcnew Sprite(backGround->texture);
	BG2->Position = Vector2f(BG1->Texture->Size.X+ BG2->Texture->Size.X,0);
	BG2->Scale = Vector2f(-1,1);
	board = gcnew RenderTexture(BG1->Texture->Size.X + BG2->Texture->Size.X,BG1->Texture->Size.Y);
	PaintTexture();
}

Void FBAView::BackGroundRender::PaintTexture() {    
	this->board->Clear();
	this->board->Draw(BG1);
	this->board->Draw(BG2);
	this->board->Display();
	this->Texture = this->board->Texture;
	return Void();
}
