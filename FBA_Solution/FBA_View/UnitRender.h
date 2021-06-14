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
		double movementVelocity; //en metros/segundo(1m=50pix)
		double attackVelocity;  //ataques/minuto
		double deathTime; //Segundos que demora en morirse
		void ProcessCollision() override;
		virtual Void Todo() override;
		virtual Void LostLife(int) override;
		
	protected:
		bool attackMove;//1 si debe atacar, 0 si debe moverse
		int indice = 0;
		bool frstTimeJob=1;
		double totalTimeJob;
		bool attackMoveJob;
		bool frstTimechange;
		int positionx;
		PhysicalElement^ enemyUnit;
		System::Diagnostics::Stopwatch^ timeJob=gcnew System::Diagnostics::Stopwatch;
	};
}


