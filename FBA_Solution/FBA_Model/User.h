#pragma once
using namespace System;
namespace FBAModel {
    public ref class User {
    public:
        String^ username;
        String^ password;
        int Level_max;
        int Age;
        int Score_max;
        int Time_max;
    };
}
