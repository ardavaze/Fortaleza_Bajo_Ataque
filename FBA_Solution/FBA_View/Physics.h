#pragma once
using namespace System;
namespace FBAView {
	public ref class Physics {
	public:
		FBAModel::Game_obj::TypeElement type;
		int index;
		FBAModel::Game_obj::Band band ;

		Physics();
		Physics(FBAModel::Game_obj::TypeElement, int, FBAModel::Game_obj::Band);
	};
}

