#pragma once
using namespace SFML::Graphics;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class HealthBar {
	public:
		HealthBar();
		array<SFML::Graphics::Texture^>^ healthBar;
		array<Texture^>^ parts;
		Texture^ GetBar(double );
		Void Generate();
	};
}

