#pragma once
using namespace System;
namespace FBAModel {
    public ref class User {
    public:
        String^ nickname;
        String^ lastNameFath;
        String^ lastNameMoth;
        String^ name;
        String^ birthday;
        String^ email;
        String^ password;
        int Skill_point;
        int Emerald;
        int Level_max;
        int Score_max;
        int Time_max;
        int VidaMaxBase;
        User() {}
        User(String^ nickname, String^ lastNameFath, String^ lastNameMoth, String^ name, String^ birthday, String^ email, String^ password);
    };
}
