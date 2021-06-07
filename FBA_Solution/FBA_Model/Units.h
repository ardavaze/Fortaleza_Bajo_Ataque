#pragma once
#include "Game_obj.h"

namespace FBAModel {
    public ref class Units: public Game_obj {
    public:
        TypeElement Nombre;
        List<Texture^>^ AttackAnimation;
        List<Texture^>^ MoveAnimation;
        int Vida_max;
        int attackDamage;
        int Valor_dinero;
    };
}
