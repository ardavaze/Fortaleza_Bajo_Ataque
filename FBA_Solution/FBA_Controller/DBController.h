#pragma once
#include "ConnectionParam.h"

using namespace FBAModel;
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

namespace FBAController {
	public ref class DBController{
	private:
		static List<User^>^ user=gcnew List<User^>;
		static ConnectionParam^ connParam;
		static SqlConnection^ GetConnection();
	public:
		static void InicializeController();

		/*User*/
		static User^ ValidateUser(String^ username, String^ password);
		static void AddUser(User^);
		static void UpdateUser(User^);
		static void DeleteUser(User^);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserByID();

		//antiguo
		/*static void SaveUsers();
		static void LoadUsers();*/
	};
}


