#include "UserLifeBar.h"

FBAView::UserLifeBar::UserLifeBar()
{
    board = gcnew RenderTexture(510, 170);
    avatar = gcnew Sprite;
    avatarMold = gcnew Sprite;
    avatarBackground_Life = gcnew Sprite;
    usernameText = gcnew SFML::Graphics::Text;
    avatar->Scale= Vector2f(0.25, 0.25);
    avatarMold->Scale= Vector2f(1, 1);
    avatarBackground_Life->Scale = Vector2f(1, 1);
    avatar->Position= Vector2f(53, 20);
    avatarMold->Position = Vector2f(0, 0);
    avatarBackground_Life->Position = Vector2f(0, 0);
    usernameText->Position = Vector2f(250, 63);
    usernameText->Color = SFML::Graphics::Color::Cyan;
    usernameText->Scale = Vector2f(2, 1);
}

void FBAView::UserLifeBar::UpdateUserHP(double HP)
{   
    avatarBackground_Life->Texture = healthBar->GetBar(HP);
    board->Clear(SFML::Graphics::Color::Color(0,0,0,0));
    board->Draw(avatarBackground_Life);
    board->Draw(avatar);
    board->Draw(avatarMold);
    board->Draw(usernameText);
    board->Display();
    this->Texture = board->Texture;
}

void FBAView::UserLifeBar::ProcessCollision() {

    this->EventClick();
}

//void FBAView::UserLifeBar::UseSpace()
//{
//    for (int i = 0; i < b->Count; i++)
//    {
//        b[i]->OcuppySpace(this->controlSpace);
//    }
//}

void FBAView::UserLifeBar::EventClick() {
    throw gcnew System::NotImplementedException();
}

