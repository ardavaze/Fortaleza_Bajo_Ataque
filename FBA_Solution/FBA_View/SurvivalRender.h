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
		/// GameElements
		List<FBAModel::Units^>^ unitAllies;
		List<FBAModel::Units^>^ unitEnemies;
		FBAModel::Projectile^ projectile;
		Base^ base;
		FBAModel::Skin_Background^ skinBackground;
		/// Elementos Graficos
		BackGroundRender^ background;
		HealthBar^ healthBar;
		array<List<PhysicalElement^>^>^ physicalElemts;
		CastleRender^ castle;
		List<ControlElements^>^ controlElemts;
		Sprite^ console;
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
		Void GenerateUnits_enemies(Units^);
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
		Void avatarclick(System::Object^ sender, ClickArgs^ e) {
			castle->HP -= 10;
		}
	};
}
