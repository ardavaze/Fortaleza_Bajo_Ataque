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
	public ref class SurvivalForm : public System::Windows::Forms::Form
	{
	public:
		SurvivalForm(void)
		{
			InitializeComponent();
			user_rank_load();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SurvivalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:void user_rank_load();
	
	private: System::Windows::Forms::Button^ btn_playSurvival;

	private: System::Windows::Forms::Label^ label_title;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_rank;


	private: System::Windows::Forms::PictureBox^ pictureBox_rank;
	private: System::Windows::Forms::TextBox^ textBox_unlock_units;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;






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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_rank = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox_rank = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_unlock_units = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rank))->BeginInit();
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
			this->btn_playSurvival->Click += gcnew System::EventHandler(this, &SurvivalForm::btn_playSurvival_Click);
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(864, 121);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 486);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(48, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(672, 58);
			this->label1->TabIndex = 10;
			this->label1->Text = L"INFORMACIÓN NIVEL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(83, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 578);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Rango:\r\n\r\nUnidades \r\nDesbloqueadas:\r\n\r\nUnidades \r\nEnemigas:\r\n\r\nMejoras:\r\n\r\n\r\n\r\n\r\n"
				L"Tiempo \r\nMáximo:\r\n\r\nIntentos:\r\n";
			// 
			// textBox_rank
			// 
			this->textBox_rank->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_rank->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_rank->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_rank->ForeColor = System::Drawing::Color::White;
			this->textBox_rank->Location = System::Drawing::Point(474, 222);
			this->textBox_rank->Name = L"textBox_rank";
			this->textBox_rank->Size = System::Drawing::Size(155, 34);
			this->textBox_rank->TabIndex = 12;
			this->textBox_rank->Text = L"Coronel";
			// 
			// pictureBox_rank
			// 
			this->pictureBox_rank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rank.Image")));
			this->pictureBox_rank->Location = System::Drawing::Point(635, 222);
			this->pictureBox_rank->Name = L"pictureBox_rank";
			this->pictureBox_rank->Size = System::Drawing::Size(52, 49);
			this->pictureBox_rank->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_rank->TabIndex = 13;
			this->pictureBox_rank->TabStop = false;
			// 
			// textBox_unlock_units
			// 
			this->textBox_unlock_units->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_unlock_units->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_unlock_units->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_unlock_units->ForeColor = System::Drawing::Color::White;
			this->textBox_unlock_units->Location = System::Drawing::Point(474, 291);
			this->textBox_unlock_units->Multiline = true;
			this->textBox_unlock_units->Name = L"textBox_unlock_units";
			this->textBox_unlock_units->Size = System::Drawing::Size(345, 81);
			this->textBox_unlock_units->TabIndex = 14;
			this->textBox_unlock_units->Text = L"Soldado, Arquero, Curardor";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(474, 394);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(345, 81);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"Duende, Golem, ELemental";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(474, 481);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(358, 256);
			this->textBox4->TabIndex = 16;
			this->textBox4->Text = L"Ataque I, Ataque II. Defensa I, Pillaje I, Velocidad I\r\n";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(474, 669);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(165, 55);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"3:00min";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(474, 765);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(140, 41);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"12";
			// 
			// Survival
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1552, 1023);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox_unlock_units);
			this->Controls->Add(this->pictureBox_rank);
			this->Controls->Add(this->textBox_rank);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->btn_playSurvival);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Survival";
			this->Text = L"Survival";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rank))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btn_playSurvival_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_close_Click_1(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}
