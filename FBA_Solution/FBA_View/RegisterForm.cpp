#include "RegisterForm.h"
#include "menu_principal.h"

System::Void FBAView::RegisterForm::btnRegister_Click(System::Object^ sender, System::EventArgs^ e){
	if ((txbBirthday->Text->Trim() != "") && (txbemail->Text->Trim() != "") && (txbLastNameFath->Text->Trim() != "") &&
		(txbLastNameMoth->Text->Trim() != "") && (txbName->Text->Trim() != "") && (txbnickname->Text->Trim() != "") &&
		(txbPassword->Text->Trim() != "")) {
		User^ user = gcnew User(txbnickname->Text, txbLastNameFath->Text, txbLastNameMoth->Text, txbName->Text,
								txbBirthday->Text, txbemail->Text, txbPassword->Text);
		user->avatar = User::Avatar::Avatar1;
		user->rank = User::Rank::Captain;
		user->level = 1;
		user->experience = 0;
		user->emerald = 100;
		try {
			FBAController::FBA_Controller::AddUser(user);
		}
		catch (...) {
			MessageBox::Show("Parece que no tiene conexion a internet, hay problemas con el servidor del juego o ha elegido un nickname ya existente, porfavor intentelo en unos minutos");
				
			return;
		}
		Menu_principal::user = user;
		MessageBox::Show("Cuenta creada satisfactoriamente.");
		this->Hide();
		close = 0;
	}
	else MessageBox::Show("Debe rellenar todos los campos.");
}
