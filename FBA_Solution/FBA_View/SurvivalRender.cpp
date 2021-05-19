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
    castle_text = gcnew Texture("c/Asset 27.png"); //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura
    castle= gcnew Sprite(castle_text);
    castle->Origin = Vector2f(castle->Texture->Size.X /2,0);
    castle->Scale = Vector2f(-0.7,0.7);
    castle->Origin = Vector2f(0 , 1080/2);
    castle->Position = Vector2f(700, 400 );
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
        this->unit_allies[0]->position= Vector2f(600, 550);
		this->unit_allies[0]->Attack[j]->Scale = Vector2f(0.7, 0.7);
        this->unit_allies[0]->Attack[j]->Position = this->unit_allies[0]->position;
		if (j > 9)
			e = "c/4_enemies_1_walk_0" + (gcnew String(to_string(j).c_str())) + ".png"; //que pasa con la direccion de memoria creada con gcnew
		else
			e = "c/4_enemies_1_walk_00" + (gcnew String(to_string(j).c_str())) + ".png";
		this->unit_allies[0]->Move->Add( gcnew Sprite(gcnew Texture(e)));
		this->unit_allies[0]->Move[j]->Scale = Vector2f(0.7, 0.7);
        this->unit_allies[0]->Move[j]->Position = this->unit_allies[0]->position;
	}
	this->unit_allies[0]->Actual = this->unit_allies[0]->Move[0];
    this->unit_allies[0]->FactorLentitud = 2;
	this->SetFramerateLimit(60);
}

void FBAView::SurvivalRender::Run(){
    while(this->IsOpen) {
		Procesar_evento();
		this->Clear();
		this->Draw(this->background);
        this->Draw(this->castle);
		this->Draw(this->unit_allies[0]->Actual);
		this->Display();
	}
}

void FBAView::SurvivalRender::Procesar_evento(){
    if (this->PollEvent(event)) {
        switch (event.Type) {
        case EventType::Closed:
            this->Close();
            break;

        case EventType::GainedFocus:
            break;

        case EventType::JoystickButtonPressed:


            break;

        case EventType::JoystickButtonReleased:


            break;

        case EventType::JoystickMoved:

            break;

        case EventType::JoystickConnected:


            break;

        case EventType::JoystickDisconnected:

            break;

        case EventType::KeyPressed:
            if (Keyboard::IsKeyPressed(Keyboard::Key::A)) {
                unit_allies[0]->Actual->Position = Vector2f(unit_allies[0]->position.X, unit_allies[0]->position.Y);
                this->unit_allies[0]->MakeAttack();
            }
            else if (Keyboard::IsKeyPressed(Keyboard::Key::Right))
                this->unit_allies[0]->MakeMove();
            break;

        case EventType::KeyReleased:

        case EventType::LostFocus:

        case EventType::MouseButtonPressed:


        case EventType::MouseButtonReleased:

            break;

        case EventType::MouseEntered:

            break;

        case EventType::MouseLeft:

            break;

        case EventType::MouseMoved:

            break;

        case EventType::MouseWheelMoved:

            break;

        case EventType::MouseWheelScrolled:

            break;

        case EventType::Resized:

            break;

        case EventType::TextEntered:


            break;

        case EventType::TouchBegan:


            break;

        case EventType::TouchMoved:

            break;

        case EventType::TouchEnded:


            break;

        case EventType::SensorChanged:

            break;
        default:
            break;
        }
    }
}

