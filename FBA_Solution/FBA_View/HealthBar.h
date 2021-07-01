#pragma once
using namespace SFML::Graphics;
using namespace System;
using namespace System::Collections::Generic;
using namespace SFML::System;
namespace FBAView {
	public ref class HealthBar {
	public:
		HealthBar();
		HealthBar(String^, String^ );
		array<SFML::Graphics::Texture^>^ healthBar;
		array<Texture^>^ parts;
		Texture^ GetBar(double );
		Void Generate(int);
		Vector2i position;
		bool corner;
	};
}

