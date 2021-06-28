#include "Watch.h"

FBAView::Watch::Watch() {
    board = gcnew RenderTexture(600,200);
    Chronometer = gcnew System::Diagnostics::Stopwatch;
    secUnit = gcnew Sprite();
    secDecena=gcnew Sprite;
    minUnit= gcnew Sprite;
    minDecena= gcnew Sprite;
    dosPuntos= gcnew Sprite();
    secUnit->Scale=Vector2f(1,1);
    secDecena->Scale = Vector2f(1, 1);
    minUnit->Scale = Vector2f(1, 1);
    minDecena->Scale = Vector2f(1, 1);
    dosPuntos->Scale = Vector2f(1, 1);
    secUnit->Position= Vector2f(490,20);
    secDecena->Position = Vector2f(370,20);
    minUnit->Position = Vector2f(130,20);
    minDecena->Position = Vector2f(10,20);
    dosPuntos->Position = Vector2f(250,20);
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
    this->board->Clear(SFML::Graphics::Color::Color(120, 120, 255, 200));
    this->board->Draw(dosPuntos);
    this->board->Draw(minUnit);
    this->board->Draw(minDecena);
    this->board->Draw(secUnit);
    this->board->Draw(secDecena);
    this->board->Display();
    this->Texture = this->board->Texture;
    return Void();
}
