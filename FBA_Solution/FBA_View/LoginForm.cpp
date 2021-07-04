#include "LoginForm.h"
#include "Menu_principal.h"
System::Void FBAView::LoginForm::btnAccess_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txbUser->Text->Trim() !="USUARIO") && (txbUser->Text->Trim() != "") && (txbPassword->Text->Trim() !="CONTRASEÑA") && (txbPassword->Text->Trim()!="")) {
		try {
			Menu_principal::user = FBA_Controller::ValidateUser(txbUser->Text, txbPassword->Text);
		}
		catch (...) {
			MessageBox::Show("Parece que no tiene conexion a internet o hay problemas con el servidor del juego, porfavor intentelo en unos minutos");
		}
		if (Menu_principal::user == nullptr) {
			MessageBox::Show("Usuario y/o contraseña incorrectos");
			txbPassword->Text="CONTRASEÑA";
			txbPassword->UseSystemPasswordChar = false;
			txbPassword->ForeColor = System::Drawing::Color::DimGray;
			txbUser->Focus();
		}
		else {
			MessageBox::Show("Bienvenido "+ Menu_principal::user->nickname);
			this->Hide();
		}
	}
	else MessageBox::Show("Usuario y/o contraseña en blanco");
}

System::Void FBAView::LoginForm::LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e){
	if (Menu_principal::user == nullptr) {
		Application::Exit();
	}
}
