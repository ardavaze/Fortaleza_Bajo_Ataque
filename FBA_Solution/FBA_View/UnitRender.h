#pragma once
#include "PhysicalElement.h"
#include "HealthBar.h"
using namespace FBAModel;
using namespace SFML::Graphics;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender: public PhysicalElement{
	public:
		UnitRender() {};
		UnitRender(FBAModel::Units^);
		FBAModel::Units^ unit;
		double movementVelocity; //en metros/segundo(1m=50pix)
		HealthBar^ healthbar;
		Sprite^ body;
		virtual void ProcessCollision() override;
		virtual Void ToDo() override;
		virtual Void LoseLife(int) override;
	protected:
		virtual Void PaintTexture() override;
		int dist;
		int indice = 0;
		bool frstTimeJob=1;
		double totalTimeJob;
		States statejob;
		bool frstTimechange;
		int positionx;
		PhysicalElement^ enemyUnit;
		System::Diagnostics::Stopwatch^ timeJob=gcnew System::Diagnostics::Stopwatch;
	};
}


