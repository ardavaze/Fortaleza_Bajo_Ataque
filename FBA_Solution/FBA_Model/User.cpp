#include "pch.h"
#include "User.h"

FBAModel::User::User(String^ nickname, String^ lastNameFath, String^ lastNameMoth, String^ name, String^ birthday, String^ email, String^ password){
    this->nickname = nickname;
    this->lastNameFath = lastNameFath;
    this->lastNameMoth = lastNameMoth;
    this->name = name;
    this->birthday = birthday;
    this->email = email;
    this->password = password;
}
