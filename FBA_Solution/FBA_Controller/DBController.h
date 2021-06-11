#pragma once
using namespace System::Collections::Generic;
using namespace FBAModel;
using namespace System;

namespace FBAController {
	public ref class DBController{
	private:
		static List<User^>^ user=gcnew List<User^>;

	public:
		static void InicializeController();
		/*User*/
		static void SaveUsers();
		static void LoadUsers();
		static User^ ValidateUser(String^ username, String^ password);
		static void AddUser(User^);
		static void UpdateUser(User^, User^);
		static void DeleteUser(User^);
		static List<User^>^ QueryAllUser();
		static User^ QueryUserByID();
	};
}


