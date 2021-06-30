#pragma once
using namespace SFML::Graphics;
using namespace SFML::Window;
using namespace SFML::System;
using namespace System;
using namespace System::Collections::Generic;
using namespace FBAModel;
namespace FBAController {
	public ref class FBA_Controller {
	public:
		static void InicializeController();
		/*User*/
		//static void SaveUsers();
		//static void LoadUsers();
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
		static List<Survival^>^ QueryAllSurvivalByUser(User^);
	};
}
