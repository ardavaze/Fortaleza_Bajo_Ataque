#include "UserLifeBar.h"

FBAView::UserLifeBar::UserLifeBar()
{
    board = gcnew RenderTexture(510, 170);
    avatar = gcnew Sprite;
    avatarMold = gcnew Sprite;
    avatarBackground_Life = gcnew Sprite;
    avatar->Scale= Vector2f(0.25, 0.25);
    avatarMold->Scale= Vector2f(1, 1);
    avatarBackground_Life->Scale = Vector2f(1, 1);
    avatar->Position= Vector2f(50, 20);
    avatarMold->Position = Vector2f(0, 0);
    avatarBackground_Life->Position = Vector2f(0, 0);
}

void FBAView::UserLifeBar::UpdateUserHP(double HP)
{   
    avatarBackground_Life->Texture = healthBar->GetBar(HP);
    board->Clear(SFML::Graphics::Color::Color(0,0,0,0));
    board->Draw(avatarBackground_Life);
    board->Draw(avatar);
    board->Draw(avatarMold);
    board->Display();
    this->Texture = board->Texture;
}

void FBAView::UserLifeBar::ProcessCollision()
{
    
}

void FBAView::UserLifeBar::UseSpace()
{
    for (int i = 0; i < b->Count; i++)
    {
        b[i]->OcuppySpace(this->controlSpace);
    }
}

