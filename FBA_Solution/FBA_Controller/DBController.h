#pragma once
#include "ConnectionParam.h"

using namespace FBAModel;
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

namespace FBAController {
	public ref class DBController{
	private:
		static ConnectionParam^ connParam;
		static SqlConnection^ GetConnection();
	public:
		static void InicializeController();

		/*User*/
		static User^ ValidateUser(String^ username, String^ password);
		static void AddUser(User^);
		static void UpdateUser(User^);
		static void DeleteUser(int);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserByID();

		/*Survival*/
		static void AddSurvival(Survival^);
		static void UpdateSurvival(Survival^);
		static void DeleteSurvival(int);
		static List<Survival^>^ QueryAllSurvival();
		static List<Survival^>^ QueryAllSurvivalByUser(User^ );

		//antiguo
		/*static void SaveUsers();
		static void LoadUsers();*/
	};
}


