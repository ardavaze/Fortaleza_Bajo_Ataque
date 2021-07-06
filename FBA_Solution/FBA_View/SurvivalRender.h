#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
#include "CastleRender.h"
#include "PhysicalElement.h"
#include "Watch.h"
#include "UserLifeBar.h"
#include "HealthBar.h"
#include "Console.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace SFML::Audio;
using namespace System;
namespace FBAView{
	public ref class SurvivalRender : public RenderWindow {
	public:
		SurvivalRender();/* : RenderWindow(mod, title, style) {}*/
		SFML::Graphics::View^ a;
		SFML::Graphics::View^ b;
		HealthBar^ healthBar;
		Form^ owner;
		array<List<PhysicalElement^>^>^ physicalElemts;
		List<ControlElements^>^ controlElemts;
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
		int gameOver;
		void endGame();
		Sprite^ gameOverImage;
		SoundBuffer^ gameSoundBuffer;
		Sound^ gameSound;
		FBAView::Console^ userConsole;
		static int userCoins=100;
		static int barbarianQueue=0;
		static int dwarfQueue=0;
		static System::Diagnostics::Stopwatch^ barbarianTime;
		static System::Diagnostics::Stopwatch^ dwarfTime;
		void BarbarianEvent();
		void DwarfEvent();
		//
		//Watch
		//
		void TimeAnalysis();
		UserLifeBar^ userAvatar;
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
		static array<array<ControlElements^>^>^ controlSpace = gcnew array<array<ControlElements^>^>(1920);
		int piso = 740;
		System::Diagnostics::Stopwatch^ render;
		Void barbarianClick(System::Object^ sender, ClickArgs^ e) {
			BarbarianEvent();
		}
		Void dwarfClick(System::Object^ sender, ClickArgs^ e) {
			DwarfEvent();
		}
		void avatarclick(System::Object^ sender, ClickArgs^ e) {
			castle->HP -= 10;
		}
		
	};
}
