#pragma once
#include "Game_obj.h"
using namespace System;
using namespace SFML::Audio;
namespace FBAModel{
    public ref class Base:public Game_obj {
    public:
        SoundBuffer^ attackBuffer;
        Sound^ attackSound;
        SoundBuffer^ deathBuffer;
        Sound^ deathSound;
        int Nro_ballesta;
        int Vida_max;
        List<SFML::Graphics::Texture^>^ baseState;
        List<SFML::Graphics::Texture^>^ coverState;
    };
}