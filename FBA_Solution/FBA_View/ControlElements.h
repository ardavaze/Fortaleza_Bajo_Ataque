#pragma once
using namespace SFML::Graphics;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class ClickArgs :public EventArgs {
	public:
		SFML::System::Vector2i mousePosition;
	};

	public ref class ControlElements:public Sprite{
	public:
		Void OcuppySpace(array<array<ControlElements^>^>^);
		event System::EventHandler<ClickArgs^>^ click;
		virtual Void MouseCollision(ClickArgs^);
	};

}

