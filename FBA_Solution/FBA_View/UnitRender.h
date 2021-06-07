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
		int damageAttack;
		double movementVelocity; //en pixeles/segundo
		double attackVelocity;  //ataques/segundo
		Void MakeAttack();
		Void MakeMove();
		int indice=0;
		int FactorLentitud;
		int contador=0;
		virtual void ProcessCollision() override;
		virtual void Todo() override;
		bool attackMove;//1 si debe atacar, 0 si debe moverse
	protected:
		bool startJob;
		bool inProgressJob;
		bool frstTimeJob=1;
		double totalTimeJob;
		bool attackMoveJob;
		bool frstTimechange;
		int positionx;
		System::Diagnostics::Stopwatch^ timeJob=gcnew System::Diagnostics::Stopwatch;
	};
}


