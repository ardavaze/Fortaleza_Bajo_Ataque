#include "SurvivalForm.h"
#include "menu_principal.h"
void FBAView::SurvivalForm::user_rank_load()
{
	/*int level = Menu_principal::user->Level_max;
	if (0 < level < 5) {



	}
	else if(4 < level < 9){
	}



	else if (8 < level < 12) {





	}
	else if (13 < level < 16) {



	}*/
}

System::Void FBAView::SurvivalForm::btn_playSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
	SurvivalRender^ juego = gcnew SurvivalRender;
	juego->owner = this->Owner;
	juego->Run();
	FBAController::FBA_Controller::UpdateUser(Menu_principal::user);
}
