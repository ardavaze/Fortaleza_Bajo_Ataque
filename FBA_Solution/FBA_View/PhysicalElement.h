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
		Physics^ physics;
		virtual Physics^ ProcessCollision() {
			return nullptr;
		}
		void OccupySpace(int);
		void FreeSpace();
	};
}