#pragma once
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender:Sprite {
	public:
		FBAModel::Units^ unit;
		Void MakeAttack();
		Void MakeMove();
		int indice=0;
		int FactorLentitud;
		int contador=0;
		Vector2f position;
	};
}


