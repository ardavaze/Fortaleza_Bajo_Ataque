#pragma once
#include "ControlElements.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
namespace FBAView {
	public ref class Watch:ControlElements{
	public:
		Watch();
		array<SFML::Graphics::Texture^>^ numbers;
		SFML::Graphics::Texture^ twoPoints ;
		Sprite^ secUnit;
		Sprite^ secDecena;
		Sprite^ minUnit;
		Sprite^ minDecena;
		Sprite^ dosPuntos;
		RenderTexture^ board;
		int segUnidTranscurridos = 0;
		int segDecTranscurridos = 0;
		int minUnidTranscurridos = 0;
		int minDecTranscurridos = 0;
		Vector2f refCronometro; //= Vector2f(730,60);
		Vector2f scaleCronometro = Vector2f(1, 1);
		Diagnostics::Stopwatch^ Chronometer;
		Void ActualizarNumero();
	};
}

