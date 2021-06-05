#include "SurvivalRender.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;

FBAView::SurvivalRender::SurvivalRender() :RenderWindow(VideoMode(1920,1080,31), "Modo survival", Styles::Fullscreen){
    InitializeGraphics();
    for (int i = 0; i < 96; i++){
        physicalSpace[i] = gcnew List<PhysicalElement^>;
    }
	this->SetFramerateLimit(60);
    TimeGenerate = gcnew System::Diagnostics::Stopwatch; TimeGenerate->Start();
    TimeThrowArrow= gcnew System::Diagnostics::Stopwatch; TimeThrowArrow->Start();
    TimeEnemies=gcnew System::Diagnostics::Stopwatch; TimeEnemies->Start();
}

void FBAView::SurvivalRender::Run(){
    while (this->IsOpen) {
            for (int i = 2; i < 4; i++){
                for (int j = 0; j < physicalElemts[i]->Count; j++)
                    physicalElemts[i][j]->OccupySpace();
            }
            for (int i = 1; i < 4; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++) {
                    physicalElemts[i][j]->ProcessCollision();
                }
            }
            for (int i = 2; i < 4; i++) {
                for (int j = physicalElemts[i]->Count -1; 0 <= j; j--) {
                    physicalElemts[i][j]->FreeSpace();
                }
            }
            for (int i = 2; i < 4; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++) {
                    physicalElemts[i][j]->Todo();
                }
            }
            Procesar_evento();
        this->Clear();
        this->Draw(this->background);
        this->Draw(this->castle);
        this->Draw(this->crossbow);
        if (arrow->throwed)
            arrow->MakeFly();
        else {
            arrow->Position= crossbow->Position;
            arrow->Rotation =crossbow ->Rotation;
        }
        this->Draw(this->arrow);
        TimeEnemies->Stop();
        if (TimeEnemies->Elapsed.TotalSeconds > 8) {
            GenerateUnits_enemies();
            TimeEnemies->Restart();
        }
        else TimeEnemies->Start();
        for (int i = 0; i < unit_allies_field->Count; i++) {
        //    if(ProcessCollisionUnits(unit_allies_field[i]))
        //        this->unit_allies_field[i]->MakeAttack();
        //    else
        //        this->unit_allies_field[i]->MakeMove();
            this->Draw(this->unit_allies_field[i]);
        }
        for (int i = 0; i < unit_enemies_field->Count; i++) {
            //if(ProcessCollisionUnits(unit_enemies_field[i]))
            //    this->unit_enemies_field[i]->MakeAttack();
            //else
            //    this->unit_enemies_field[i]->MakeMove();
            this->Draw(this->unit_enemies_field[i]);
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
                if (TimeThrowArrow->Elapsed.TotalSeconds > 5) {
                    ThrowArrow();
                    TimeThrowArrow->Restart();
                }
                else TimeThrowArrow->Start();
            }
            break;
        }
    }
}

void FBAView::SurvivalRender::InitializeGraphics() {
    physicalElemts = gcnew array<List<PhysicalElement^>^>(4);
    background = gcnew Sprite(gcnew Texture("Assets/Environment/Maps/GameBackground.png"));
    castle = gcnew CastleRender();
    crossbow = gcnew Sprite(gcnew Texture("Assets/Environment/MapsElements/crossbow.png"));
    arrow = gcnew ArrowRender;
    unit_allies = gcnew List<FBAModel::Units^>;
    unit_enemies = gcnew List<FBAModel::Units^>;
    //physical elements
    physicalElemts[0]=gcnew List<PhysicalElement^>() ; //Castillo
    physicalElemts[1] = gcnew List<PhysicalElement^>();//Arrow
    physicalElemts[0]->Add(castle);
    physicalElemts[1]->Add(arrow);
    physicalElemts[2] = gcnew List<PhysicalElement^>();
    physicalElemts[3] = gcnew List<PhysicalElement^>();

    //Background                                                //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura           
    background->Scale = Vector2f(1920.f / background->Texture->Size.X, 1080.f / background->Texture->Size.Y);
    //Castle                                                     //Recordar preguntar que pasa si a la misma variable quiero cambiarle de textura
    castle->Texture = gcnew Texture("Assets/Environment/MapsElements/Asset 27.png");
    castle->Origin = Vector2f(castle->Texture->Size.X / (float)2, 0);
    castle->Scale = Vector2f((float)-0.7, (float)0.7);
    castle->Origin = Vector2f(0, 1080 / 2);
    castle->Position = Vector2f(700, 400);
    //Crossbow
    crossbow->Origin = Vector2f(168, 406);
    crossbow->Scale = Vector2f(0.18, 0.18);
    crossbow->Position = Vector2f(500, 470);
    crossbow->Rotation = 0;
    //Arrow
    arrow->Texture = gcnew Texture("Assets/Environment/MapsElements/arrow.png");
    arrow->parrow = gcnew FBAModel::Projectile;
    arrow->Origin = Vector2f(327, 76);
    arrow->Scale = Vector2f(0.125, 0.125);
    arrow->Position = crossbow->Position;
    arrow->throwed = 0;
    arrow->Rotation = 0;
    //Unidades Alidas  
    unit_allies->Add(gcnew FBAModel::Units);
    unit_allies[0]->band = FBAModel::Units::Band::Allies;
    unit_allies[0]->AttackAnimation = gcnew List<Sprite^>;
    unit_allies[0]->MoveAnimation = gcnew List<Sprite^>;
    String^ d;               //auxiliar para Directorio de imagenes
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_allies[0]->AttackAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        unit_allies[0]->AttackAnimation[j]->Scale = Vector2f((float)0.7, (float)0.7);
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_allies[0]->MoveAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        unit_allies[0]->MoveAnimation[j]->Scale = Vector2f((float)0.7, (float)0.7);
    }
    unit_allies[0]->Image = unit_allies[0]->MoveAnimation[0];
    //Unidades Enemigas
    unit_enemies->Add(gcnew FBAModel::Units);
    unit_enemies[0]->band = FBAModel::Units::Band::Enemies;
    unit_enemies[0]->AttackAnimation = gcnew List<Sprite^>;
    unit_enemies[0]->MoveAnimation = gcnew List<Sprite^>;
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_enemies[0]->AttackAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        unit_enemies[0]->AttackAnimation[j]->Scale = Vector2f((float)-0.7, (float)0.7);
        unit_enemies[0]->AttackAnimation[j]->Origin = Vector2f(unit_enemies[0]->AttackAnimation[j]->Texture->Size.X, 0);
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_enemies[0]->MoveAnimation->Add(gcnew Sprite(gcnew Texture(d)));
        unit_enemies[0]->MoveAnimation[j]->Scale = Vector2f((float)-0.7, (float)0.7);
        unit_enemies[0]->MoveAnimation[j]->Origin = Vector2f(unit_enemies[0]->MoveAnimation[j]->Texture->Size.X, 0);
        int k = 0;
    }
    unit_enemies[0]->Image = unit_enemies[0]->MoveAnimation[0];
    //Aliados en batalla
    unit_allies_field = gcnew List<UnitRender^>;
    //Enemigos en batalla
    unit_enemies_field = gcnew List<UnitRender^>;
}

void FBAView::SurvivalRender::GenerateUnits(){
    unit_allies_field->Add(gcnew UnitRender);
    physicalElemts[2]->Add(unit_allies_field[unit_allies_field->Count - 1]);
    unit_allies_field[unit_allies_field->Count - 1]->unit=unit_allies[0];
    unit_allies_field[unit_allies_field->Count - 1]->Texture = unit_allies_field[unit_allies_field->Count - 1]->unit->Image->Texture;
    unit_allies_field[unit_allies_field->Count - 1]->FactorLentitud = 3;
    unit_allies_field[unit_allies_field->Count - 1]->contador = unit_allies_field[unit_allies_field->Count - 1]->FactorLentitud+1;
    unit_allies_field[unit_allies_field->Count - 1]->Position = Vector2f((float)550, (float)550);
}

void FBAView::SurvivalRender::ThrowArrow() {
    if (arrow->throwed == 0) {
        arrow->throwed = 1;
        arrow->parrow->Velocity = 600;
        arrow->velX = arrow->parrow->Velocity * Math::Cos((arrow->Rotation) * Math::PI / 180);
        arrow->velY = arrow->parrow->Velocity * Math::Sin((arrow->Rotation) * Math::PI / 180);
        arrow->Timearrow = gcnew System::Diagnostics::Stopwatch;
        arrow->Timearrow->Restart();
        arrow->xInicial = arrow->Position.X;
        arrow->yInicial = arrow->Position.Y;
    }
}

void FBAView::SurvivalRender::GenerateUnits_enemies(){    
    unit_enemies_field->Add(gcnew UnitRender);
    physicalElemts[3]->Add(unit_enemies_field[unit_enemies_field->Count - 1]);
    unit_enemies_field[unit_enemies_field->Count - 1]->band = FBAModel::Game_obj::Band::Enemies;
    unit_enemies_field[unit_enemies_field->Count - 1]->unit = unit_enemies[0];
    unit_enemies_field[unit_enemies_field->Count - 1]->Texture = unit_enemies_field[unit_enemies_field->Count - 1]->unit->Image->Texture;
    unit_enemies_field[unit_enemies_field->Count - 1]->FactorLentitud = 3;
    unit_enemies_field[unit_enemies_field->Count - 1]->contador = unit_enemies_field[unit_enemies_field->Count - 1]->FactorLentitud + 1;
    unit_enemies_field[unit_enemies_field->Count - 1]->Position = Vector2f((float)1750+ unit_enemies_field[unit_enemies_field->Count - 1]->Texture->Size.X, (float)550);
}

void FBAView::SurvivalRender::ProcessCollision(){
    SFML::Graphics::FloatRect rect1;
    if (arrow->analizeCollision) {
        for (int i = 0; i < unit_enemies_field->Count; i++) {
            rect1.Left = unit_enemies_field[i]->GetGlobalBounds().Left + 100; rect1.Height = unit_enemies_field[i]->GetGlobalBounds().Height; rect1.Top = unit_enemies_field[i]->GetGlobalBounds().Top; rect1.Width = unit_enemies_field[i]->GetGlobalBounds().Width-120;
            if (arrow->GetGlobalBounds().Intersects(rect1)) {
                unit_enemies_field[i]->Color = SFML::Graphics::Color::Red;
                return;
            }
        }
    }
}

bool FBAView::SurvivalRender::ProcessCollisionUnits(UnitRender^ unite){
    SFML::Graphics::FloatRect rect1;
    SFML::Graphics::FloatRect rect2;
    if (unite->unit->band==FBAModel::Units::Band::Allies) {
        for (int i = 0; i < unit_enemies_field->Count; i++) {
            rect1.Left = unite->GetGlobalBounds().Left; rect1.Height = unite->GetGlobalBounds().Height; rect1.Top = unite->GetGlobalBounds().Top; rect1.Width = unite->GetGlobalBounds().Width -95;
            rect2.Left = unit_enemies_field[i]->GetGlobalBounds().Left+95; rect2.Height = unit_enemies_field[i]->GetGlobalBounds().Height; rect2.Top = unit_enemies_field[i]->GetGlobalBounds().Top; rect2.Width = unit_enemies_field[i]->GetGlobalBounds().Width;
            if (rect1.Intersects(rect2))
                return true;
        }
    }
    else{
        for (int i = 0; i < unit_allies_field->Count; i++) {
            rect1.Left = unite->GetGlobalBounds().Left+95; rect1.Height = unite->GetGlobalBounds().Height; rect1.Top = unite->GetGlobalBounds().Top; rect1.Width = unite->GetGlobalBounds().Width;
            rect2.Left = unit_allies_field[i]->GetGlobalBounds().Left; rect2.Height = unit_allies_field[i]->GetGlobalBounds().Height; rect2.Top = unit_allies_field[i]->GetGlobalBounds().Top; rect2.Width = unit_allies_field[i]->GetGlobalBounds().Width-95;
            if (rect1.Intersects(rect2))
                return true;
        }
    }
    return false;
}

