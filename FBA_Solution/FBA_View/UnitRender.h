#pragma once
#include "PhysicalElement.h"
using namespace FBAModel;
using namespace SFML::Graphics;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender: public PhysicalElement{
	public:
		FBAModel::Units^ unit;
		int life;
		int attackDamage;
		double movementVelocity; //en metros/segundo(1m=50pix)
		double attackVelocity;  //ataques/minuto
		virtual void ProcessCollision() override;
		virtual void Todo() override;
		bool attackMove;//1 si debe atacar, 0 si debe moverse
	protected:
		int indice = 0;
		bool frstTimeJob=1;
		double totalTimeJob;
		bool attackMoveJob;
		bool frstTimechange;
		int positionx;
		System::Diagnostics::Stopwatch^ timeJob=gcnew System::Diagnostics::Stopwatch;
	};
}


