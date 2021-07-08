#pragma once
using namespace SFML::Graphics;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class ClickArgs :public EventArgs {
	public:
		SFML::System::Vector2i mousePosition;
		SFML::System::Vector2i mousePositionBefore;
		enum class MouseState {
			Over,
			Leave,
			inside
		};
		MouseState mouseState;
	};

	public ref class ControlElements :public Sprite {
	public:
		Void OcuppySpace(array<array<ControlElements^>^>^);
		event System::EventHandler<ClickArgs^>^ click;
		event System::EventHandler<ClickArgs^>^ mouseOver;
		event System::EventHandler<ClickArgs^>^ mouseLeave;
		virtual Void MouseCollision(ClickArgs^);
		virtual Void MouseMove(ClickArgs^);
	};
}

