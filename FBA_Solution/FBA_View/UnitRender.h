#pragma once
#include "PhysicalElement.h"
#include "Physics.h"

using namespace SFML::Graphics;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender: public PhysicalElement{
	public:
		FBAModel::Units^ unit;
		Void MakeAttack();
		Void MakeMove();
		int indice=0;
		int FactorLentitud;
		int contador=0;
		virtual void ProcessCollision() override;
		virtual void Todo() override;
		bool attackMove;//1 si debe atacar, 0 si debe moverse
	};
}


