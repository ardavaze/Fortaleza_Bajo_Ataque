#pragma once
#include "PhysicalElement.h"
#include "Physics.h"
using namespace SFML::Graphics;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
namespace FBAView {
	public ref class UnitRender: public PhysicalElement{
	public:
		FBAModel::Units^ unit;
		Void MakeAttack();
		Void MakeMove();
		int indice=0;
		int FactorLentitud;
		int contador=0;
		virtual Physics^ ProcessCollision() override { return nullptr; }
		//	for (int i = 0; i < 10; i++) {
		//		for (int j = 0; j < SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) +
		//															 (TextureRect.Width / 20) + (TextureRect.Width % 20 == 0 ? 0 : 1) + i]->Count
		//																; j++){
		//			if (SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) +
		//				(TextureRect.Width / 20) + (TextureRect.Width % 20 == 0 ? 0 : 1) + i][j]->band != physics->band) {
		//				return SurvivalRender::physicalSpace[(int(Position.X) / 20) + (int(Position.X) % 20 < 10 ? 0 : 1) +
		//					(TextureRect.Width / 20) + (TextureRect.Width % 20 == 0 ? 0 : 1) + i][j];
		//			}
		//		} 
		//	}
		//	return nullptr;
		//}
	};
}


