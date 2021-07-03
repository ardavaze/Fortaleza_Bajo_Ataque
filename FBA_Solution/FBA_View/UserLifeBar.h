#pragma once
#include "Container.h";
#include "HealthBar.h";
#include "Button.h";
using namespace SFML::System;
using namespace SFML::Graphics;
namespace FBAView {
	public ref class UserLifeBar:Container{
	public:
		Sprite^ avatar;
		Sprite^ avatarMold;
		Sprite^ avatarBackground_Life;
		List<ControlElements^>^ internalControlElemts;
		SFML::Graphics::Font^ font;
		static SFML::Graphics::Text^ usernameText;
		RenderTexture^ board;
		HealthBar^ healthBar;
		UserLifeBar(String^,String^);
		void UpdateUserHP(double);
		/*virtual void ProcessCollision(int , int ) override;*/
		Button^ avatarButton;
		virtual void EventClick () override;
	private: void InternalOcuppySpace();
	};

}

