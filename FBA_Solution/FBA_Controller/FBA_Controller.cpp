#include "pch.h"
#include "FBA_Controller.h"
#include "DBController.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;

void FBAController::FBA_Controller::InicializeController(){
	DBController::InicializeController();
}

void FBAController::FBA_Controller::SaveUsers()
{
	DBController::SaveUsers();
}

void FBAController::FBA_Controller::LoadUsers()
{
	DBController::LoadUsers();
}

User^ FBAController::FBA_Controller::ValidateUser(String^ username, String^ password){
	return DBController::ValidateUser(username, password);
}

void FBAController::FBA_Controller::AddUser(User^ user){
	DBController::AddUser(user);
}

void FBAController::FBA_Controller::UpdateUser(User^ user){
	DBController::UpdateUser(user);
}

void FBAController::FBA_Controller::DeleteUser(User^ user){
	DBController::DeleteUser( user);
}

List<User^>^ FBAController::FBA_Controller::QueryAllUser(){
	return DBController::QueryAllUser();
}

User^ FBAController::FBA_Controller::QueryUserByID(){
	return DBController::QueryUserByID();
}
