#pragma once
#include "Container.h";
#include "Button.h";
using namespace SFML::System;
namespace FBAView {
	public ref class Console :Container {
	public:
		Sprite^ consoleMold;
		Button^ barbarianButton;
		Button^ dwarfButton;
		Button^ wraithButton;
		SFML::Graphics::Font^ ConsoleFont1;
		SFML::Graphics::Font^ ConsoleFont2;
		SFML::Graphics::Text^ barbarianLetter;
		SFML::Graphics::Text^ dwarfLetter;
		SFML::Graphics::Text^ wraithLetter;
		SFML::Graphics::Text^ barbarianCost;
		SFML::Graphics::Text^ dwarfCost;
		SFML::Graphics::Text^ wraithCost;
		SFML::Graphics::Text^ userCoins;
		RectangleShape^ separator;
		Sprite^ coin1;
		Sprite^ coin2;
		Sprite^ coin3;
		Sprite^ coin4;
		RenderTexture^ board;
		Console();
		void UpdateQueue();
	};
}
