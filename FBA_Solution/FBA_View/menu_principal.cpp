#include "menu_principal.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(/*array<String^>^ args*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//LPOOInduction is your project name
	FBAView::menu_principal form;
	Application::Run(% form);
}


