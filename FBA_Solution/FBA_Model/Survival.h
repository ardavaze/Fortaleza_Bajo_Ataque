#pragma once
#include "Match.h"
using namespace System;
namespace FBAModel {
    [Serializable]
    public ref class Survival : public Match {
    public:
        /// <summary>
        /// 
        /// </summary>
        Survival();
        /// <summary>
        /// 
        /// </summary>7
        Survival(Survival^);
        /// <summary>
        /// 
        /// </summary>
        User::Rank rank; // Rango en el que se jugó la partida
        int timeMax; //en Segundos
    };
}
