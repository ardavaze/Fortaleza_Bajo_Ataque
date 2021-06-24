#include "Survival.h"
#include "menu_principal.h"
void FBAView::Survival::user_rank_load()
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

System::Void FBAView::Survival::btn_playSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
	((Menu_principal^)this->Owner)->sound_menu->Stop();
	SurvivalRender^ juego = gcnew SurvivalRender;
	juego->owner = this->Owner;
	juego->Run();
	((Menu_principal^)this->Owner)->sound_menu->PlayLooping();
	FBAController::FBA_Controller::UpdateUser(Menu_principal::user);
}
