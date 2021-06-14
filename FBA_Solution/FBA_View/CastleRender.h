#pragma once
#include "PhysicalElement.h"
namespace FBAView {
	public ref class CastleRender:PhysicalElement{
	public:
		FBAModel::Base^ base;
		float HP;
		int indiceStatus;
		virtual void LostLife(int damage) override;

	};
}

