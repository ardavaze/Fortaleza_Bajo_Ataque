#pragma once
#include "Game_obj.h"
using namespace SFML::System;
namespace FBAModel {
    public ref class Units: public Game_obj {
    public:
        List<Texture^>^ AttackAnimation;
        List<Texture^>^ MoveAnimation;
        List<Texture^>^ DeathAnimation;
        int Maxlife;
        int attackDamage;
        double movementVelocity;
        double attackVelocity;
        double deathTime;
        int moneyValue;
        Vector2f scale;      //la escala que debe tener la imagen al dibujarla
        Vector2i sizeElement;     //tamaño real del personaje sin considerar el rectangulo de imagen que la contiene
        Vector2i positionElement; //posicion del comienzo del elemento respecto de la esquina del rectangulo de imagen que la contiene 
    };  
}
