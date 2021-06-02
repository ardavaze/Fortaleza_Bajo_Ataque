#include "LoginForm.h"
#include "Menu_principal.h"
System::Void FBAView::LoginForm::btnAccess_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txbUser->Text->Trim() !="USUARIO") && (txbUser->Text->Trim() != "") && (txbPassword->Text->Trim() !="CONTRASEŅA") && (txbPassword->Text->Trim()!="")) {
		Menu_principal::user = FBAController::ValidateUser(txbUser->Text, txbPassword->Text);
		if (Menu_principal::user == nullptr) {
			MessageBox::Show("Usuario y/o contraseņa incorrectos");
			txbPassword->Text="CONTRASEŅA";
			txbPassword->UseSystemPasswordChar = false;
			txbPassword->ForeColor = System::Drawing::Color::DimGray;
			txbUser->Focus();
		}
		else {
			this->Hide();
		}
	}
	else MessageBox::Show("Usuario y/o contraseņa en blanco");
}

System::Void FBAView::LoginForm::LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e){
	if (Menu_principal::user == nullptr) {
		Application::Exit();
	}
}
