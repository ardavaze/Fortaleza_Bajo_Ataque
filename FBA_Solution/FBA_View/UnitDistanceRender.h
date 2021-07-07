#pragma once
#include "UnitRender.h"
#include "ArrowRender.h"
namespace FBAView {
	public ref class UnitDistanceRender : public UnitRender {
	public:
		UnitDistanceRender(FBAModel::Units^);
		ArrowRender^ arrow;
		Void ProcessCollision() override;
		Void ToDo() override;
		Void PaintTexture() override;
	};
}

