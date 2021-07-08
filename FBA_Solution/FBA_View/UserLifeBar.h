#pragma once
#include "Container.h";
#include "HealthBar.h";
#include "Button.h";
namespace FBAView {
	public ref class UserLifeBar:Container{
	public:
		Sprite^ avatar;
		Sprite^ avatarMold;
		Sprite^ avatarBackground_Life;
		Sprite^ rankSprite;
		SFML::Graphics::Font^ font;
		static SFML::Graphics::Text^ usernameText;
		RenderTexture^ board;
		HealthBar^ healthBar;
		UserLifeBar(String^,String^, String^);
		void UpdateUserHP(double);

		
	};

}

