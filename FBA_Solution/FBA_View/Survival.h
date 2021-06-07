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

	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Panel^ panel_info;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Survival::typeid));
			this->btn_playSurvival = (gcnew System::Windows::Forms::Button());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->panel_info = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_info->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_playSurvival
			// 
			this->btn_playSurvival->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_playSurvival->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_playSurvival->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playSurvival->ForeColor = System::Drawing::Color::Black;
			this->btn_playSurvival->Location = System::Drawing::Point(1055, 891);
			this->btn_playSurvival->Name = L"btn_playSurvival";
			this->btn_playSurvival->Size = System::Drawing::Size(442, 91);
			this->btn_playSurvival->TabIndex = 1;
			this->btn_playSurvival->Text = L"JUGAR";
			this->btn_playSurvival->UseVisualStyleBackColor = false;
			this->btn_playSurvival->Click += gcnew System::EventHandler(this, &Survival::btn_playSurvival_Click);
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title->ForeColor = System::Drawing::Color::White;
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(897, 100);
			this->label_title->TabIndex = 6;
			this->label_title->Text = L"SUPERVIVENCIA";
			// 
			// panel_info
			// 
			this->panel_info->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_info->Controls->Add(this->label1);
			this->panel_info->Location = System::Drawing::Point(46, 196);
			this->panel_info->Name = L"panel_info";
			this->panel_info->Size = System::Drawing::Size(488, 566);
			this->panel_info->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(82, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"información sobre el nivel";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(46, 850);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(828, 132);
			this->panel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(220, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 32);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Datos sobre el nivel";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(588, 196);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(909, 566);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Survival
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1552, 1023);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_info);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->btn_playSurvival);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Survival";
			this->Text = L"Survival";
			this->panel_info->ResumeLayout(false);
			this->panel_info->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_playSurvival_Click(System::Object^ sender, System::EventArgs^ e) {
		SurvivalRender Juego;
		Juego.Run();
	}
	private: System::Void btn_close_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
