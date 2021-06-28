#pragma once
#include "ControlElements.h";
using namespace SFML::System;
namespace FBAView {
	public ref class UserLifeBar:ControlElements{
	public:
		Sprite^ avatar;
		Sprite^ avatarMold;
		Sprite^ avatarBackground;
		Sprite^ life;	
		Font^ font;
		Text^ usernameText;
		RenderTexture^ board;
		UserLifeBar();
		void UpdateUserHP();
	};

}

