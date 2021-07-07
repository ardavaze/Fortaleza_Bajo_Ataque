#include "Watch.h"

FBAView::Watch::Watch() {
    board = gcnew RenderTexture(880,400);
    Chronometer = gcnew System::Diagnostics::Stopwatch;
    secUnit = gcnew Sprite();
    secDecena=gcnew Sprite;
    minUnit= gcnew Sprite;
    minDecena= gcnew Sprite;
    dosPuntos= gcnew Sprite();
    background= gcnew Sprite;
    secUnit->Scale=Vector2f(1, 1);
    secDecena->Scale = Vector2f(1, 1);
    minUnit->Scale = Vector2f(1, 1);
    minDecena->Scale = Vector2f(1, 1);
    dosPuntos->Scale = Vector2f(1, 1);
    secUnit->Position= Vector2f(547, 129);
    secDecena->Position = Vector2f(427, 129);
    minUnit->Position = Vector2f(207, 129);
    minDecena->Position = Vector2f(87, 129);
    dosPuntos->Position = Vector2f(317, 129);
    background->Position = Vector2f(0, 0);
    background->Texture = gcnew SFML::Graphics::Texture("Assets/Environment/MapsElements/6.png");
    background->Scale = Vector2f(board->Size.X/background->Texture->Size.X, board->Size.Y / background->Texture->Size.Y);
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
