#pragma once
using namespace System;
namespace FBAModel {
    [Serializable]
    public ref class User {
    public:
        /// <summary>
        /// Crea un user vacio
        /// </summary>
        User();
        /// <summary>
        /// Crea una copia de un User
        /// </summary>
        User(User^);
        /// <summary>
        /// Crea un User nuevo con valores inicial en los campos que no se ingresan
        /// </summary>
        User(String^, String^, String^, String^, String^, String^, String^);
        int id;
        String^ nickname;
        String^ password;
        String^ name;
        String^ lastNameFath;
        String^ lastNameMoth;
        String^ birthday;
        String^ email;
        enum class Rank {
            Captain, Colonel, General, Marshal
        };
        Rank rank;
        enum class Avatar {
            Avatar1, Avatar2, Avatar3, Avatar4
        };
        Avatar avatar;
        int experience;
        int emerald;
        int level;
    };
}
