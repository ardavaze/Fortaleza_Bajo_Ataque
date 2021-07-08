#include "UserLifeBar.h"

FBAView::UserLifeBar::UserLifeBar(String^nickname, String^avatarString, String^ rank) {
    board = gcnew RenderTexture(510, 170);
    avatar = gcnew Sprite;
    avatarMold = gcnew Sprite;
    avatarBackground_Life = gcnew Sprite;
    usernameText = gcnew SFML::Graphics::Text;
    rankSprite= gcnew Sprite;

    avatar->Scale= Vector2f(0.25, 0.25);
    avatarMold->Scale= Vector2f(1, 1);
    avatarBackground_Life->Scale = Vector2f(1, 1);
    usernameText->Scale = Vector2f(2, 1);
    rankSprite->Scale = Vector2f(0.30, 0.30);
    
    avatar->Position= Vector2f(55,15);
    avatarMold->Position = Vector2f(0, 0);
    avatarBackground_Life->Position = Vector2f(0, 0);
    usernameText->Position = Vector2f(250, 63);
    usernameText->Color = SFML::Graphics::Color::Cyan;
    rankSprite-> Position = Vector2f(180, 16);
    rankSprite->Color = SFML::Graphics::Color::Color(255, 255, 255, 200);
    
    avatar->Texture = gcnew SFML::Graphics::Texture("Assets/ResourcesForm/Avatar/" +avatarString+ ".png");
    avatarMold->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/MapsElements/user life mold.png");
    healthBar = gcnew HealthBar("Assets/Environment/MapsElements/user life background.png", "Assets/Environment/MapsElements/barrita.png");
    Position = Vector2f(0, 0);
    Scale = Vector2f(1, 1);
    font = gcnew SFML::Graphics::Font("Assets/Fonts/SHAXIZOR.ttf");
    usernameText->Font = font;
    usernameText->DisplayedString = nickname;
    rankSprite->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/Rank/" + rank + ".png");
    
    internalControlElemts = gcnew List<ControlElements^>;
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

void FBAView::UserLifeBar::UpdateUserHP(double HP) {   
    healthBar->GetBar(HP);
    board->Clear(SFML::Graphics::Color::Color(0,0,0,0));
    board->Draw(healthBar);
    board->Draw(avatar);
    board->Draw(avatarMold);
    board->Draw(usernameText);
    board->Draw(rankSprite);
    board->Display();
    this->Texture = board->Texture;
}


