#pragma once
#include "Game_obj.h"
using namespace System;
namespace FBAModel{
    public ref class Base:public Game_obj {
    public:
        int Nro_ballesta;
        int Vida_max;
        String^ Imagen;
    };
}