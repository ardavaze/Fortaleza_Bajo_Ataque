#pragma once
#include "Physics.h"
using namespace System;
using namespace SFML::Graphics;
namespace FBAView {
	public ref class PhysicalElement : public Sprite {
	public:
		FBAModel::Game_obj::TypeElement type;
		int index;
		FBAModel::Game_obj::Band band;
		virtual void ProcessCollision() {}
		void OccupySpace();
		void FreeSpace();
		virtual void Todo() {}
		
	};
}