#pragma once
using namespace SFML::Graphics;
namespace FBAView {
	public ref class ControlElements:public Sprite{
	public:
		void OcuppySpace(array<array<ControlElements^>^>^);
		array<array<ControlElements^>^>^ internalControlSpace;
		virtual void EventClick();
		virtual void ProcessCollision(int, int);
	};
}

