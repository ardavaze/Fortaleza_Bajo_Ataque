#pragma once
#include "PhysicalElement.h"
#include "ArrowRender.h"
#include "UserLifeBar.h"
namespace FBAView {
	public ref class CastleRender:PhysicalElement{
	public:
		CastleRender(FBAModel::Base^);
		UserLifeBar^ HPBar;
		FBAModel::Base^ base;
		Sprite^ cover;
		Sprite^ crossbow;
		ArrowRender^ arrowRender;
		Void LoseLife(int damage) override;
		Void ProcessCollision() override;
		Void ToDo() override;
		Void ThrowArrow();
		bool firstTime1=1;
		bool firstTime2 = 1;
		bool firstTime3 = 1;
	};
}

