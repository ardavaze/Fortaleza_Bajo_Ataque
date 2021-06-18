#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
#include "CastleRender.h"
#include "PhysicalElement.h"
#include "Watch.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
namespace FBAView{
	public ref class SurvivalRender : public RenderWindow {
	public:
		SurvivalRender();/* : RenderWindow(mod, title, style) {}*/
		Form^ owner;
		array<List<PhysicalElement^>^>^ physicalElemts;
		Void Run();
		Sprite^ background;
		CastleRender^ castle;
		Base^ base;
		Sprite^ cover;
		Sprite^ crossbow;
		FBAModel::Projectile^ arrowsAvailable;
		ArrowRender^ arrow;
		System::Diagnostics::Stopwatch^ TimeThrowArrow;
		List<FBAModel::Units^>^ unit_allies;
		List<FBAModel::Units^>^ unit_enemies;
		System::Diagnostics::Stopwatch^ TimeGenerate;
		int gameOver;
		void endGame();
		Sprite^ gameOverImage;
		Sprite^ userImage;
		//
		//Watch
		//
		Watch^ watch;
		void InitializeGraphics();
		Void Procesar_evento();
		Event event;
		void GenerateUnits(Units^);
		void ThrowArrow();
		void GenerateUnits_enemies(Units^);
		System::Diagnostics::Stopwatch^ TimeEnemies;
		System::Diagnostics::Stopwatch^ chronoGameOver;
		static array<List<PhysicalElement^>^>^ physicalSpace = gcnew array<List<PhysicalElement^>^>(96);
		int piso = 740;
		System::Diagnostics::Stopwatch^ render;
	};
}
