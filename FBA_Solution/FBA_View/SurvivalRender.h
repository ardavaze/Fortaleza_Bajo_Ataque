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
		Sprite^ castle;
		Sprite^ background;
		Sprite^ crossbow;
		Sprite^ arrow;
		List<FBAModel::Units^>^ unit_allies;
		List<FBAModel::Units^>^ unit_enemies;
		List<UnitRender^>^ unit_allies_field;
		Event event;
		System::Diagnostics::Stopwatch^ TimeGenerate;
		void InitializeGraphics();
		void GenerateUnits();
		void ThrowArrow();
	};
}
