#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
#include "CastleRender.h"
#include "PhysicalElement.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System::Collections::Generic;
namespace FBAView{
	public ref class SurvivalRender : public RenderWindow {
	public:
		SurvivalRender();/* : RenderWindow(mod, title, style) {}*/
		array<List<PhysicalElement^>^>^ physicalElemts;
		Void Run();
		Void Procesar_evento();
		CastleRender^ castle;
		Sprite^ background;
		Sprite^ crossbow;
		FBAModel::Projectile^ arrowsAvailable;
		ArrowRender^ arrow;
		System::Diagnostics::Stopwatch^ TimeThrowArrow;
		List<FBAModel::Units^>^ unit_allies;
		List<FBAModel::Units^>^ unit_enemies;
		Event event;
		System::Diagnostics::Stopwatch^ TimeGenerate;
		void InitializeGraphics();
		void GenerateUnits(Units^);
		void ThrowArrow();
		void GenerateUnits_enemies(Units^);
		System::Diagnostics::Stopwatch^ TimeEnemies;
		static array<List<PhysicalElement^>^>^ physicalSpace = gcnew array<List<PhysicalElement^>^>(96);

		System::Diagnostics::Stopwatch^ Chronometer;
		System::Diagnostics::Stopwatch^ ChronometerAux;
		Sprite^ segUnidad;
		Sprite^ segDecena;
		Sprite^ minUnidad;
		Sprite^ minDecena;
		Sprite^ dosPuntos;
		int segUnidTranscurridos = 0;
		int segDecTranscurridos = 0;
		int minUnidTranscurridos = 0;
		int minDecTranscurridos = 0;
		void ActualizarNumero();

		User^ user;
		Base^ base;

		int piso=740;
		Sprite^ cover;
	};
}
