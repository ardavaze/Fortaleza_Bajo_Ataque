#pragma once
#include "User.h"
using namespace System;
namespace FBAModel{
    [Serializable]
    public ref class Match {
    public:
        Match();
        Match(Match^ );
        int id;
        User^ user;
        int unspentGold; //dinero no gastado en la partida
        int unitsDeployed; //unidades desplegadas en toda la partida
        int unitsDefeated; //unidades derrotadas
        String^ date;
    };
}

