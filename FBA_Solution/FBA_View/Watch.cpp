#include "Watch.h"

FBAView::Watch::Watch() {
    board = gcnew RenderTexture(600,200);
    Chronometer = gcnew System::Diagnostics::Stopwatch;
    secUnit = gcnew Sprite();
    secDecena=gcnew Sprite;
    minUnit= gcnew Sprite;
    minDecena= gcnew Sprite;
    dosPuntos= gcnew Sprite();
    background= gcnew Sprite;
    secUnit->Scale=Vector2f(0.6, 0.6);
    secDecena->Scale = Vector2f(0.6, 0.6);
    minUnit->Scale = Vector2f(0.6, 0.6);
    minDecena->Scale = Vector2f(0.6, 0.6);
    dosPuntos->Scale = Vector2f(0.6, 0.6);
    secUnit->Position= Vector2f(440,60);
    secDecena->Position = Vector2f(350,60);
    minUnit->Position = Vector2f(210,60);
    minDecena->Position = Vector2f(120,60);
    dosPuntos->Position = Vector2f(280,60);
    background->Scale = Vector2f(2.5, 2.5);
    background->Position = Vector2f(0, 0);
    background->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/MapsElements/6.png");
}

Void FBAView::Watch::UpdateWatch(){
    if ( (Chronometer->Elapsed.Seconds % 10) != segUnidTranscurridos ) {
        segUnidTranscurridos = Chronometer->Elapsed.Seconds % 10;
        segDecTranscurridos = Chronometer->Elapsed.Seconds / 10;
        minUnidTranscurridos = Chronometer->Elapsed.Minutes % 10;
        minDecTranscurridos = Chronometer->Elapsed.Minutes / 10;
        minDecena->Texture = this->numbers[minDecTranscurridos];
        minUnit->Texture = this->numbers[minUnidTranscurridos];
        secDecena->Texture = this->numbers[segDecTranscurridos];
        secUnit->Texture = this->numbers[segUnidTranscurridos];
        dosPuntos->Texture = this->twoPoints;
        this->PaintTexture();
    }
}

Void FBAView::Watch::PaintTexture() {
    this->board->Clear(SFML::Graphics::Color::Color(0, 0, 0, 0));
    this->board->Draw(background);
    this->board->Draw(dosPuntos);
    this->board->Draw(minUnit);
    this->board->Draw(minDecena);
    this->board->Draw(secUnit);
    this->board->Draw(secDecena);
    this->board->Display();
    this->Texture = this->board->Texture;
    return Void();
}
