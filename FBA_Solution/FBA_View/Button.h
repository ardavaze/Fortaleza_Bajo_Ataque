#pragma once
#include "ControlElements.h"
using namespace SFML::Graphics;
namespace FBAView {
	public ref class Button:ControlElements{
	public:
		Button();
		//Font^ letterFont;
		//Text^ letterText;
		Sprite^ unitSprite;
		RectangleShape^ verticalLine;
		RectangleShape^ horizontalLine;
	
	};
}
