#include "pch.h"
#include "FBA_Controller.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
#include <string>
using namespace std;
Texture^ FBA_Controller::FBAController::Get_texture() {
	return backgroundTexture;
}

void FBA_Controller::FBAController::Set_texture(String^ background) {
	backgroundTexture = gcnew Texture(background);
}

Sprite^ FBA_Controller::FBAController::Get_sprite() {

	return backgroundSprite;
}

void FBA_Controller::FBAController::Set_sprite(Texture^ background) {
	backgroundSprite = gcnew Sprite(background);
	backgroundSprite->Origin = Vector2f(backgroundSprite->Texture->Size.X / 2.f, backgroundSprite->Texture->Size.Y / 2.f);  //Poner origen en el centro
	backgroundSprite->Position = Vector2f(960, 540);
	backgroundSprite->Scale = Vector2f(1920.f / backgroundSprite->Texture->Size.X, 1080.f / backgroundSprite->Texture->Size.Y);
}

