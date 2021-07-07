#include "SurvivalRender.h"
#include "menu_principal.h"
FBAView::SurvivalRender::SurvivalRender() :RenderWindow(VideoMode(SFML::Window::VideoMode::DesktopMode.Width, SFML::Window::VideoMode::DesktopMode.Height), "Modo survival", Styles::Fullscreen){
    InitializeGraphics();
    for (int i = 0; i < 192; i++) {
        physicalSpace[i] = gcnew List<PhysicalElement^>;
    }
    for (int i = 0; i < 1920; i++) {
        controlSpace[i] = gcnew array<ControlElements^>(1080);
    }
    for (int i = 0; i < controlElemts->Count; i++) {
        controlElemts[i]->OcuppySpace(controlSpace);
    }
    this->SetFramerateLimit(60);
    TimeGenerate = gcnew System::Diagnostics::Stopwatch; TimeGenerate->Start();
    TimeThrowArrow= gcnew System::Diagnostics::Stopwatch; TimeThrowArrow->Start();
    TimeEnemies=gcnew System::Diagnostics::Stopwatch; TimeEnemies->Start();
    render = gcnew System::Diagnostics::Stopwatch; 
    watch->Chronometer->Restart();
    chronoGameOver = gcnew System::Diagnostics::Stopwatch;chronoGameOver->Reset();
    chronoGameOver->Stop();
}

void FBAView::SurvivalRender::Run() {
    a = gcnew SFML::Graphics::View(FloatRect(0, 0, 1920, 1080));
    b = gcnew SFML::Graphics::View(FloatRect(0, 0, 1920, 1080));
    miniMap = gcnew SFML::Graphics::View(FloatRect(0, 0, 1920*2, 750));
    miniMap->Move(Vector2f(0, 100));
    miniMap->Viewport = FloatRect(0, 0.8,0.30 ,0.2 );
    while (this->IsOpen) {
        render->Restart();
        if ( (Mouse::GetPosition().X > SFML::Window::VideoMode::DesktopMode.Width - 2)&&(posx <= 1914) ) {
            a->Move(Vector2f(6, 0));
            posx += 6;
        }
        if ( (Mouse::GetPosition().X < 2)&&(posx >= 6) ) {
            a->Move(Vector2f(-6, 0));
            posx -= 6;
        }
        if (gameOver == 0) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++)
                    if (physicalElemts[i][j]->state != PhysicalElement::States::Die)
                        physicalElemts[i][j]->OccupySpace();
            }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++) {
                    if (physicalElemts[i][j]->state!=PhysicalElement::States::Die)
                        physicalElemts[i][j]->ProcessCollision();
                    if (physicalElemts[i][j]->GetType() == UnitDistanceRender::typeid) {
                        if (((UnitDistanceRender^)physicalElemts[i][j])->arrow->throwed) {
                            ((UnitDistanceRender^)physicalElemts[i][j])->arrow->ProcessCollision();
                        }
                    }
                    if (physicalElemts[i][j]->GetType() == CastleRender::typeid) {
                        if (((CastleRender^)physicalElemts[i][j])->arrowRender->throwed) {
                            ((CastleRender^)physicalElemts[i][j])->arrowRender->ProcessCollision();
                        }
                    }
                }
            }
            for (int i = 2; 0<= i; i--) {
                for (int j = physicalElemts[i]->Count - 1; 0 <= j; j--) {
                    if (physicalElemts[i][j]->state != PhysicalElement::States::Die)
                        physicalElemts[i][j]->FreeSpace();
                }
            }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < physicalElemts[i]->Count; j++) {
                    physicalElemts[i][j]->ToDo();
                    if (physicalElemts[i][j]->GetType() == UnitDistanceRender::typeid) {
                        ((UnitDistanceRender^)physicalElemts[i][j])->arrow->ToDo() ;
                    }
                    if (physicalElemts[i][j]->GetType() == CastleRender::typeid) {
                        ((CastleRender^)physicalElemts[i][j])->arrowRender->ToDo();
                    }
                }
            }
            for (int i = 0; i < 3; i++) {
                for (int j = physicalElemts[i]->Count-1; j >=0; j--) {
                    if (physicalElemts[i][j]->death) {
                        physicalElemts[i]->RemoveAt(j);
                    }
                }
            }
            TimeEnemies->Stop();
            if (TimeEnemies->Elapsed.TotalSeconds > 14) {
                GenerateUnits(this->unitEnemies[0]);
                TimeEnemies->Restart();
            }
            else TimeEnemies->Start();
            watch->UpdateWatch();
        }
        Procesar_evento();
        Console::WriteLine("" + render->Elapsed.TotalMilliseconds);
        render->Restart();
        // Logica del pintado en pantalla
        this->Clear();
        this->SetView(a);
        this->Draw(this->background);
        for (int i = 0; i < 3; i++) {
            for (int j = physicalElemts[i]->Count -1; j >=  0 ; j--) {
                this->Draw(physicalElemts[i][j]);
                if (physicalElemts[i][j]->GetType() == UnitDistanceRender::typeid) {
                    if (((UnitDistanceRender^)physicalElemts[i][j])->arrow->throwed) {
                        this->Draw(((UnitDistanceRender^)physicalElemts[i][j])->arrow);
                    } 
                }
            }
        }
        this->Draw(castle->cover);
        this->Draw(this->castle->crossbow);
        this->Draw(this->castle->arrowRender);
        this->SetView(b);
        this->Draw(this->userAvatar);
        this->Draw(this->console);
        this->Draw(this->watch);
        if (castle->HP <= 0) {  
            gameOver++; 
            this->Draw(this->gameOverImage);
        }
        if (gameOver == 1) {
            endGame();
            chronoGameOver->Restart();
        }
        chronoGameOver->Stop();
        if (chronoGameOver->Elapsed.Seconds>=5) {
            gameSound->Stop();
            this->Close();
        }
        if(gameOver >= 2) { chronoGameOver->Start(); }
        this->SetView(miniMap);
        this->Draw(this->background);
        for (int i = 0; i < 3; i++) {
            for (int j = physicalElemts[i]->Count - 1; j >= 0; j--) {
                this->Draw(physicalElemts[i][j]);
                if (physicalElemts[i][j]->GetType() == UnitDistanceRender::typeid) {
                    if (((UnitDistanceRender^)physicalElemts[i][j])->arrow->throwed) {
                        this->Draw(((UnitDistanceRender^)physicalElemts[i][j])->arrow);
                    }
                }
            }
        }
        this->Draw(castle->cover);
        this->Draw(this->castle->crossbow);
        this->Draw(this->castle->arrowRender);
        Console::WriteLine(" b." + render->Elapsed.TotalMilliseconds);
        this->Display();
        Console::WriteLine(" c." + render->Elapsed.TotalMilliseconds);
    }
}


void FBAView::SurvivalRender::Procesar_evento(){
    while (this->PollEvent(event)) {
        switch (event.Type) {
        case EventType::Closed:
            gameSound->Stop();
            this->Close();
            break;
        case EventType::KeyPressed:
            if (gameOver == 0) {
                if (Keyboard::IsKeyPressed(Keyboard::Key::D)) {
                    if (TimeGenerate->Elapsed.TotalSeconds > 6) {
                        GenerateUnits(this->unitAllies[0]);
                        TimeGenerate->Restart();
                    }
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::E)) {
                    if (TimeGenerate->Elapsed.TotalSeconds > 6) {
                        GenerateUnitsDistance(this->unitAllies[2]);
                        TimeGenerate->Restart();
                    }
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::Up)) {
                    castle->crossbow->Rotation--;
                    if (!castle->arrowRender->throwed) {
                        castle->arrowRender->Rotation = castle->crossbow->Rotation;
                    }
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::Down)) {
                    castle->crossbow->Rotation++;
                    if (!castle->arrowRender->throwed) {
                        castle->arrowRender->Rotation = castle->crossbow->Rotation;
                    }
                    
                }
                if (Keyboard::IsKeyPressed(Keyboard::Key::Space)) {
                    TimeThrowArrow->Stop();
                    if (TimeThrowArrow->Elapsed.TotalSeconds > 5) {
                        castle->ThrowArrow();
                        TimeThrowArrow->Restart();
                    }
                    else TimeThrowArrow->Start();
                }
            }
            break;
        case EventType::MouseButtonPressed:
            if (Mouse::IsButtonPressed(Mouse::Button::Left)) {
                Vector2i mouse = Mouse::GetPosition();
                mouse.X = Mouse::GetPosition().X * (this->DefaultView->Size.X / SFML::Window::VideoMode::DesktopMode.Width);
                mouse.Y = Mouse::GetPosition().Y * (this->DefaultView->Size.Y / SFML::Window::VideoMode::DesktopMode.Height);
                if (controlSpace[mouse.X][mouse.Y] != nullptr) {
                    ClickArgs^ e = gcnew ClickArgs;
                    e->mousePosition = mouse;
                    controlSpace[mouse.X][mouse.Y]->MouseCollision(e);
                }
            }
            break;
        case EventType::MouseButtonReleased:
            if (!Mouse::IsButtonPressed(Mouse::Button::Left)) {
            }
            break;
        case EventType::MouseMoved:
            break;
        }

    }
}

Void FBAView::SurvivalRender::InitializeGraphics() {
    // GameElements
    //// Unidades Alidas  Modelo
    unitAllies = gcnew List<FBAModel::Units^>;
    unitAllies->Add(gcnew FBAModel::Units);
    unitAllies[0]->band = FBAModel::Units::Band::Allies;
    unitAllies[0]->AttackAnimation = gcnew List<Texture^>;
    unitAllies[0]->MoveAnimation = gcnew List<Texture^>;
    unitAllies[0]->DeathAnimation = gcnew List<Texture^>;
    String^ d;               //auxiliar para Directorio de imagenes
    for (int j = 0; j < 20; j++) {
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unitAllies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unitAllies[0]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitAllies[0]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitAllies[0]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitAllies[0]->attackSound = gcnew Sound(unitAllies[0]->attackBuffer);
    unitAllies[0]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitAllies[0]->deathSound = gcnew Sound(unitAllies[0]->deathBuffer);
    unitAllies[0]->Image = unitAllies[0]->MoveAnimation[0];
    unitAllies[0]->scale = Vector2f(0.6, 0.6);
    unitAllies[0]->positionElement = Vector2i(42, 52);
    unitAllies[0]->sizeElement = Vector2i(177 - 42, 284 - 52);
    unitAllies[0]->attackVelocity = 50;
    unitAllies[0]->movementVelocity = 0.9;
    unitAllies[0]->moneyValue = 50;
    unitAllies[0]->attackDamage = 40;
    unitAllies[0]->Maxlife = 200;
    unitAllies[0]->deathTime = 1.2;
    unitAllies->Add(gcnew FBAModel::Units);
    unitAllies[1]->band = FBAModel::Units::Band::Allies;
    unitAllies[1]->AttackAnimation = gcnew List<Texture^>;
    unitAllies[1]->MoveAnimation = gcnew List<Texture^>;
    unitAllies[1]->DeathAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 11; j++) {
        d = j > 9 ? "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Attacking/Attacking_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Attacking/Attacking_00" + j + ".png";
        unitAllies[1]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Walking/Walking_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/craftpix-991077-knight-tiny-style-2d-character-sprites/PNG/Knight Gray/PNG Sequences/Walking/Walking_00" + j + ".png";
        unitAllies[1]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitAllies[0]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitAllies[1]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitAllies[1]->attackSound = gcnew Sound(unitAllies[0]->attackBuffer);
    unitAllies[1]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitAllies[1]->deathSound = gcnew Sound(unitAllies[0]->deathBuffer);
    unitAllies[1]->Image = unitAllies[1]->MoveAnimation[0];
    unitAllies[1]->scale = Vector2f(0.5, 0.5);
    unitAllies[1]->positionElement = Vector2i(172, 94);
    unitAllies[1]->sizeElement = Vector2i(358 - 172, 334 - 94);
    unitAllies[1]->attackVelocity = 50;
    unitAllies[1]->movementVelocity = 0.9;
    unitAllies[1]->moneyValue = 50;
    unitAllies[1]->attackDamage = 40;
    unitAllies[1]->Maxlife = 200;
    unitAllies[1]->deathTime = 1.2;

    unitAllies->Add(gcnew FBAModel::Units);
    unitAllies[2]->band = FBAModel::Units::Band::Allies;
    unitAllies[2]->AttackAnimation = gcnew List<Texture^>;
    unitAllies[2]->MoveAnimation = gcnew List<Texture^>;
    unitAllies[2]->DeathAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 12; j++) {
        d = j > 9 ? "Assets/Characters/wraith/PNG/Wraith_03/PNG Sequences/Attacking/Wraith_03_Attack_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/wraith/PNG/Wraith_03/PNG Sequences/Attacking/Wraith_03_Attack_00" + j + ".png";
        unitAllies[2]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/wraith/PNG/Wraith_03/PNG Sequences/Walking/Wraith_03_Moving Forward_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/wraith/PNG/Wraith_03/PNG Sequences/Walking/Wraith_03_Moving Forward_00" + j + ".png";
        unitAllies[2]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" :
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitAllies[0]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitAllies[2]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitAllies[2]->attackSound = gcnew Sound(unitAllies[0]->attackBuffer);
    unitAllies[2]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitAllies[2]->deathSound = gcnew Sound(unitAllies[0]->deathBuffer);
    unitAllies[2]->Image = unitAllies[2]->MoveAnimation[0];
    unitAllies[2]->scale = Vector2f(0.48, 0.48);//
    unitAllies[2]->positionElement = Vector2i(120, 45);//
    unitAllies[2]->sizeElement = Vector2i(220, 302);//
    unitAllies[2]->attackVelocity = 38;
    unitAllies[2]->movementVelocity = 0.9;
    unitAllies[2]->moneyValue = 50;
    unitAllies[2]->attackDamage = 40;
    unitAllies[2]->Maxlife = 200;
    unitAllies[2]->deathTime = 1.2;
    //// Unidades Enemigas Modelo
    unitEnemies = gcnew List<Units^>;
    unitEnemies->Add(gcnew FBAModel::Units);
    unitEnemies[0]->band = FBAModel::Units::Band::Enemies;
    unitEnemies[0]->AttackAnimation = gcnew List<Texture^>;
    unitEnemies[0]->MoveAnimation = gcnew List<Texture^>;
    unitEnemies[0]->DeathAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 20; j++) {
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unitEnemies[0]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unitEnemies[0]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitEnemies[0]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitEnemies[0]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitEnemies[0]->attackSound = gcnew Sound(unitEnemies[0]->attackBuffer);
    unitEnemies[0]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitEnemies[0]->deathSound = gcnew Sound(unitEnemies[0]->deathBuffer);
    unitEnemies[0]->Image = unitEnemies[0]->MoveAnimation[0];
    unitEnemies[0]->scale = Vector2f(-0.6, 0.6);
    unitEnemies[0]->positionElement = Vector2i(42, 52);
    unitEnemies[0]->sizeElement = Vector2i(177 - 42, 284 - 52);
    unitEnemies[0]->attackVelocity = 50;
    unitEnemies[0]->movementVelocity = 0.9;
    unitEnemies[0]->moneyValue = 50;
    unitEnemies[0]->attackDamage = 40;
    unitEnemies[0]->Maxlife = 200;
    unitEnemies[0]->deathTime = 1.2;
    unitEnemies->Add(gcnew FBAModel::Units);
    unitEnemies[1]->band = FBAModel::Units::Band::Enemies;
    unitEnemies[1]->AttackAnimation = gcnew List<Texture^>;
    unitEnemies[1]->MoveAnimation = gcnew List<Texture^>;
    unitEnemies[1]->DeathAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 20; j++) {
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unitEnemies[1]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unitEnemies[1]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitEnemies[1]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitEnemies[1]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitEnemies[1]->attackSound = gcnew Sound(unitEnemies[0]->attackBuffer);
    unitEnemies[1]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitEnemies[1]->deathSound = gcnew Sound(unitEnemies[0]->deathBuffer);
    unitEnemies[1]->Image = unitEnemies[0]->MoveAnimation[0];
    unitEnemies[1]->scale = Vector2f(-0.6, 0.6);
    unitEnemies[1]->positionElement = Vector2i(42, 52);
    unitEnemies[1]->sizeElement = Vector2i(177 - 42, 284 - 52);
    unitEnemies[1]->attackVelocity = 50;
    unitEnemies[1]->movementVelocity = 0.9;
    unitEnemies[1]->moneyValue = 50;
    unitEnemies[1]->attackDamage = 40;
    unitEnemies[1]->Maxlife = 200;
    unitEnemies[1]->deathTime = 1.2;
    unitEnemies->Add(gcnew FBAModel::Units);
    unitEnemies[2]->band = FBAModel::Units::Band::Enemies;
    unitEnemies[2]->AttackAnimation = gcnew List<Texture^>;
    unitEnemies[2]->MoveAnimation = gcnew List<Texture^>;
    unitEnemies[2]->DeathAnimation = gcnew List<Texture^>;
    for (int j = 0; j < 20; j++) {
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_attack_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_attack_00" + j + ".png";
        unitEnemies[2]->AttackAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_walk_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_walk_00" + j + ".png";
        unitEnemies[2]->MoveAnimation->Add(gcnew Texture(d));
        d = j > 9 ? "Assets/Characters/Soldier/4_enemies_1_die_0" + j + ".png" : //que pasa con la direccion de memoria creada con gcnew
            "Assets/Characters/Soldier/4_enemies_1_die_00" + j + ".png";
        unitEnemies[2]->DeathAnimation->Add(gcnew Texture(d));
    }
    unitEnemies[2]->attackBuffer = gcnew SoundBuffer("Assets/Audio/ES_Sword Strike 7.wav");
    unitEnemies[2]->attackSound = gcnew Sound(unitEnemies[0]->attackBuffer);
    unitEnemies[2]->deathBuffer = gcnew SoundBuffer("Assets/Audio/ES_Human Moan 14.wav");
    unitEnemies[2]->deathSound = gcnew Sound(unitEnemies[0]->deathBuffer);
    unitEnemies[2]->Image = unitEnemies[0]->MoveAnimation[0];
    unitEnemies[2]->scale = Vector2f(-0.6, 0.6);
    unitEnemies[2]->positionElement = Vector2i(42, 52);
    unitEnemies[2]->sizeElement = Vector2i(177 - 42, 284 - 52);
    unitEnemies[2]->attackVelocity = 50;
    unitEnemies[2]->movementVelocity = 0.9;
    unitEnemies[2]->moneyValue = 50;
    unitEnemies[2]->attackDamage = 40;
    unitEnemies[2]->Maxlife = 200;
    unitEnemies[2]->deathTime = 1.2;
    //// Proyectiles
    projectile= gcnew Projectile;
    //// Base
    base= gcnew Base;
    base->baseState = gcnew List<Texture^>;
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 27.png"));
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 28.png"));
    base->baseState->Add(gcnew Texture("Assets/Environment/MapsElements/Asset 29.png"));
    base->coverState = gcnew List<Texture^>;
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 27.png"));
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 28.png"));
    base->coverState->Add(gcnew Texture("Assets/Environment/MapsElements/CoverAsset 29.png"));
    base->Vida_max = 1000;
    //// SkinBackground
    skinBackground= gcnew FBAModel::Skin_Background;
    skinBackground->texture = (gcnew Texture("Assets/Environment/Maps/GameBackground.png"));
    // Elementos Graficos
    //// BackGround
    background = gcnew BackGroundRender(skinBackground);
    background->Scale = Vector2f(3840.f / background->Texture->Size.X, 1080.f / background->Texture->Size.Y);
    //// HealthBar
    array< SFML::Graphics::Texture^>^ hb= gcnew array < SFML::Graphics::Texture^>(4);
    hb[0] = gcnew SFML::Graphics::Texture("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_bar_full.png");
    hb[1] = gcnew SFML::Graphics::Texture("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner1.png");
    hb[2] = gcnew SFML::Graphics::Texture("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_point.png");
    hb[3] = gcnew SFML::Graphics::Texture("Assets/Characters/fantasy-platformer-ui/PNG/16Inner_Interface/hp_corner2.png");
    this->healthBar = gcnew HealthBar();
    this->healthBar->healthBar = hb;
    this->healthBar->corner = 1;
    this->healthBar->position = Vector2i(4, 4);
    this->healthBar->Generate(121);
    ////Castle
    castle = gcnew CastleRender(base);
    castle->Scale = Vector2f((float)-0.7, (float)0.7);
    castle->Origin = Vector2f(castle->Texture->Size.X, 1080 / 2);
    castle->Position = Vector2f(-300, 400);
    castle->positionElement = Vector2i(90, 0);
    castle->sizeElement = Vector2i(350, 200);
    castle->cover->Scale = Vector2f((float)-0.7, (float)0.7);
    castle->cover->Origin = Vector2f(castle->Texture->Size.X, 1080 / 2);
    castle->cover->Position = Vector2f(-300, 400);
    castle->crossbow = gcnew Sprite(gcnew Texture("Assets/Environment/MapsElements/crossbow.png"));
    castle->crossbow->Origin = Vector2f(168, 406);
    castle->crossbow->Scale = Vector2f(0.18, 0.18);
    castle->crossbow->Position = Vector2f(500, 470);
    castle->crossbow->Rotation = 0;
    castle->arrowRender = gcnew ArrowRender;
    castle->arrowRender->arrowBall = 1;
    castle->arrowRender->Texture = gcnew Texture("Assets/Environment/MapsElements/arrow.png");
    castle->arrowRender->arrow = gcnew FBAModel::Projectile;
    castle->arrowRender->Origin = Vector2f(327, 70);
    castle->arrowRender->Scale = Vector2f(0.125, 0.125);
    castle->arrowRender->Position = castle->crossbow->Position;
    castle->arrowRender->throwed = 0;
    castle->arrowRender->arrow->Velocity = 1000;
    castle->arrowRender->damage = 40;
    castle->arrowRender->Rotation = 0;
    castle->arrowRender->posPunta = Vector2f(953, 953);
    ////physical elements
    physicalElemts = gcnew array<List<PhysicalElement^>^>(3);
    physicalElemts[0] = gcnew List<PhysicalElement^>(); //Castillo
    physicalElemts[1] = gcnew List<PhysicalElement^>();//Arrow
    physicalElemts[2] = gcnew List<PhysicalElement^>();
    physicalElemts[0]->Add(castle);
    ////Avatar
    userAvatar = gcnew UserLifeBar(((Menu_principal^)owner)->user->nickname, ((Menu_principal^)owner)->user->avatar.ToString());
    userAvatar->click += gcnew System::EventHandler<ClickArgs^>(this, &SurvivalRender::userclick);
    userAvatar->avatarButton->click += gcnew System::EventHandler<ClickArgs^>(this, &SurvivalRender::avatarclick);
    userAvatar->UpdateUserHP(1);
    castle->HPBar = userAvatar;
    ////console
    console = gcnew Sprite(gcnew Texture("Assets/Environment/MapsElements/console mold 3.png"));
    console->Position = Vector2f(400, 800);
    console->Scale = Vector2f(1.5, 1.5);
    ////Cronometro
    watch = gcnew Watch;
    watch->numbers = gcnew array<Texture^>(10);
    for (int i = 0; i < watch->numbers->Length; i++) {
        watch->numbers[i] = gcnew Texture("Assets/Environment/Numeros/" + i + ".png");
    }
    watch->twoPoints = gcnew Texture("Assets/Environment/Numeros/2puntos.png");
    watch->Position = Vector2f(1400, 0);
    watch->Scale = Vector2f(0.8, 0.8);
    watch->secUnit->Texture = watch->numbers[0];
    watch->secDecena->Texture = watch->numbers[0];
    watch->minUnit->Texture = watch->numbers[0];
    watch->minDecena->Texture = watch->numbers[0];
    watch->dosPuntos->Texture = watch->twoPoints;
    watch->PaintTexture();
    ////ControlElements
    controlElemts = gcnew List<ControlElements^>;
    controlElemts->Add(userAvatar);
    controlElemts->Add(watch);
    //Utilitarios
    ////Game
    gameOver = 0;
    gameOverImage = gcnew Sprite(gcnew Texture("Assets/Environment/GameOver.png"));
    gameOverImage->Origin = Vector2f(gameOverImage->Texture->Size.X / 2, gameOverImage->Texture->Size.Y / 2);
    gameOverImage->Position = Vector2f(1920 / 2, 1080 / 2);
    ////Music
    gameSoundBuffer = gcnew SoundBuffer("Assets/Audio/game_music.wav");
    gameSound = gcnew Sound(gameSoundBuffer);
    gameSound->Play();
 }

void FBAView::SurvivalRender::GenerateUnits(Units^ baseUnit){
    UnitRender^ newUnit =gcnew UnitRender(baseUnit) ;
    newUnit->band = newUnit->unit->band;
    newUnit->healthbar = gcnew HealthBar(this->healthBar);
    newUnit->healthbar->Position = Vector2f(40, 4);
    newUnit->Texture = newUnit->unit->Image;
    newUnit->Scale = newUnit->unit->scale;
    newUnit->sizeElement = newUnit->unit->sizeElement;
    newUnit->positionElement = newUnit->unit->positionElement;
    if (baseUnit->band==Game_obj::Band::Allies) {
        physicalElemts[1]->Add(newUnit);
        newUnit->Position = Vector2f((float)450, (float)(piso - (newUnit->Scale.Y) * (newUnit->positionElement.Y + newUnit->sizeElement.Y)));
    }
    else{
        physicalElemts[2]->Add(newUnit);
        newUnit->Origin = Vector2f(newUnit->Texture->Size.X, 0);
        newUnit->Position = Vector2f(1920 * 2, (float)(piso - (newUnit->Scale.Y) * (newUnit->positionElement.Y + newUnit->sizeElement.Y)));
    }
    newUnit->attackVelocity = newUnit->unit->attackVelocity;
    newUnit->movementVelocity = newUnit->unit->movementVelocity;
    newUnit->attackDamage =newUnit->unit->attackDamage;
    newUnit->HP=newUnit->unit->Maxlife;
    newUnit->deathTime = newUnit->unit->deathTime;
    newUnit->rango = 2;

}
void FBAView::SurvivalRender::GenerateUnitsDistance(Units^ baseUnit) {
    UnitDistanceRender^ newUnit = gcnew UnitDistanceRender(baseUnit);
    physicalElemts[1]->Add(newUnit);
    newUnit->healthbar = gcnew HealthBar(this->healthBar);
    newUnit->healthbar->Position = Vector2f(150, 4);
    newUnit->band = newUnit->unit->band;
    newUnit->Texture = newUnit->unit->Image;
    newUnit->Scale = newUnit->unit->scale;
    newUnit->sizeElement = newUnit->unit->sizeElement;
    newUnit->positionElement = newUnit->unit->positionElement;
    newUnit->Position = Vector2f((float)450, (float)(piso - (newUnit->Scale.Y) * (newUnit->positionElement.Y + newUnit->sizeElement.Y)));
    newUnit->attackVelocity = newUnit->unit->attackVelocity;
    newUnit->movementVelocity = newUnit->unit->movementVelocity;
    newUnit->attackDamage = newUnit->unit->attackDamage;
    newUnit->HP = newUnit->unit->Maxlife;
    newUnit->deathTime = newUnit->unit->deathTime;
    newUnit->arrow = gcnew ArrowRender();
    newUnit->arrow->Texture = gcnew Texture("Assets/Characters/wraith/PNG/Wraith_03/Vector Parts/Spells-Effect.png");
    newUnit->rango = 19;
    newUnit->arrow->arrow = gcnew Projectile;
}

Void FBAView::SurvivalRender::endGame() {
    watch->Chronometer->Stop();
    int a;
    a = int(watch->Chronometer->Elapsed.TotalSeconds);
    Survival^ survival = gcnew Survival();
    survival->date = System::DateTime::Now.Day + "/" + System::DateTime::Now.Month + "/" + System::DateTime::Now.Year;
    survival->rank = Menu_principal::user->rank;
    survival->timeMax = a;
    survival->user = Menu_principal::user;
    try {
        FBAController::FBA_Controller::AddSurvival(survival);
    }
    catch (...) {
        MessageBox::Show("Parece que no tiene conexion a internet o hay problemas con el servidor del juego, porfavor intentelo en unos minutos");
    }
    gameOver++;
}

