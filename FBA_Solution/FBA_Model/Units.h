#pragma once
#include "Game_obj.h"

namespace FBAModel {
    public ref class Units: public Game_obj {
    public:
        enum class unit_name{
            Soldier
        };
        String^ Nombre;
        unit_name tipo;
        List<Sprite^>^ AttackAnimation;
        List<Sprite^>^ MoveAnimation;
        int Vida_max;
        int attackDamage;
        int Valor_dinero;
    };
}
