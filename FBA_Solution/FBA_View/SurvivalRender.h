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
		System::Diagnostics::Stopwatch^ TimeGenerate;
		int gameOver;
		void endGame();
		Sprite^ gameOverImage;
		SoundBuffer^ gameSoundBuffer;
		Sound^ gameSound;
		FBAView::Console^ userConsole;
		
		//
		//Watch
		//
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
			TimeGenerate->Stop();
			if (TimeGenerate->Elapsed.TotalSeconds > 6) {
				GenerateUnits(this->unit_allies[0]);
				TimeGenerate->Restart();
			}
			else TimeGenerate->Start();
		}
		void avatarclick(System::Object^ sender, ClickArgs^ e) {
			castle->HP -= 10;
		}
		
	};
}
