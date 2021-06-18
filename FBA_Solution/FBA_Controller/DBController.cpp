#include "pch.h"
#include "DBController.h"

void FBAController::DBController::InicializeController(){
    LoadUsers();
}

void FBAController::DBController::SaveUsers(){
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(List<User^>::typeid);
    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("users.xml");
    writer->Serialize(file, user);
    file->Close();
}

void FBAController::DBController::LoadUsers(){
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(List<User^>::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("users.xml");
        user = (List<User^>^)reader->Deserialize(file);
    }
    catch (...) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

User^ FBAController::DBController::ValidateUser(String^ username, String^ password){
    User^ posibleUser = nullptr;
    LoadUsers();
    for (int i = 0; i < user->Count; i++) {
        if (user[i]->nickname->Equals(username) &&
            user[i]->password->Equals(password))
            return user[i];
    }
    return posibleUser;
}

void FBAController::DBController::AddUser(User^ usernew){
    DBController::user->Add(usernew) ;
    SaveUsers();
}

void FBAController::DBController::UpdateUser(User^ user){
 
    /*for (int i = 0; i < DBController::user->Count; i++) {
        if (DBController::user[i]->id == user->id)
            DBController::user[i] = user;
    }*/
    SaveUsers();
}

void FBAController::DBController::DeleteUser(User^user){
    DBController::user->Remove(user);
    SaveUsers();
}

List<User^>^ FBAController::DBController::QueryAllUser(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

User^ FBAController::DBController::QueryUserByID(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}
