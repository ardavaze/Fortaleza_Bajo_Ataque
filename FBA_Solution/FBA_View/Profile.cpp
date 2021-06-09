#include "Profile.h"
#include "menu_principal.h"

void FBAView::Profile::User_data_load()
{
	textBox_username->Text = "" + Menu_principal::user->nickname;
	textBox_name->Text = "" + Menu_principal::user->name;
	textBox_LastName_Mother->Text = "" + Menu_principal::user->lastNameMoth;
	textBox_LastName_Father->Text = "" + Menu_principal::user->lastNameFath;
	textBox_Birthday->Text = "" + Menu_principal::user->birthday;
	textBox_email->Text = "" + Menu_principal::user->email;
	textBox_emerald->Text = "" + Menu_principal::user->Emerald;
	textBox_skill_points->Text = "" + Menu_principal::user->Skill_point;
	textBox_level->Text = "" + Menu_principal::user->Level_max;
	textBox_max_time->Text = "" + Menu_principal::user->Time_max;
}

System::Void FBAView::Profile::btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show(
		"¿Está seguro de eliminar su cuenta?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		FBA_Controller::DeleteUser(Menu_principal::user);
		Application::Exit();
	}
}
