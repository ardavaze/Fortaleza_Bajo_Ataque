#pragma once
#include "UnitRender.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System::Collections::Generic;
using namespace FBA_Controller;
namespace FBAView{
	public ref class SurvivalRender : public RenderWindow {
	public:
		SurvivalRender();/* : RenderWindow(mod, title, style) {}*/
		void Run();
		void Procesar_evento();
		Texture^ background_text;
		Sprite^ background;
		List<UnitRender^>^ unit_allies;
		List<UnitRender^>^ unit_enemies;
		Event evento;
	};
}
