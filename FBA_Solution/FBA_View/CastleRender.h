#pragma once
#include "PhysicalElement.h"
#include "ArrowRender.h"
namespace FBAView {
	public ref class CastleRender:PhysicalElement{
	public:
		CastleRender(FBAModel::Base^);
		FBAModel::Base^ base;
		Sprite^ cover;
		Sprite^ crossbow;
		ArrowRender^ arrowRender;
		int indiceStatus;
		Void LostLife(int damage) override;
		Void ProcessCollision() override;
		Void ToDo() override;
		Void ThrowArrow();
	};
}

