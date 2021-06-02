#include "pch.h"
#include "DBController.h"

void FBA_Controller::DBController::InicializeController(){
}

void FBA_Controller::DBController::SaveUsers(){
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(List<User^>::typeid);
    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("users.xml");
    writer->Serialize(file, user);
    file->Close();
}

void FBA_Controller::DBController::LoadUsers(){
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

User^ FBA_Controller::DBController::ValidateUser(String^ username, String^ password){
    User^ posibleUser = nullptr;
    LoadUsers();
    for (int i = 0; i < user->Count; i++) {
        if (user[i]->username->Equals(username) &&
            user[i]->password->Equals(password))
            return user[i];
    }
    return posibleUser;
}

void FBA_Controller::DBController::AddUser(User^ usernew){
    DBController::user->Add(usernew) ;
    SaveUsers();
}

void FBA_Controller::DBController::UpdateUser(User^){
    throw gcnew System::NotImplementedException();
}

void FBA_Controller::DBController::DeleteUser(User^){
    throw gcnew System::NotImplementedException();
}

List<User^>^ FBA_Controller::DBController::QueryAllUser(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

User^ FBA_Controller::DBController::QueryUserByID(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}
