#pragma once
using namespace System;
namespace FBAModel {
    public ref class User {
    public:
        String^ Username;
        String^ Pasword;
        int Level_max;
        int Age;
        int Score_max;
        int Time_max;
    };
}
