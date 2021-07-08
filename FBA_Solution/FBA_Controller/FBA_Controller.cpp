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

//void FBAController::FBA_Controller::SaveUsers()
//{
//	DBController::SaveUsers();
//}
//
//void FBAController::FBA_Controller::LoadUsers()
//{
//	DBController::LoadUsers();
//}

User^ FBAController::FBA_Controller::ValidateUser(String^ username, String^ password){
	return DBController::ValidateUser(username, password);
}

void FBAController::FBA_Controller::AddUser(User^ user){
	DBController::AddUser(user);
}

void FBAController::FBA_Controller::UpdateUser(User^user){
	DBController::UpdateUser(user);
}

void FBAController::FBA_Controller::DeleteUser(int userID){
	DBController::DeleteUser(userID);
}

List<User^>^ FBAController::FBA_Controller::QueryAllUser(){
	return DBController::QueryAllUser();
}

User^ FBAController::FBA_Controller::QueryUserByID(){
	return DBController::QueryUserByID();
}

void FBAController::FBA_Controller::AddSurvival(Survival^ survival)
{
	DBController::AddSurvival(survival);
}

void FBAController::FBA_Controller::UpdateSurvival(Survival^ survival)
{
	DBController::UpdateSurvival(survival);
}

void FBAController::FBA_Controller::DeleteSurvival(int survivalID)
{
	DBController::DeleteSurvival(survivalID);
}

List<Survival^>^ FBAController::FBA_Controller::QueryAllSurvival()
{
	return DBController::QueryAllSurvival();
}

List<Survival^>^ FBAController::FBA_Controller::QueryAllSurvivalByUser(User^ user)
{
	return DBController::QueryAllSurvivalByUser(user);
}

int FBAController::FBA_Controller::QuerySurvivalByID(int Id)
{
	return DBController::QuerySurvivalByID(Id);
}

int FBAController::FBA_Controller::QueryTimeSurvivalByID(int Id)
{
	return DBController::QueryTimeSurvivalByID(Id);
}
	
