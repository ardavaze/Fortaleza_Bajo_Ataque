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
        int Level_max;
        int Score_max;
        int Time_max;
        User() {}
        User(String^ nickname, String^ lastNameFath, String^ lastNameMoth, String^ name, String^ birthday, String^ email, String^ password);
    };
}
