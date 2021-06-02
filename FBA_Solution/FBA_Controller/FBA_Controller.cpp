#include "pch.h"
#include "FBA_Controller.h"
#include "DBController.h"
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;

void FBA_Controller::FBAController::InicializeController(){
	DBController::InicializeController();
}

void FBA_Controller::FBAController::SaveUsers()
{
	DBController::SaveUsers();
}

void FBA_Controller::FBAController::LoadUsers()
{
	DBController::LoadUsers();
}

User^ FBA_Controller::FBAController::ValidateUser(String^ username, String^ password){
	return DBController::ValidateUser(username, password);
}

void FBA_Controller::FBAController::AddUser(User^ user){
	DBController::AddUser(user);
}

void FBA_Controller::FBAController::UpdateUser(User^ user){
	DBController::UpdateUser(user);
}

void FBA_Controller::FBAController::DeleteUser(User^ user){
	DBController::DeleteUser( user);
}

List<User^>^ FBA_Controller::FBAController::QueryAllUser(){
	return DBController::QueryAllUser();
}

User^ FBA_Controller::FBAController::QueryUserByID(){
	return DBController::QueryUserByID();
}
