#include "Watch.h"

Void FBAView::Watch::ActualizarNumero(){
    Chronometer->Stop();
    ChronometerAux->Stop();

    if (Chronometer->Elapsed.Seconds % 60 == 0)
        ChronometerAux->Restart();
    segUnidTranscurridos = (int)(ChronometerAux->Elapsed.TotalSeconds) % 10;
    segDecTranscurridos = Math::Floor((ChronometerAux->Elapsed.TotalSeconds) / 10);
    minUnidTranscurridos = (int)(Chronometer->Elapsed.TotalMinutes) % 10;
    minDecTranscurridos = Math::Floor((Chronometer->Elapsed.TotalMinutes) / 10);
    Chronometer->Start();
    ChronometerAux->Start();
    minDecena->Texture = this->numbers[minDecTranscurridos];
    minUnidad ->Texture =this->numbers[minUnidTranscurridos];
    segDecena->Texture = this->numbers[segDecTranscurridos];
    segUnidad->Texture = this->numbers[segUnidTranscurridos];
}
