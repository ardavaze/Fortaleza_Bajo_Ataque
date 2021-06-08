#include "LoginForm.h"
#include "Menu_principal.h"
System::Void FBAView::LoginForm::btnAccess_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txbUser->Text->Trim() !="USUARIO") && (txbUser->Text->Trim() != "") && (txbPassword->Text->Trim() !="CONTRASE�A") && (txbPassword->Text->Trim()!="")) {
		Menu_principal::user = FBA_Controller::ValidateUser(txbUser->Text, txbPassword->Text);
		if (Menu_principal::user == nullptr) {
			MessageBox::Show("Usuario y/o contrase�a incorrectos");
			txbPassword->Text="CONTRASE�A";
			txbPassword->UseSystemPasswordChar = false;
			txbPassword->ForeColor = System::Drawing::Color::DimGray;
			txbUser->Focus();
		}
		else {
			this->Hide();
		}
	}
	else MessageBox::Show("Usuario y/o contrase�a en blanco");
}

System::Void FBAView::LoginForm::LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e){
	if (Menu_principal::user == nullptr) {
		Application::Exit();
	}
}
