#include "SurvivalRender.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
#include <string>
using namespace std;

FBAView::SurvivalRender::SurvivalRender() :RenderWindow(VideoMode(1920,1080,31), "Modo survival", Styles::Fullscreen){
    InitializeGraphics();
	this->SetFramerateLimit(60);
    TimeGenerate = gcnew System::Diagnostics::Stopwatch; TimeGenerate->Start();
    TimeThrowArrow= gcnew System::Diagnostics::Stopwatch; TimeThrowArrow->Start();
}

void FBAView::SurvivalRender::Run(){
    while(this->IsOpen) {
        Procesar_evento();
		this->Clear();
		this->Draw(this->background);
        this->Draw(this->castle);
        this->Draw(this->crossbow);
        if (arrow->throwed)
            arrow->MakeFly();
        this->Draw(this->arrow);
        for (int i = 0; i < unit_allies_field->Count; i++) {
            if (unit_allies_field[i]->position.X>1500)
                this->unit_allies_field[i]->MakeAttack();
            else
                this->unit_allies_field[i]->MakeMove();
            this->Draw(this->unit_allies_field[i]);
        }
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
            if (Keyboard::IsKeyPressed(Keyboard::Key::D)) {
                TimeGenerate->Stop();
                if (TimeGenerate->Elapsed.TotalSeconds > 8) {
                    GenerateUnits();
                    TimeGenerate->Restart();
                }
                else TimeGenerate->Start();
            }
            if (Keyboard::IsKeyPressed(Keyboard::Key::Up)) {
                crossbow->Rotation--;
                arrow->Rotation = crossbow->Rotation;
            }
            if (Keyboard::IsKeyPressed(Keyboard::Key::Down)) {
                crossbow->Rotation++;
                arrow->Rotation =   crossbow->Rotation;
            }
            if (Keyboard::IsKeyPressed(Keyboard::Key::Space)) {
                TimeThrowArrow->Stop();
                if (TimeThrowArrow->Elapsed.TotalSeconds > 8) {
                    ThrowArrow();
                    TimeThrowArrow->Restart();
                }
                else TimeThrowArrow->Start();
            }

            break;

        case EventType::KeyReleased:
            break;
        case EventType::LostFocus:
            break;
        case EventType::MouseButtonPressed:
            break;

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

void FBAView::SurvivalRender::InitializeGraphics(){
    background = gcnew Sprite(gcnew Texture("Assets/Environment/Maps/game_background_1.png"));
    castle = gcnew Sprite(gcnew Texture("Assets/Environment/MapsElements/Asset 27.png"));
    crossbow = gcnew Sprite(gcnew Texture("Assets/Environment/MapsElements/crossbow.png"));
    arrow = gcnew ArrowRender;
    unit_allies = gcnew List<FBAModel::Units^>;
    unit_enemies = gcnew List<FBAModel::Units^>;
    //Background                                                //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura           
    background->Scale = Vector2f(1920.f / background->Texture->Size.X, 1080.f / background->Texture->Size.Y);
    //Castle                                                     //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura
    castle->Origin = Vector2f(castle->Texture->Size.X / (float)2, 0);
    castle->Scale = Vector2f((float)-0.7, (float)0.7);
    castle->Origin = Vector2f(0, 1080 / 2);
    castle->Position = Vector2f(700, 400);
    //Crossbow
    crossbow->Origin = Vector2f(168,406);
    crossbow->Scale = Vector2f(0.18,0.18);
    crossbow->Position=Vector2f(500,470);
    crossbow->Rotation = 0;
    //Arrow
    arrow->Texture = gcnew Texture("Assets/Environment/MapsElements/arrow.png");
    arrow->arrow = gcnew FBAModel::Projectile;
    arrow->Origin = Vector2f(376, 251);  
    arrow->Scale = Vector2f(0.125,0.125);
    arrow->Position = crossbow->Position;
    arrow->throwed = 0;
    arrow->Rotation = 0;
    //Unidades Alidas  
    unit_allies->Add(gcnew FBAModel::Units);
    unit_allies[0]->AttackAnimation = gcnew List<Sprite^>;
    unit_allies[0]->MoveAnimation = gcnew List<Sprite^>;
    String^ d;               //auxiliar para Directorio de imagenes
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + (gcnew String(to_string(j).c_str())) + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + (gcnew String(to_string(j).c_str())) + ".png";
        unit_allies[0]->AttackAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        //
        unit_allies[0]->AttackAnimation[j]->Scale = Vector2f((float)0.7, (float)0.7);
        //
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + (gcnew String(to_string(j).c_str())) + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + (gcnew String(to_string(j).c_str())) + ".png";
        unit_allies[0]->MoveAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        unit_allies[0]->MoveAnimation[j]->Scale = Vector2f((float)0.7, (float)0.7);
        //unit_allies[0]->Move[j]->Position = unit_allies[0]->position;
    }
    unit_allies[0]->Image = unit_allies[0]->MoveAnimation[0];
    
    //Unidades Enemigas
//    unit_enemies->Add(gcnew UnitRender);
//    unit_enemies[0]->Attack = gcnew List<Sprite^>;
//    unit_enemies[0]->Move = gcnew List<Sprite^>;
//    for (int j = 0; j < 20; j++) {
//        d = j > 9? "c/4_enemies_1_attack_0" + (gcnew String(to_string(j).c_str())) + ".png": //que pasa con la direccion de memoria creada con gcnew
//                    "c/4_enemies_1_attack_00" + (gcnew String(to_string(j).c_str())) + ".png";
//        unit_enemies[0]->Attack->Add(gcnew Sprite(gcnew Texture(d)));
//        unit_enemies[0]->position = Vector2f((float)1980, (float)1080);
//        unit_enemies[0]->Attack[j]->Scale = Vector2f((float)-0.7, (float)0.7);
//        unit_enemies[0]->Attack[j]->Position = this->unit_enemies[0]->position;
//        d = j > 9? "c/4_enemies_1_walk_0" + (gcnew String(to_string(j).c_str())) + ".png": //que pasa con la direccion de memoria creada con gcnew
//                    "c/4_enemies_1_walk_00" + (gcnew String(to_string(j).c_str())) + ".png";
//        unit_enemies[0]->Move->Add(gcnew Sprite(gcnew Texture(d)));
//        unit_enemies[0]->Move[j]->Scale = Vector2f((float)-0.7, (float)0.7);
//        unit_enemies[0]->Move[j]->Position = unit_enemies[0]->position;
//    }
//    unit_enemies[0]->Actual = unit_enemies[0]->Move[0];
//    unit_enemies[0]->FactorLentitud = 2;
    unit_allies_field = gcnew List<UnitRender^>;
}

void FBAView::SurvivalRender::GenerateUnits(){
    unit_allies_field->Add(gcnew UnitRender);
    unit_allies_field[unit_allies_field->Count - 1]->unit=unit_allies[0];
    unit_allies_field[unit_allies_field->Count - 1]->Texture = unit_allies_field[unit_allies_field->Count - 1]->unit->Image->Texture;
    unit_allies_field[unit_allies_field->Count - 1]->FactorLentitud = 3;
    unit_allies_field[unit_allies_field->Count - 1]->contador = unit_allies_field[unit_allies_field->Count - 1]->FactorLentitud+1;
    unit_allies_field[unit_allies_field->Count - 1]->position = Vector2f((float)600, (float)550);
}

void FBAView::SurvivalRender::ThrowArrow() {
    arrow->throwed = 1;
    //arrow->Origin = Vector2f(arrow->Texture->Size.X / 2, arrow->Texture->Size.Y / 2);
    arrow->arrow->Velocity = 600;
    arrow->velX = arrow->arrow->Velocity * Math::Cos((arrow->Rotation)*Math::PI/180);
    arrow->velY = arrow->arrow->Velocity * Math::Sin((arrow->Rotation) * Math::PI / 180);
    arrow->Timearrow = gcnew System::Diagnostics::Stopwatch;
    arrow->Timearrow->Restart();
    //int velocidad = 10;
    //int velX = velocidad * abs(cos(arrow->Rotation));
    //int velY = velocidad * abs(sin(arrow->Rotation));
    //
    arrow->xInicial = arrow->Position.X;
    arrow->yInicial = arrow->Position.Y;
    //arrow->Position.X = xInicial + velX * TimeGenerate;
    //arrow->Position.Y = yInicial + velY * TimeGenerate + (9.81 / 2) * Math::Pow(TimeGenerate, 2);  //corregir según orientacion

}

