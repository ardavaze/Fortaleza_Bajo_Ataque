#pragma once
using namespace SFML::Graphics;
using namespace System;
namespace FBAView {
	public ref class ClickArgs :public EventArgs {
	public:
		SFML::System::Vector2i mousePosition;
	};
	public ref class ControlElements:public Sprite{
	public:
		void OcuppySpace(array<array<ControlElements^>^>^);
		event System::EventHandler<ClickArgs^>^ click;
	public:
		virtual void MouseCollision(ClickArgs^);
	};

}

