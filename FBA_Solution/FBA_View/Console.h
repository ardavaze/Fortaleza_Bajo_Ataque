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
		SFML::Graphics::Text^ barbarianLetter;
		SFML::Graphics::Text^ dwarfLetter;
		SFML::Graphics::Text^ wraithLetter;
		SFML::Graphics::Text^ barbarianCost;
		SFML::Graphics::Text^ dwarfCost;
		SFML::Graphics::Text^ wraithCost;
		RenderTexture^ board;
		Console();
		void UpdateQueue();
	};
}
