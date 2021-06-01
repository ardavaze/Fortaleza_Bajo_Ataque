#include "LoginForm.h"
#include "menu_principal.h"
System::Void FBAView::LoginForm::btnAccess_Click(System::Object^ sender, System::EventArgs^ e)
{
	menu_principal::user = gcnew FBAModel::User();
}

System::Void FBAView::LoginForm::LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	if (menu_principal::user == nullptr) {
		Application::Exit();
	}
}
