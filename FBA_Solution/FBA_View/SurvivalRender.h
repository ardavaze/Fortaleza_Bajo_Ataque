#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
#include "CastleRender.h"
#include "PhysicalElement.h"
#include "Watch.h"
#include "UserLifeBar.h"
#include "HealthBar.h"
#include "UnitDistanceRender.h"
#include "BackGroundRender.h"
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
		/// GameElements Model
		List<FBAModel::Units^>^ unitAllies;
		List<FBAModel::Units^>^ unitEnemies;
		FBAModel::Projectile^ projectile;
		Base^ base;
		FBAModel::Skin_Background^ skinBackground;
		/// Elementos Graficos
		array<List<PhysicalElement^>^>^ physicalElemts;
		BackGroundRender^ background;
		HealthBar^ healthBar;
		CastleRender^ castle;
		List<ControlElements^>^ controlElemts;
		FBAView::Console^ userConsole;
		static int userCoins = 150;
		static int barbarianQueue = 0;
		static int dwarfQueue = 0;
		static int wraithQueue = 0;
		static System::Diagnostics::Stopwatch^ barbarianTime;
		static System::Diagnostics::Stopwatch^ dwarfTime;
		static System::Diagnostics::Stopwatch^ wraithTime;
		void BarbarianEvent();
		void DwarfEvent();
		void WraithEvent();
		void TimeAnalysis();
		UserLifeBar^ userAvatar;
		Watch^ watch;
		//Entorno Grafico
		int posx = 0;
		int piso = 740;
		static array<List<PhysicalElement^>^>^ physicalSpace = gcnew array<List<PhysicalElement^>^>(192);
		static array<array<ControlElements^>^>^ controlSpace = gcnew array<array<ControlElements^>^>(1920);
		SFML::Graphics::View^ a;
		SFML::Graphics::View^ b;
		SFML::Graphics::View^ miniMap;
		Form^ owner;
		int gameOver;
		Sprite^ gameOverImage;
		SoundBuffer^ gameSoundBuffer;
		Sound^ gameSound;
		//Metodos y utilitarios
		Void InitializeGraphics();
		Void Procesar_evento();
		Event event;
		Void Run();
		Void GenerateUnits(Units^);
		Void GenerateUnitsDistance(Units^);
		Void endGame();
		System::Diagnostics::Stopwatch^ TimeThrowArrow;
		System::Diagnostics::Stopwatch^ TimeGenerate;
		System::Diagnostics::Stopwatch^ TimeEnemies;
		System::Diagnostics::Stopwatch^ chronoGameOver;
		System::Diagnostics::Stopwatch^ render;

		Void userclick(System::Object^ sender, ClickArgs^ e) {
			TimeGenerate->Stop();
			if (TimeGenerate->Elapsed.TotalSeconds > 6) {
				GenerateUnits(this->unitAllies[0]);
				TimeGenerate->Restart();
			}
			else TimeGenerate->Start();
		}
		Void BarbarianClick(System::Object^ sender, ClickArgs^ e) {
			BarbarianEvent();
		}
		Void DwarfClick(System::Object^ sender, ClickArgs^ e) {
			DwarfEvent();
		}
		Void WraithClick(System::Object^ sender, ClickArgs^ e) {
			WraithEvent();
		}
		Void avatarclick(System::Object^ sender, ClickArgs^ e) {
			castle->HP -= 10;
		}
	};
}
