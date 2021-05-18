#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu_principal
	/// </summary>
	public ref class menu_principal : public System::Windows::Forms::Form
	{
	public:
		menu_principal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menu_principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_survival;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_survival = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_survival
			// 
			this->btn_survival->Location = System::Drawing::Point(288, 226);
			this->btn_survival->Name = L"btn_survival";
			this->btn_survival->Size = System::Drawing::Size(146, 47);
			this->btn_survival->TabIndex = 1;
			this->btn_survival->Text = L"Survival";
			this->btn_survival->UseVisualStyleBackColor = true;
			this->btn_survival->Click += gcnew System::EventHandler(this, &menu_principal::btn_survival_Click);
			// 
			// menu_principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 482);
			this->Controls->Add(this->btn_survival);
			this->IsMdiContainer = true;
			this->Name = L"menu_principal";
			this->Text = L"menu_principal";
			this->Load += gcnew System::EventHandler(this, &menu_principal::menu_principal_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menu_principal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_survival_Click(System::Object^ sender, System::EventArgs^ e) {
		//FBAView::Game_loop::run;
	}
	};
}
