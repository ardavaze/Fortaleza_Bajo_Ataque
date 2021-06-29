#include "pch.h"
#include "DBController.h"

void FBAController::DBController::InicializeController(){
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(ConnectionParam::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("init.xml");
        connParam = (ConnectionParam^)reader->Deserialize(file);
    }
    catch (...) {

        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

SqlConnection^ FBAController::DBController::GetConnection() {
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

User^ FBAController::DBController::ValidateUser(String^ username, String^ password){
    User^ user = nullptr;
    /* Paso 1: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* Paso 2: Se prepara la sentencia */
    SqlCommand^ comm = gcnew SqlCommand();
    comm->Connection = conn;
    comm->CommandText = "SELECT * FROM sales_user WHERE username='" + username +
        "' AND password='" + password + "'";

    /* Paso 3: Se ejecuta la sentencia */
    SqlDataReader^ dr = comm->ExecuteReader();

    /* Paso 4: Se procesan los resultados */
    if (dr->Read()) {
        user = gcnew User();
        user->id = (int)dr["id"];
        user->nickname = (String^)dr["nickname"];
        user->name = safe_cast<String^>(dr["name"]);
        user->lastNameFath = safe_cast<String^>(dr["lastNameFath"]);
        user->lastNameMoth = safe_cast<String^>(dr["lastNameMoth"]);
        user->birthday = safe_cast<String^>(dr["birthday"]);
        user->email = safe_cast<String^>(dr["email"]);
    }

    /* Paso 5: Se cierra los objetos de conexión!!!!!!!!!! */
    if (dr != nullptr) dr->Close();
    if (conn != nullptr) conn->Close();

    return user;
}

void FBAController::DBController::AddUser(User^ usernew){
    DBController::user->Add(usernew) ;
}

void FBAController::DBController::UpdateUser(User^ user){
 
    /*for (int i = 0; i < DBController::user->Count; i++) {
        if (DBController::user[i]->id == user->id)
            DBController::user[i] = user;
    }*/
}

void FBAController::DBController::DeleteUser(User^user){
    DBController::user->Remove(user);

}

List<User^>^ FBAController::DBController::QueryAllUser(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

User^ FBAController::DBController::QueryUserByID(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

// Antiguo codigo para leer archivos
// 
//void FBAController::DBController::SaveUsers() {
//    System::Xml::Serialization::XmlSerializer^ writer =
//        gcnew System::Xml::Serialization::XmlSerializer(List<User^>::typeid);
//    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("users.xml");
//    writer->Serialize(file, user);
//    file->Close();
//}
//
//void FBAController::DBController::LoadUsers() {
//    System::Xml::Serialization::XmlSerializer^ reader =
//        gcnew System::Xml::Serialization::XmlSerializer(List<User^>::typeid);
//    System::IO::StreamReader^ file = nullptr;
//    try {
//        file = gcnew System::IO::StreamReader("users.xml");
//        user = (List<User^>^)reader->Deserialize(file);
//    }
//    catch (...) {
//        return;
//    }
//    finally {
//        if (file != nullptr) file->Close();
//    }
//}