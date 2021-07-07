#pragma once
#include "PhysicalElement.h"
using namespace SFML::Graphics;
using namespace System;
using namespace SFML::System;
namespace FBAView {
	public ref class ArrowRender : Sprite {
	public:
		bool arrowBall; //1 si es flecha , 0 si es una bolita
		FBAModel::Projectile^ arrow;
		Vector2f velocity;
		Vector2i posInit;
		int damage;
		bool throwed;
		FBAModel::Game_obj::Band band;
		virtual Void ProcessCollision();
		Vector2f posPunta;
		Void ToDo();
		System::Diagnostics::Stopwatch^ Timearrow;
	protected:
		bool impacto;
		PhysicalElement^ enemyUnit;
		
	};
}

