#pragma once
#include"SurvivalRender.h"

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Survival
	/// </summary>
	public ref class Survival : public System::Windows::Forms::Form
	{
	public:
		Survival(void)
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
		~Survival()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_playSurvival;
	private: System::Windows::Forms::Button^ btn_close;
	protected:


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
			this->btn_playSurvival = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_playSurvival
			// 
			this->btn_playSurvival->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_playSurvival->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_playSurvival->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playSurvival->ForeColor = System::Drawing::Color::Black;
			this->btn_playSurvival->Location = System::Drawing::Point(989, 862);
			this->btn_playSurvival->Name = L"btn_playSurvival";
			this->btn_playSurvival->Size = System::Drawing::Size(442, 91);
			this->btn_playSurvival->TabIndex = 1;
			this->btn_playSurvival->Text = L"JUGAR";
			this->btn_playSurvival->UseVisualStyleBackColor = false;
			this->btn_playSurvival->Click += gcnew System::EventHandler(this, &Survival::btn_playSurvival_Click);
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(90, 72);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(88, 78);
			this->btn_close->TabIndex = 2;
			this->btn_close->Text = L"<-";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &Survival::btn_close_Click);
			// 
			// Survival
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(2250, 1536);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_playSurvival);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Survival";
			this->Text = L"Survival";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_playSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
		SurvivalRender Juego;
		Juego.Run();
	}
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
