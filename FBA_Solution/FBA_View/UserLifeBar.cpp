#include "UserLifeBar.h"

FBAView::UserLifeBar::UserLifeBar()
{
    board = gcnew RenderTexture(510, 170);
    avatar = gcnew Sprite;
    avatarMold = gcnew Sprite;
    avatarBackground = gcnew Sprite;
    life = gcnew Sprite;
    avatar->Scale= Vector2f(1, 1);
    avatarMold->Scale= Vector2f(1, 1);
    avatarBackground->Scale = Vector2f(1, 1);
    life->Scale = Vector2f(1, 1);
    avatar->Position= Vector2f(50, 50);
    avatarMold->Position = Vector2f(0, 0);
    avatarBackground->Position = Vector2f(0, 0);
    life->Position = Vector2f(200, 50);

}

void FBAView::UserLifeBar::UpdateUserHP()
{
    board->Clear();
    board->Draw(avatarBackground);
    board->Draw(avatar);
    board->Draw(life);
    board->Draw(avatarMold);

}
