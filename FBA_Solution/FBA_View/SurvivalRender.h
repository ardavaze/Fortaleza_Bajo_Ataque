#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
#include "Physics.h"
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
		FBAModel::Projectile^ arrowsAvailable;
		ArrowRender^ arrow;
		System::Diagnostics::Stopwatch^ TimeThrowArrow;
		List<FBAModel::Units^>^ unit_allies;
		List<FBAModel::Units^>^ unit_enemies;
		List<UnitRender^>^ unit_allies_field;
		List<UnitRender^>^ unit_enemies_field;
		Event event;
		System::Diagnostics::Stopwatch^ TimeGenerate;
		void InitializeGraphics();
		void GenerateUnits();
		void ThrowArrow();
		void GenerateUnits_enemies();
		System::Diagnostics::Stopwatch^ TimeEnemies;
		void ProcessCollision();
		bool ProcessCollisionUnits(UnitRender^ unit);
		static array<List<Physics^>^>^ physicalSpace = gcnew array<List<Physics^>^>(96);
	};
}
