#include "SurvivalRender.h"
#include "menu_principal.h"
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
    render = gcnew System::Diagnostics::Stopwatch; 
    chronoGameOver = gcnew System::Diagnostics::Stopwatch;chronoGameOver->Reset();
    chronoGameOver->Stop();
}

void FBAView::SurvivalRender::Run() {
    while (this->IsOpen) {
        render->Restart();
        if (gameOver == 0) {
            for (int i = 0; i < 4; i++) {
                if (i != 1) {
                    for (int j = 0; j < physicalElemts[i]->Count; j++)
                        if (!physicalElemts[i][j]->muerto)
                            physicalElemts[i][j]->OccupySpace();
                }
            }
            for (int i = 1; i < 4; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++) {
                    if (!physicalElemts[i][j]->muerto)
                        physicalElemts[i][j]->ProcessCollision();
                }
            }
            for (int i = 2; i < 4; i++) {
                for (int j = physicalElemts[i]->Count - 1; 0 <= j; j--) {
                    if (!physicalElemts[i][j]->muerto)
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
                    if (physicalElemts[i][j]->dead) {
                        physicalElemts[i]->RemoveAt(j);
                    }
                }
            }
            TimeEnemies->Stop();
            if (TimeEnemies->Elapsed.TotalSeconds > 10) {
                GenerateUnits_enemies(this->unit_enemies[0]);
                TimeEnemies->Restart();
            }
            else TimeEnemies->Start();
            if (arrow->throwed)
                arrow->MakeFly();
            else {
                arrow->Position = crossbow->Position;
                arrow->Rotation = crossbow->Rotation;
            }
            watch->ActualizarNumero();
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
        this->Draw(this->watch->minDecena);
        this->Draw(this->watch->minUnidad);
        this->Draw(this->watch->dosPuntos);
        this->Draw(this->watch->segDecena);
        this->Draw(this->watch->segUnidad);
        

        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < physicalElemts[i]->Count; j++) {
                this->Draw(physicalElemts[i][j]);
            }
        }
        cover->Texture = base->coverState[castle->indiceStatus];
        this->Draw(cover);
        this->Draw(this->crossbow);
        this->Draw(this->arrow);
        render->Stop();

        if (castle->HP < 0) {  
            gameOver++; 
            this->Draw(this->gameOverImage);
        }
        if (gameOver == 1) {
            endGame();
            chronoGameOver->Restart();
        }
        chronoGameOver->Stop();
        if (chronoGameOver->Elapsed.Seconds>=5) {
            this->Close();
        }
        if(gameOver >= 2) { chronoGameOver->Start(); }
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
            if (gameOver == 0) {
                if (Keyboard::IsKeyPressed(Keyboard::Key::D)) {
                    TimeGenerate->Stop();
                    if (TimeGenerate->Elapsed.TotalSeconds > 6) {
                        GenerateUnits(this->unit_allies[0]);
                        TimeGenerate->Restart();
                    }
                    else TimeGenerate->Start();
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::E)) {
                    TimeGenerate->Stop();
                    if (TimeGenerate->Elapsed.TotalSeconds > 6) {
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
                    arrow->Rotation = crossbow->Rotation;
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::Space)) {
                    TimeThrowArrow->Stop();
                    if (TimeThrowArrow->Elapsed.TotalSeconds > 5) {
                        ThrowArrow();
                        TimeThrowArrow->Restart();
                    }
                    else TimeThrowArrow->Start();
                }
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
    watch = gcnew Watch;
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
    unit_allies[0]->DeathAnimation = gcnew List<Texture^>;
    unit_allies[0]->HealthBar = gcnew array < SFML::Graphics::Image^>(4) ;
    unit_allies[0]->HealthBar[0] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_bar_full.png");
    unit_allies[0]->HealthBar[1] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner1.png");
    unit_allies[0]->HealthBar[2] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_point.png");
    unit_allies[0]->HealthBar[3] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner2.png");
    String^ d;               //auxiliar para Directorio de imagenes
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": 
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_allies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": 
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_allies[0]->MoveAnimation->Add(gcnew Texture(d));  
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unit_allies[0]->DeathAnimation->Add(gcnew Texture(d));
    }
    unit_allies[0]->Image = unit_allies[0]->MoveAnimation[0];
    unit_allies[0]->scale=Vector2f(0.6,0.6);
    unit_allies[0]->positionElement = Vector2i(42, 52);
    unit_allies[0]->sizeElement=Vector2i(177-42,284-52) ;
    unit_allies[0]->attackVelocity = 50;
    unit_allies[0]->movementVelocity=0.9;
    unit_allies[0]->moneyValue = 50;
    unit_allies[0]->attackDamage = 40;
    unit_allies[0]->Maxlife = 200;
    unit_allies[0]->deathTime = 1.2;
    unit_allies->Add(gcnew FBAModel::Units);
    unit_allies[1]->band = FBAModel::Units::Band::Allies;
    unit_allies[1]->AttackAnimation = gcnew List<Texture^>;
    unit_allies[1]->MoveAnimation = gcnew List<Texture^>;
    unit_allies[1]->DeathAnimation = gcnew List<Texture^>;
    unit_allies[1]->HealthBar = gcnew array < SFML::Graphics::Image^>(4);
    unit_allies[1]->HealthBar[0] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_bar_full.png");
    unit_allies[1]->HealthBar[1] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner1.png");
    unit_allies[1]->HealthBar[2] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_point.png");
    unit_allies[1]->HealthBar[3] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner2.png");
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
    unit_allies[1]->deathTime = 1.2;
    //
    //Unidades Enemigas
    //
    unit_enemies->Add(gcnew FBAModel::Units);
    unit_enemies[0]->band = FBAModel::Units::Band::Enemies;
    unit_enemies[0]->AttackAnimation = gcnew List<Texture^>;
    unit_enemies[0]->MoveAnimation = gcnew List<Texture^>;
    unit_enemies[0]->DeathAnimation = gcnew List<Texture^>;
    unit_enemies[0]->HealthBar = gcnew array < SFML::Graphics::Image^>(4);
    unit_enemies[0]->HealthBar[0] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_bar_full.png");
    unit_enemies[0]->HealthBar[1] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner1.png");
    unit_enemies[0]->HealthBar[2] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_point.png");
    unit_enemies[0]->HealthBar[3] = gcnew SFML::Graphics::Image("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner2.png");
    for (int j = 0; j < 20; j++) {
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unit_enemies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png": //que pasa con la direccion de memoria creada con gcnew
                    "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unit_enemies[0]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unit_enemies[0]->DeathAnimation->Add(gcnew Texture(d));
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
    unit_enemies[0]->deathTime = 1.2;
    //Cronometro
    watch->numbers = gcnew array<Texture^>(10);
    for (int i = 0; i < watch->numbers->Length; i++) {
        watch->numbers[i] = gcnew Texture("Assets/Environment/Numeros/"+ i +".png");
    }
    watch->minDecena = gcnew Sprite(watch->numbers[0]);
    watch->minUnidad = gcnew Sprite(watch->numbers[0]);
    watch->segDecena = gcnew Sprite(watch->numbers[0]);
    watch->segUnidad = gcnew Sprite(watch->numbers[0]);
    watch->dosPuntos = gcnew Sprite(gcnew Texture("Assets/Environment/Numeros/2puntos.png"));
    watch->refCronometro = Vector2f(1200, 60);
    watch->minDecena ->Position=Vector2f(watch->refCronometro.X, watch->refCronometro.Y);
    watch->minUnidad ->Position=Vector2f(watch->refCronometro.X+115, watch->refCronometro.Y);
    watch->dosPuntos->Position = Vector2f(watch->refCronometro.X+230, watch->refCronometro.Y);
    watch->segDecena ->Position=Vector2f(watch->refCronometro.X+345, watch->refCronometro.Y);
    watch->segUnidad ->Position=Vector2f(watch->refCronometro.X+460, watch->refCronometro.Y);
    watch->scaleCronometro = Vector2f(0.85,0.85);
    watch->minDecena ->Scale=Vector2f(watch->scaleCronometro.X, watch->scaleCronometro.Y);
    watch->minUnidad ->Scale=Vector2f(watch->scaleCronometro.X,watch->scaleCronometro.Y);
    watch->segDecena ->Scale=Vector2f(watch->scaleCronometro.X,watch->scaleCronometro.Y);
    watch->segUnidad ->Scale=Vector2f(watch->scaleCronometro.X,watch->scaleCronometro.Y);
    watch->dosPuntos ->Scale=Vector2f(watch->scaleCronometro.X,watch->scaleCronometro.Y);
    watch->Chronometer = gcnew System::Diagnostics::Stopwatch;    watch->Chronometer->Start();
    watch->ChronometerAux = gcnew System::Diagnostics::Stopwatch; watch->ChronometerAux->Start();
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
    base->Vida_max = 100; //1000
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
    //Game
    gameOver = 0;
    gameOverImage = gcnew Sprite(gcnew Texture("Assets/Environment/GameOver.png"));
    gameOverImage->Origin = Vector2f(gameOverImage->Texture->Size.X / 2, gameOverImage->Texture->Size.Y / 2);
    gameOverImage->Position = Vector2f(1920 / 2, 1080 / 2);
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
    newUnit->deathTime = newUnit->unit->deathTime;
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
    newUnit->deathTime = newUnit->unit->deathTime;
}

void FBAView::SurvivalRender::endGame()
{
    watch->Chronometer->Stop();
    watch->ChronometerAux->Stop();
    int a;
    a = int(watch->Chronometer->Elapsed.TotalSeconds);
    if (((Menu_principal^)owner)->user->survival->timeMax < a) {
        ((Menu_principal^)owner)->user->survival->timeMax = a;
    }
    /*if (0 < a) {
        a=0;
    }*/
    gameOver++;
}

