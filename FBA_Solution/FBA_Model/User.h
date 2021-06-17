    #pragma once
#include "Survival.h"
#include "Medal.h"
using namespace System;
namespace FBAModel {
    [Serializable]
    public ref class User {
    public:
        int id;
        String^ nickname;
        String^ lastNameFath;
        String^ lastNameMoth;
        String^ name;
        String^ birthday;
        String^ email;
        String^ password;
        String^ avatar;
        Survival^ survival;
        int experience;
        int emerald;
        int levelMax;
        Medal^ medal;
        User() {}
        User(String^ nickname, String^ lastNameFath, String^ lastNameMoth, String^ name, String^ birthday, String^ email, String^ password);
    };
}
