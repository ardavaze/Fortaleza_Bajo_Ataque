#pragma once
#include "ControlElements.h"
using namespace SFML::Graphics;
namespace FBAView {
	public ref class ConsoleButton:ControlElements{
	public:
		ConsoleButton();
		Font^ letterFont;
		Text^ letterText;
		Sprite^ unitSprite;
		RectangleShape^ verticalLine;
		RectangleShape^ horizontalLine;
	
	};
}
