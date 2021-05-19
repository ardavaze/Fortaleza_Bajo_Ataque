#include "SurvivalRender.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
#include <string>
using namespace std;

FBAView::SurvivalRender::SurvivalRender() :RenderWindow(VideoMode(1920,1080,31), "Modo survival", Styles::Fullscreen){
	background_text = gcnew Texture("game_background_1.png"); //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura
	background = gcnew Sprite(background_text);
	background->Scale = Vector2f(1920.f / background->Texture->Size.X, 1080.f / background->Texture->Size.Y);
	this->unit_allies = gcnew List<UnitRender^>;
	this->unit_allies->Add(gcnew UnitRender());
	this->unit_allies[0]->Attack = gcnew List<Sprite^>;
	this->unit_allies[0]->Move = gcnew List<Sprite^>;
	for (int j = 0; j < 20; j++) {
		String^ d; String^ e;
		if (j > 9)
			d = "c/4_enemies_1_attack_0" + (gcnew String(to_string(j).c_str())) + ".png"; //que pasa con la direccion de memoria creada con gcnew
		else
			d = "c/4_enemies_1_attack_00" + (gcnew String(to_string(j).c_str())) + ".png";
		this->unit_allies[0]->Attack->Add(gcnew Sprite(gcnew Texture(d)));
		this->unit_allies[0]->Attack[j]->Scale = Vector2f(0.7, 0.7);
		if (j > 9)
			e = "c/4_enemies_1_walk_0" + (gcnew String(to_string(j).c_str())) + ".png"; //que pasa con la direccion de memoria creada con gcnew
		else
			e = "c/4_enemies_1_walk_00" + (gcnew String(to_string(j).c_str())) + ".png";
		this->unit_allies[0]->position = Vector2f(0, 1080 / 2);
		this->unit_allies[0]->Move->Add( gcnew Sprite(gcnew Texture(e)));
		this->unit_allies[0]->Move[j]->Scale = Vector2f(0.5, 0.5);
	}
	this->unit_allies[0]->Actual = this->unit_allies[0]->Move[0];
	this->SetFramerateLimit(60);
}

void FBAView::SurvivalRender::Run(){
	for (int j = 0, i = 0; this->IsOpen; j++) {
		Procesar_evento();
		this->Clear();
		this->Draw(this->background);
		this->unit_allies[0]->MakeMove();
		this->Draw(this->unit_allies[0]->Actual);
		this->Display();
	}
}

void FBAView::SurvivalRender::Procesar_evento(){
	this->DispatchEvents();
}



