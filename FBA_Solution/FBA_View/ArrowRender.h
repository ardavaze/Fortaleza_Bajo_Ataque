#pragma once
using namespace SFML::Graphics;
using namespace System;
public ref class ArrowRender :Sprite {
public:
	void MakeFly();
	FBAModel::Projectile^ parrow;
	float velX;
	float velY;
	int xInicial;
	int yInicial;
	bool throwed;
	System::Diagnostics::Stopwatch^ Timearrow;
	bool analizeCollision;
};

