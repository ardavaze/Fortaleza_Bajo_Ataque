#include "ProfileForm.h"
#include "menu_principal.h"

void FBAView::ProfileForm::User_data_load(){
	textBox_username->Text = "" + Menu_principal::user->nickname;
	textBox_name->Text = "" + Menu_principal::user->name;
	textBox_LastName_Mother->Text = "" + Menu_principal::user->lastNameMoth;
	textBox_LastName_Father->Text = "" + Menu_principal::user->lastNameFath;
	textBox_Birthday->Text = "" + Menu_principal::user->birthday;
	textBox_email->Text = "" + Menu_principal::user->email;
	textBox_emerald->Text = "" + Menu_principal::user->emerald;
	textBox_skill_points->Text = "" + Menu_principal::user->experience;
	textBox_level->Text = "" + Menu_principal::user->level;
	//textBox_max_time->Text = "" + Menu_principal::user->survival->timeMax;
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
	pictureBox_avatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(Menu_principal::user->avatar.ToString())));
}

void FBAView::ProfileForm::Write_rank()
{
	if (Menu_principal::user->rank == User::Rank::Captain)
		this->textBox_rank->Text = "Capitán";
	if (Menu_principal::user->rank == User::Rank::Colonel)
		this->textBox_rank->Text = "Coronel";
	if (Menu_principal::user->rank == User::Rank::General)
		this->textBox_rank->Text = "General";
	if (Menu_principal::user->rank == User::Rank::Marshal)
		this->textBox_rank->Text = "Mariscal";
	
}

System::Void FBAView::ProfileForm::btn_delete_Click(System::Object^ sender, System::EventArgs^ e){
	if (MessageBox::Show(
		"¿Está seguro de eliminar su cuenta?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		FBA_Controller::DeleteUser(Menu_principal::user->id);
		Application::Exit();
	}
}

System::Void FBAView::ProfileForm::btn_OK_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox_username->Text->Trim() == "") {
		MessageBox::Show("El nombre de usuario no debe estar vacío.");
		return;
	}
	if (textBox_name->Text->Trim() == "") {
		MessageBox::Show("El nombre no debe estar vacío.");
		return;
	}
	if (textBox_LastName_Father->Text->Trim() == "") {
		MessageBox::Show("El apellido paterno no debe estar vacío.");
		return;
	}
	if (textBox_LastName_Mother->Text->Trim() == "") {
		MessageBox::Show("El apellido materno no debe estar vacío.");
		return;
	}
	if (textBox_Birthday->Text->Trim() == "") {
		MessageBox::Show("La fecha de cumpleaños no debe estar vacío.");
		return;
	}
	if (textBox_email->Text->Trim() == "") {
		MessageBox::Show("El correo eléctronico no debe estar vacío.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de actualizar  la información de su cuenta?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		User^ u = gcnew User();
		try {
			u = Menu_principal::user;
			u->nickname = "" + textBox_username->Text;
			u->name = "" + textBox_name->Text;
			u->lastNameFath = "" + textBox_LastName_Mother->Text;
			u->lastNameMoth = "" + textBox_LastName_Father->Text;
			u->birthday = "" + textBox_Birthday->Text;
			u->avatar = this->avatar;
			u->email = "" + textBox_email->Text;
			u->emerald = Int32::Parse(textBox_emerald->Text);
			u->experience = Int32::Parse(textBox_skill_points->Text);
			FBA_Controller::UpdateUser(Menu_principal::user);
			Hide_button();
			ReadOnly_true();
			btn_update->Visible = true;
			((Menu_principal^)this->Owner)->User_data();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al grabar.");
			return;
		}
	}
}
