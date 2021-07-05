#pragma once
#include "PhysicalElement.h"
using namespace SFML::Graphics;
using namespace System;
namespace FBAView {
	public ref class ArrowRender :PhysicalElement {
	public:
		void MakeFly();
		void MakeFly2();
		FBAModel::Projectile^ parrow;
		float velX;
		float velY;
		int xInicial;
		int yInicial;
		bool throwed;
		System::Diagnostics::Stopwatch^ Timearrow;
		bool analizeCollision;
		bool impacto;
		virtual void ProcessCollision() override;
		virtual void ProcessCollision2();
		Vector2f posPunta;
		PhysicalElement^ enemyUnit;
		void ToDo() override;
	};
}

