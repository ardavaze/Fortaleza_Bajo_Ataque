#pragma once
using namespace System;
using namespace SFML::Graphics;
using namespace FBAModel;
using namespace SFML::System;
namespace FBAView {
	public ref class PhysicalElement : public Sprite {
	public:
		static float g=12;    //Gravedad en m/s
		static float pixPerMeter =50 ;  //#pixeles que equivalen a 1 metro
		enum class States {
			Attack,
			Move,
			Die,
			DoNothing
		};
		States state;
		Vector2i sizeElement;//tamaño real del personaje sin considerar el rectangulo de imagen que la contiene
		Vector2i positionElement;//posicion del comienzo del elemento respecto de la esquina del rectangulo de imagen que la contiene
		Game_obj::TypeElement type;
		Game_obj::Band band;
		int HP;
		int attackDamage;
		void OccupySpace();
		void FreeSpace();
		virtual Void ProcessCollision() {}
		virtual Void ToDo() {};
		virtual Void LoseLife(int) {};
		bool death=0;
		double attackVelocity;  //ataques/minuto
		double deathTime; //Segundos que demora en morirse
		int rango;
		System::Diagnostics::Stopwatch^ timeJob = gcnew System::Diagnostics::Stopwatch;
	protected:
		virtual Void PaintTexture();
		RenderTexture^ board;
		Vector2f size;
		array<int>^ index;
		int frstRectangule;
		int numRectangule ;
	};
}