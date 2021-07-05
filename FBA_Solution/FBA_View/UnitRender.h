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
		double attackVelocity;  //ataques/minuto
		double deathTime; //Segundos que demora en morirse
		int rango;
		HealthBar^ healthbar;
		Sprite^ HPBar;
		Sprite^ body;
		virtual void ProcessCollision() override;
		virtual Void ToDo() override;
		virtual Void PaintTexture();
		virtual Void LoseLife(int) override;
		
	protected:
		int dist;
		bool attackMove;//1 si debe atacar, 0 si debe moverse
		int indice = 0;
		bool frstTimeJob=1;
		double totalTimeJob;
		States statejob;
		bool frstTimechange;
		int positionx;
		PhysicalElement^ enemyUnit;
		RenderTexture^ board;
		System::Diagnostics::Stopwatch^ timeJob=gcnew System::Diagnostics::Stopwatch;
	};
}


