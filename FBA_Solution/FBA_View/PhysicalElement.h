#pragma once
using namespace System;
using namespace SFML::Graphics;
using namespace FBAModel;
using namespace SFML::System;
namespace FBAView {
	public ref class PhysicalElement : public Sprite {
	public:
		enum class States {
			Attack,
			Move,
			Die
		};
		States state;
		Vector2i sizeElement;//tamaño real del personaje sin considerar el rectangulo de imagen que la contiene
		Vector2i positionElement;//posicion del comienzo del elemento respecto de la esquina del rectangulo de imagen que la contiene
		Game_obj::TypeElement type;
		Game_obj::Band band;
		int life;
		int attackDamage;
		void OccupySpace();
		void FreeSpace();
		virtual void ProcessCollision() {}
		virtual void ToDo() {};
		virtual Void LoseLife(int) {};
		bool death=0;
	protected:
		bool muerto;
		Vector2f size;
		array<int>^ index;
		int frstRectangule;
		int numRectangule ;
	};
}