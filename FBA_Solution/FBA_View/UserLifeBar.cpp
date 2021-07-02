#include "UserLifeBar.h"

FBAView::UserLifeBar::UserLifeBar(String^nickname, String^avatarString)
{   
    board = gcnew RenderTexture(510, 170);
    avatar = gcnew Sprite;
    avatarMold = gcnew Sprite;
    avatarBackground_Life = gcnew Sprite;
    usernameText = gcnew SFML::Graphics::Text;
    avatarButton = gcnew Button;
    avatar->Scale= Vector2f(0.25, 0.25);
    avatarMold->Scale= Vector2f(1, 1);
    avatarBackground_Life->Scale = Vector2f(1, 1);
    usernameText->Scale = Vector2f(2, 1);
    avatarButton->Scale = Vector2f(0.8, 0.8);
    avatar->Position= Vector2f(55,15);
    avatarMold->Position = Vector2f(0, 0);
    avatarBackground_Life->Position = Vector2f(0, 0);
    usernameText->Position = Vector2f(250, 63);
    usernameText->Color = SFML::Graphics::Color::Cyan;
    avatarButton->Position= Vector2f(174, 10);
    avatar->Texture = gcnew SFML::Graphics::Texture("Assets/ResourcesForm/Avatar/" +avatarString+ ".png");
    avatarMold->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/MapsElements/user life mold.png");
    healthBar = gcnew HealthBar("Assets/Environment/MapsElements/user life background.png", "Assets/Environment/MapsElements/barrita.png");
    Position = Vector2f(0, 0);
    Scale = Vector2f(1, 1);
    font = gcnew SFML::Graphics::Font("Assets/Fonts/SHAXIZOR.ttf");
    usernameText->Font = font;
    usernameText->DisplayedString = nickname;
    avatarButton->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/settings.png");
    UpdateUserHP(1);
    //
    int sizeX = Math::Round(Math::Abs(this->Texture->Size.X * this->Scale.X));
    int sizeY = Math::Round(Math::Abs(this->Texture->Size.Y * this->Scale.Y));
    internalControlSpace = gcnew array<array<ControlElements^>^>(sizeX);
    for (int i = 0; i < sizeX; i++) {
        internalControlSpace[i] = gcnew array<ControlElements^>(sizeY);
    }
    InternalOcuppySpace();
}

void FBAView::UserLifeBar::UpdateUserHP(double HP)
{   
    avatarBackground_Life->Texture = healthBar->GetBar(HP);
    board->Clear(SFML::Graphics::Color::Color(0,0,0,0));
    board->Draw(avatarBackground_Life);
    board->Draw(avatar);
    board->Draw(avatarMold);
    board->Draw(usernameText);
    board->Draw(avatarButton);
    board->Display();
    this->Texture = board->Texture;
}

void FBAView::UserLifeBar::ProcessCollision(int xMouse, int yMouse) {
    int x = xMouse - this->Position.X;
    int y = yMouse - this->Position.Y;
    if (internalControlSpace[x][y] != nullptr) {
        internalControlSpace[x][y]->ProcessCollision(x, y);
    }
    else {
        this->EventClick();
    }

    
}

//void FBAView::UserLifeBar::UseSpace()
//{
//    for (int i = 0; i < b->Count; i++)
//    {
//        b[i]->OcuppySpace(this->controlSpace);
//    }
//}

void FBAView::UserLifeBar::EventClick() {
    //NOTHING
}

void FBAView::UserLifeBar::InternalOcuppySpace()
{
    internalControlElemts = gcnew List<ControlElements^>;
    internalControlElemts->Add(avatarButton);
    for (int i = 0; i<internalControlElemts->Count;  i++)
    {
        internalControlElemts[i]->OcuppySpace(this->internalControlSpace);
    }
}


