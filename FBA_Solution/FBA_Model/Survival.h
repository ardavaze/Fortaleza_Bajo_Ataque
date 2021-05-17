#pragma once
#include "Match.h"

using namespace System;
namespace FBAModel {
    public ref class Survival : public Match {
    public:
        int Time_game;
        int Factor_dificultad;
    };
}
