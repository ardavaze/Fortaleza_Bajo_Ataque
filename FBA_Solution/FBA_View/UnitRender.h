#pragma once
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender {
	public:
		List<Sprite^>^ Attack;
		List<Sprite^>^ Move;
		Sprite^ Actual;
		Void MakeAttack();
		Void MakeMove();
		int indice=0;
		int FactorLentitud=3;
		int contador=0;
		Vector2f position;
	};
}


