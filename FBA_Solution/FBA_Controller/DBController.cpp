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
    SqlConnection^ conn = gcnew SqlConnection();
    String^ connStr = "Server=" + connParam->Server + ";Database=" + connParam->Database +
        ";User ID=" + connParam->User + ";Password=" + connParam->Password;
    conn->ConnectionString = connStr;
    conn->Open();
    return conn;
}

User^ FBAController::DBController::ValidateUser(String^ username, String^ password){
    FBAModel::User^ user = nullptr;
    /* Paso 1: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* Paso 2: Se prepara la sentencia */
    SqlCommand^ comm = gcnew SqlCommand();
    comm->Connection = conn;
    comm->CommandText = "SELECT * FROM USER_FBA WHERE nickname='" + username +
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
        for each (User::Rank f in Enum::GetValues(User::Rank::Captain.GetType())) {
            if (f.ToString() == safe_cast<String^>(dr["rank"])) {
                user->rank = f;
            }
        }
        for each (User::Avatar f in Enum::GetValues(User::Avatar::Avatar1.GetType())) {
            if (f.ToString() == safe_cast<String^>(dr["avatar"])) {
                user->avatar = f;
            }
        }
        user->experience = (int)dr["experience"];
        user->emerald = (int)dr["emerald"];
        user->level = (int)dr["level"];
    }

    /* Paso 5: Se cierra los objetos de conexión!!!!!!!!!! */
    if (dr != nullptr) dr->Close();
    if (conn != nullptr) conn->Close();

    return user;
}

void FBAController::DBController::AddUser(User^ user){
    // Paso 1: Se obtiene la conexión
    SqlConnection^ conn = GetConnection();

    // Paso 2:  Se prepara la sentencia
    SqlCommand^ comm;
    String^ strCmd;
    strCmd = "dbo.usp_AddUser";
    comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@vnickname", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vpassword", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vname", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vlastNameFath", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vlastNameMoth", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vbirthday", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vemail", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vrank", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vavatar", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@iexperience", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iemerald", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@ilevel", System::Data::SqlDbType::Int);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@iid", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();

    comm->Parameters["@vnickname"]->Value = user->nickname;
    comm->Parameters["@vpassword"]->Value = user->password;
    comm->Parameters["@vname"]->Value = user->name;
    comm->Parameters["@vlastNameFath"]->Value = user->lastNameFath;
    comm->Parameters["@vlastNameMoth"]->Value = user->lastNameMoth;
    comm->Parameters["@vbirthday"]->Value = user->birthday;
    comm->Parameters["@vemail"]->Value = user->email;
    comm->Parameters["@vrank"]->Value = user->rank;
    comm->Parameters["@vavatar"]->Value = user->avatar;
    comm->Parameters["@iexperience"]->Value = user->experience;
    comm->Parameters["@iemerald"]->Value = user->emerald;
    comm->Parameters["@ilevel"]->Value = user->level;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Si se quiere procesar la salida.
    int output_id = Convert::ToInt32(comm->Parameters["@iid"]->Value);

    //Paso 5: Se cierra la conexión
    conn->Close();
    user->id = output_id;
    user->password = nullptr;
}

void FBAController::DBController::UpdateUser(User^ user){
    // Paso 1: Se obtiene la conexión
    SqlConnection^ conn = GetConnection();

    // Paso 2:  Se prepara la sentencia
    SqlCommand^ comm;
    String^ strCmd;
    strCmd = "dbo.usp_UpdateUser";
    comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@vnickname", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vname", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vlastNameFath", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vlastNameMoth", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vbirthday", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vemail", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vrank", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vavatar", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@iexperience", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iemerald", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@ilevel", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);

    comm->Prepare();

    comm->Parameters["@vnickname"]->Value = user->nickname;
    comm->Parameters["@vname"]->Value = user->name;
    comm->Parameters["@vlastNameFath"]->Value = user->lastNameFath;
    comm->Parameters["@vlastNameMoth"]->Value = user->lastNameMoth;
    comm->Parameters["@vbirthday"]->Value = user->birthday;
    comm->Parameters["@vemail"]->Value = user->email;
    comm->Parameters["@vrank"]->Value = user->rank;
    comm->Parameters["@vavatar"]->Value = user->avatar;
    comm->Parameters["@iexperience"]->Value = user->experience;
    comm->Parameters["@iemerald"]->Value = user->emerald;
    comm->Parameters["@ilevel"]->Value = user->level;
    comm->Parameters["@iid"]->Value = user->id;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Se cierra la conexión
    conn->Close();
}

void FBAController::DBController::DeleteUser(int userID){

}

List<User^>^ FBAController::DBController::QueryAllUser(){
    return nullptr;
    //throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

User^ FBAController::DBController::QueryUserByID(){
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

void FBAController::DBController::AddSurvival(Survival^ survival) {
    // Paso 1: Se obtiene la conexión
    SqlConnection^ conn = GetConnection();

    // Paso 2:  Se prepara la sentencia
    SqlCommand^ comm;
    String^ strCmd;
    strCmd = "dbo.usp_AddSurvival";
    comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@iid_User", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iunspentGold", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iunitsDeployed", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@iunitsDefeated", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@vdate", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@vrank", System::Data::SqlDbType::VarChar, 100);
    comm->Parameters->Add("@itimeMax", System::Data::SqlDbType::Int);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@iid", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();

    comm->Parameters["@iid_User"]->Value = survival->user->id;
    comm->Parameters["@iunspentGold"]->Value = survival->unspentGold;
    comm->Parameters["@iunitsDeployed"]->Value = survival->unitsDeployed;
    comm->Parameters["@iunitsDefeated"]->Value = survival->unitsDefeated;
    comm->Parameters["@vdate"]->Value =survival->date;
    comm->Parameters["@vrank"]->Value = survival->rank;
    comm->Parameters["@itimeMax"]->Value = survival->timeMax;

    //Paso 3: Se ejecuta la sentencia
    comm->ExecuteNonQuery();

    //Paso 4: Si se quiere procesar la salida.
    int output_id = Convert::ToInt32(comm->Parameters["@iid"]->Value);

    //Paso 5: Se cierra la conexión
    conn->Close();
    survival->id = output_id;
}

void FBAController::DBController::UpdateSurvival(Survival^)
{
    throw gcnew System::NotImplementedException();
}

void FBAController::DBController::DeleteSurvival(int)
{
    throw gcnew System::NotImplementedException();
}

List<Survival^>^ FBAController::DBController::QueryAllSurvival() {
    /* 1er paso: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* 2do paso: Se prepara la sentencia */
    SqlCommand^ comm;

    comm = gcnew SqlCommand("usp_QueryAllSurvival", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Prepare();

    /* 3er paso: Se ejecuta la sentencia */
    SqlDataReader^ reader = comm->ExecuteReader();

    /* 4to paso: Se procesan los resultados */
    List<Survival^>^ list = gcnew List<Survival^>;
    while (reader->Read()) {
        User^ user = gcnew User();
        Survival^ s = gcnew Survival();
        s->user = user;
        s->id = Int32::Parse(reader["id_Survival"]->ToString());
        s->unspentGold = Int32::Parse(reader["unspentGold"]->ToString());
        s->unitsDefeated = Int32::Parse(reader["unitsDefeated"]->ToString());
        s->unitsDeployed = Int32::Parse(reader["unitsDeployed"]->ToString());
        s->date = reader["date"]->ToString();
        for each (User::Rank f in Enum::GetValues(User::Rank::Captain.GetType())) {
            if (f.ToString() == reader["rank_Survival"]->ToString()) {
                s->rank = f;
            }
        }
        s->timeMax = Int32::Parse(reader["timeMax"]->ToString());
        user->id = Int32::Parse(reader["id"]->ToString());
        user->nickname = reader["nickname"]->ToString();
        user->name = reader["name"]->ToString();
        user->lastNameFath= reader["lastNameFath"]->ToString();
        user->lastNameMoth = reader["lastNameMoth"]->ToString();
        for each (User::Rank f in Enum::GetValues(User::Rank::Captain.GetType())) {
            if (f.ToString() == reader["rank"]->ToString()) {
                s->rank = f;
            }
        }
        for each (User::Avatar f in Enum::GetValues(User::Avatar::Avatar1.GetType())) {
            if (f.ToString() == reader["avatar"]->ToString()) {
                user->avatar = f;
            }
        }
        user->experience = Int32::Parse(reader["experience"]->ToString());
        user->emerald = Int32::Parse(reader["emerald"]->ToString());
        user->level = Int32::Parse(reader["level"]->ToString());
        list->Add(s);
    }

    /* IMPORTANTE 5to paso: Cerramos la conexión con la BD */
    conn->Close();
    return list;
}

List<Survival^>^ FBAController::DBController::QueryAllSurvivalByUser(User^ user)
{
    throw gcnew System::NotImplementedException();
    // TODO: insert return statement here
}

int FBAController::DBController::QuerySurvivalByID(int Id)
{
    int a = 0;
    FBAModel::User^ user = nullptr;
    /* Paso 1: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* Paso 2: Se prepara la sentencia */
    SqlCommand^ comm = gcnew SqlCommand();
    comm->Connection = conn;
    comm->CommandText = "select Count(b.id) as cuenta from USER_FBA as a inner join SURVIVAL as b on a.id=b.id_User where a.id = " + Id + " Group by a.id";



    /* Paso 3: Se ejecuta la sentencia */
    SqlDataReader^ dr = comm->ExecuteReader();

    /* Paso 4: Se procesan los resultados */
    if (dr->Read()) {
        a = (int)dr["cuenta"];

    }

    /* Paso 5: Se cierra los objetos de conexión!!!!!!!!!! */
    if (dr != nullptr) dr->Close();
    if (conn != nullptr) conn->Close();

    return a;
}

int FBAController::DBController::QueryTimeSurvivalByID(int Id)
{
    int a = 0;
    FBAModel::User^ user = nullptr;
    /* Paso 1: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* Paso 2: Se prepara la sentencia */
    SqlCommand^ comm = gcnew SqlCommand();
    comm->Connection = conn;
    comm->CommandText = "select Max(b.timeMax) as timeMax from USER_FBA as a inner join SURVIVAL as b on a.id=b.id_User where a.id = " + Id + " Group by a.id";



    /* Paso 3: Se ejecuta la sentencia */
    SqlDataReader^ dr = comm->ExecuteReader();

    /* Paso 4: Se procesan los resultados */
    if (dr->Read()) {
        a = (int)dr["timeMax"];

    }

    /* Paso 5: Se cierra los objetos de conexión!!!!!!!!!! */
    if (dr != nullptr) dr->Close();
    if (conn != nullptr) conn->Close();

    return a;
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