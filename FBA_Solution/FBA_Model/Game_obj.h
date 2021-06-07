using namespace SFML::Graphics;
using namespace System;
using namespace System::Collections::Generic;
#pragma once
namespace FBAModel {
	public ref class Game_obj {
	public:
		Texture^ Image;
		enum class TypeElement {
			Soldier
		};
		enum class Band {
			Allies, Enemies
		};
		Band band;
	};
}

