#include "Menu_principal.h"
#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(/*array<String^>^ args*/) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FBAView::Menu_principal form;
	Application::Run(% form);
}
#include "menu_principal.h"

	
	

