#include "SurvivalRender.h"
#include "Math.h"
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
    Chronometer = gcnew System::Diagnostics::Stopwatch; Chronometer->Start();
    ChronometerAux = gcnew System::Diagnostics::Stopwatch; ChronometerAux->Start();

}

void FBAView::SurvivalRender::Run() {
    while (this->IsOpen) {
        for (int i = 0; i < 4; i++){
            if (i !=1) {
                for (int j = 0; j < physicalElemts[i]->Count; j++)
                    physicalElemts[i][j]->OccupySpace();
            }
        }
        for (int i = 1; i < 4; i++) {
            for (int j = 0; j < physicalElemts[i]->Count; j++) {
                physicalElemts[i][j]->ProcessCollision();
            }
        }
        for (int i = 2; i < 4; i++) {
            for (int j = physicalElemts[i]->Count - 1; 0 <= j; j--) {
                physicalElemts[i][j]->FreeSpace();
            }
        }
        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < physicalElemts[i]->Count; j++) {
                physicalElemts[i][j]->Todo();
            }
        }
        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < physicalElemts[i]->Count; j++) {
                if (physicalElemts[i][j]->muerto) {
                    physicalElemts[i]->RemoveAt(j);
                }
            }
        }
        Procesar_evento();
        this->Clear();
        this->Draw(this->background);
        this->Draw(this->castle);
        
        //RectangleShape^ da= gcnew RectangleShape(Vector2f(19, 400)); //solo para probar 
        //for (int i = 0; i < 96; i++){
        //    da->Position = Vector2f(20 * i, 0);
        //    this->Draw(da);
        //}

        this->Draw(this->minDecena);
        this->Draw(this->minUnidad);
        this->Draw(this->dosPuntos);
        this->Draw(this->segDecena);
        this->Draw(this->segUnidad);


        Chronometer->Stop();
        ChronometerAux->Stop();

        if (Chronometer->Elapsed.Seconds % 60 == 0)
            ChronometerAux->Restart();

        segUnidTranscurridos = (int)(ChronometerAux->Elapsed.TotalSeconds) % 10;
        segDecTranscurridos = floor((ChronometerAux->Elapsed.TotalSeconds) / 10);
        minUnidTranscurridos = (int)(Chronometer->Elapsed.TotalMinutes) % 10;
        minDecTranscurridos = floor((Chronometer->Elapsed.TotalMinutes) / 10);

        ActualizarNumero();


        Chronometer->Start();
        ChronometerAux->Start();



        if (arrow->throwed)
            arrow->MakeFly();
        else {
            arrow->Position = crossbow->Position;
            arrow->Rotation = crossbow->Rotation;
        }
        
        TimeEnemies->Stop();
        if (TimeEnemies->Elapsed.TotalSeconds > 4) {
            GenerateUnits_enemies(this->unit_enemies[0]);
            TimeEnemies->Restart();
        }
        else TimeEnemies->Start();
        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < physicalElemts[i]->Count; j++) {
                this->Draw(physicalElemts[i][j]);
            }
        }
        cover->Texture = base->coverState[castle->indiceStatus];
        this->Draw(cover);
        this->Draw(this->crossbow);
        this->Draw(this->arrow);
        this->Display();
    }

    //Se actualiza score
    /*Chronometer->Stop();
    if (Chronometer->Elapsed.TotalSeconds>user->Time_max)
        user->Time_max = Chronometer->Elapsed.TotalSeconds;
    */
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
                    GenerateUnits(this->unit_allies[0]);
                    TimeGenerate->Restart();
                }
                else TimeGenerate->Start();
            }
            if (Keyboard::IsKeyPressed(Keyboard::Key::E)) {
                TimeGenerate->Stop();
                if (TimeGenerate->Elapsed.TotalSeconds > 8) {
                    GenerateUnits(this->unit_allies[1]);
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
    castle->base = gcnew Base;
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
    //Crossbow
    crossbow->Origin = Vector2f(168, 406);
    crossbow->Scale = Vector2f(0.18, 0.18);
    crossbow->Position = Vector2f(500, 470);
    crossbow->Rotation = 0;
    //Arrow
    arrow->Texture = gcnew Texture("Assets/Environment/MapsElements/arrow.png");
    arrow->parrow = gcnew FBAModel::Projectile;
    arrow->Origin = Vector2f(327, 70);
    arrow->Scale = Vector2f(0.125, 0.125);
    arrow->Position = crossbow->Position;
    arrow->throwed = 0;
    arrow->Rotation = 0;
    //Unidades Alidas  
    unit_allies->Add(gcnew FBAModel::Units);
    unit_allies[0]->band = FBAModel::Units::Band::Allies;
    unit_allies[0]->AttackAnimation = gcnew List<Texture^>;
    unit_allies[0]->MoveAnimation = gcnew List<Texture^>;
    String^ d;               //auxiliar para Directorio de imagenes
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_allies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_allies[0]->MoveAnimation->Add(gcnew Texture(d));    }
    unit_allies[0]->Image = unit_allies[0]->MoveAnimation[0];
    unit_allies[0]->scale=Vector2f(0.6,0.6);
    unit_allies[0]->positionElement = Vector2i(42, 52);
    unit_allies[0]->sizeElement=Vector2i(177-42,284-52) ;
    unit_allies[0]->attackVelocity = 50;
    unit_allies[0]->movementVelocity=0.9;
    unit_allies[0]->moneyValue = 50;
    unit_allies[0]->attackDamage = 40;
    unit_allies[0]->Maxlife = 200;
    unit_allies->Add(gcnew FBAModel::Units);
    unit_allies[1]->band = FBAModel::Units::Band::Allies;
    unit_allies[1]->AttackAnimation = gcnew List<Texture^>;
    unit_allies[1]->MoveAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 11; j++) {
        d = j > 9 ? "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Attacking/Attacking_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Attacking/Attacking_00" + j + ".png";
        unit_allies[1]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Walking/Walking_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Walking/Walking_00" + j + ".png";
        unit_allies[1]->MoveAnimation->Add(gcnew Texture(d));
    }
    unit_allies[1]->Image = unit_allies[1]->MoveAnimation[0];
    unit_allies[1]->scale = Vector2f(0.5, 0.5);
    unit_allies[1]->positionElement = Vector2i(172, 94);
    unit_allies[1]->sizeElement = Vector2i(358 - 172, 334 - 94);
    unit_allies[1]->attackVelocity = 50;
    unit_allies[1]->movementVelocity = 0.9;
    unit_allies[1]->moneyValue = 50;
    unit_allies[1]->attackDamage = 40;
    unit_allies[1]->Maxlife = 200;
    //
    //Unidades Enemigas
    //
    unit_enemies->Add(gcnew FBAModel::Units);
    unit_enemies[0]->band = FBAModel::Units::Band::Enemies;
    unit_enemies[0]->AttackAnimation = gcnew List<Texture^>;
    unit_enemies[0]->MoveAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_enemies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_enemies[0]->MoveAnimation->Add(gcnew Texture(d));
    }
    unit_enemies[0]->Image = unit_enemies[0]->MoveAnimation[0];
    unit_enemies[0]->scale = Vector2f(-0.6, 0.6);
    unit_enemies[0]->positionElement = Vector2i(42, 52);
    unit_enemies[0]->sizeElement = Vector2i(177 - 42, 284 - 52);
    unit_enemies[0]->attackVelocity = 50;
    unit_enemies[0]->movementVelocity = 0.9;
    unit_enemies[0]->moneyValue = 50;
    unit_enemies[0]->attackDamage = 40;
    unit_enemies[0]->Maxlife = 200;
    //Cronometro
    minDecena = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/0.png"));
    minUnidad = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/0.png"));
    segDecena = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/0.png"));
    segUnidad = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/0.png"));
    dosPuntos = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/2puntos.png"));
    //Base
    base = gcnew FBAModel::Base;
    base->baseState = gcnew List<Texture^>;
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 27.png"));
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 28.png"));
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 29.png"));
    base->coverState = gcnew List<Texture^>;
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 27.png"));
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 28.png"));
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 29.png"));
    base->Vida_max = 200;
    //Castle
    castle->base = base;
    castle->HP = castle->base->Vida_max;
    castle->Texture = base->baseState[0];
    castle->Scale = Vector2f((float)-0.7, (float)0.7);
    castle->Origin = Vector2f(castle->Texture->Size.X, 1080 / 2);
    castle->Position = Vector2f(-300, 400);
    castle->positionElement = Vector2i(0, 0);
    castle->sizeElement = Vector2i(350, 200);
    cover = gcnew Sprite();
    cover->Scale = Vector2f((float)-0.7, (float)0.7);
    cover->Origin = Vector2f(castle->Texture->Size.X, 1080 / 2);
    cover->Position = Vector2f(-300, 400);
    

}

void FBAView::SurvivalRender::GenerateUnits(Units^ baseUnit){
    UnitRender^ newUnit =gcnew UnitRender ;
    physicalElemts[2]->Add(newUnit);
    newUnit->unit= baseUnit;
    newUnit->band= newUnit->unit->band;
    newUnit->Texture = newUnit->unit->Image;
    newUnit->Scale = newUnit->unit->scale;
    newUnit->sizeElement = newUnit->unit->sizeElement;
    newUnit->positionElement = newUnit->unit->positionElement;
    newUnit->Position = Vector2f((float)450, (float)(piso - (newUnit->Scale.Y) * (newUnit->positionElement.Y + newUnit->sizeElement.Y)));
    newUnit->attackVelocity = newUnit->unit->attackVelocity;
    newUnit->movementVelocity = newUnit->unit->movementVelocity;
    newUnit->attackDamage =newUnit->unit->attackDamage;
    newUnit->life=newUnit->unit->Maxlife;
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

void FBAView::SurvivalRender::GenerateUnits_enemies(Units^ baseUnit){
    UnitRender^ newUnit = gcnew UnitRender;
    physicalElemts[3]->Add(newUnit);
    //((UnitRender^)physicalElemts[3][physicalElemts[3]->Count - 1])
    newUnit->unit = baseUnit;
    newUnit->band = newUnit->unit->band;
    newUnit->Texture = newUnit->unit->Image;
    newUnit->Scale = newUnit->unit->scale;
    newUnit->Origin = Vector2f(newUnit->Texture->Size.X, 0);
    newUnit->positionElement = newUnit->unit->positionElement;
    newUnit->sizeElement = newUnit->unit->sizeElement;
    newUnit->Position = Vector2f(1920, (float)(piso - (newUnit->Scale.Y) * (newUnit->positionElement.Y + newUnit->sizeElement.Y)));
    newUnit->attackVelocity = newUnit->unit->attackVelocity;
    newUnit->movementVelocity = newUnit->unit->movementVelocity;
    newUnit->attackDamage = newUnit->unit->attackDamage;
    newUnit->life= newUnit->unit->Maxlife;
}

void FBAView::SurvivalRender::ActualizarNumero()
{
    minDecena = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/" + minDecTranscurridos + ".png"));
    minUnidad = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/" + minUnidTranscurridos + ".png"));
    segDecena = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/" + segDecTranscurridos + ".png"));
    segUnidad = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/" + segUnidTranscurridos + ".png"));
    int refCronometroY = 60; //60
    int refCronometroX = 730; //730
    minDecena->Position = Vector2f(refCronometroX, refCronometroY);
    minUnidad->Position = Vector2f(minDecena->Position.X + 115, refCronometroY);
    dosPuntos->Position = Vector2f(minUnidad->Position.X + 115, refCronometroY);
    segDecena->Position = Vector2f(dosPuntos->Position.X + 115, refCronometroY);
    segUnidad->Position = Vector2f(segDecena->Position.X + 115, refCronometroY);
}



