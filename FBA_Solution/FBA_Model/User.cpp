#include "pch.h"
#include "User.h"

FBAModel::User::User() { 
    
}

FBAModel::User::User(User^ user) { 
    this->id = user->id;
    this->nickname = (String^)user->nickname->Clone();
    this->password = (String^)user->password->Clone();
    this->name = (String^)user->name->Clone();
    this->lastNameFath = (String^)user->lastNameFath->Clone();
    this->lastNameMoth = (String^)user->lastNameMoth->Clone();
    this->birthday = (String^)user->birthday->Clone();
    this->email= (String^)user->email->Clone();
    this->rank= user->rank;
    this->experience= user->experience;
    this->emerald = user->emerald;
    this->level = user->level;
}

FBAModel::User::User(String^ nickname, String^ lastNameFath, String^ lastNameMoth, String^ name, String^ birthday, String^ email, String^ password){
    this->nickname = nickname;
    this->password = password;
    this->name = name;
    this->lastNameFath = lastNameFath;
    this->lastNameMoth = lastNameMoth;
    this->birthday = birthday;
    this->email = email;
    this->rank = User::Rank::Captain;
    this->experience = 0;
    this->emerald = 0;
    this->level = 1;
}
