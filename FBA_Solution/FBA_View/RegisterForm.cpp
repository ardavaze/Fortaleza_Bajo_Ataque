#include "RegisterForm.h"
#include "menu_principal.h"

System::Void FBAView::RegisterForm::btnRegister_Click(System::Object^ sender, System::EventArgs^ e){
	if ((txbBirthday->Text->Trim() != "") && (txbemail->Text->Trim() != "") && (txbLastNameFath->Text->Trim() != "") &&
		(txbLastNameMoth->Text->Trim() != "") && (txbName->Text->Trim() != "") && (txbnickname->Text->Trim() != "") &&
		(txbPassword->Text->Trim() != "")) {
		User^ user = gcnew User(txbnickname->Text, txbLastNameFath->Text, txbLastNameMoth->Text, txbName->Text,
								txbBirthday->Text, txbemail->Text, txbPassword->Text);
		FBAController::FBA_Controller::AddUser(user);
		Menu_principal::user = user;
		MessageBox::Show("Cuenta creada satisfactoriamente.");
		this->Hide();
		close = 0;
	}
	else MessageBox::Show("Debe rellenar todos los campos.");
}
