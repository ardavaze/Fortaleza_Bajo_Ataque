#include "Profile.h"
#include "menu_principal.h"

void FBAView::Profile::User_data_load(){
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
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
	pictureBox_avatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(Menu_principal::user->avatar.ToString())));
}

void FBAView::Profile::Write_rank()
{
	int level = Menu_principal::user->level;
	if (level < 5)
		textBox_rank->Text = "CAPITÁN";
	else
		if (4 <level&& level < 9)
		textBox_rank->Text = "CORONEL";
	else
		if (8 < level && level < 13)
		textBox_rank->Text = "GENERAL";
	else
		if (12 < level)
		textBox_rank->Text = "MARISCAL";
	
}

System::Void FBAView::Profile::btn_delete_Click(System::Object^ sender, System::EventArgs^ e){
	if (MessageBox::Show(
		"¿Está seguro de eliminar su cuenta?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		FBA_Controller::DeleteUser(Menu_principal::user->id);
		Application::Exit();
	}
}

System::Void FBAView::Profile::btn_OK_Click(System::Object^ sender, System::EventArgs^ e)
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
