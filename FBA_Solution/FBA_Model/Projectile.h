#pragma once
using namespace System;
namespace FBAModel{
    public ref class Projectile {
    public:
        int attack_damage;
        int Cooldown;
        double Velocity;
        SFML::Graphics::Sprite^ Image;
    };
}
