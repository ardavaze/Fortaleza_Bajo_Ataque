#pragma once
#include "ControlElements.h"

using namespace SFML::Graphics;
namespace FBAView {
	public ref class Button:ControlElements{
	public:

		Sprite^ buttonSprite;
		virtual void ProcessCollision(int x, int y) override;
		virtual void EventClick() override;
		void MouseCollision(ClickArgs^) override;
	};
}
