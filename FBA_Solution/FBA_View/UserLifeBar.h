#pragma once
#include "ControlElements.h";
#include "HealthBar.h";
using namespace SFML::System;
using namespace SFML::Graphics;
namespace FBAView {
	public ref class UserLifeBar:ControlElements{
	public:
		Sprite^ avatar;
		Sprite^ avatarMold;
		Sprite^ avatarBackground_Life;
		/*SFML::Graphics::Font^ font;
		SFML::Graphics::Text^ usernameText;*/
		RenderTexture^ board;
		HealthBar^ healthBar;
		UserLifeBar();
		void UpdateUserHP(double);
	};

}

