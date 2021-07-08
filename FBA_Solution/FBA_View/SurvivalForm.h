#pragma once
#include"SurvivalRender.h"

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAModel;

	/// <summary>
	/// Summary for Survival
	/// </summary>
	public ref class SurvivalForm : public System::Windows::Forms::Form
	{
	public:
		User^ user;
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
	private: System::Windows::Forms::TextBox^ txtTimeMax;
	private: System::Windows::Forms::TextBox^ txtIntentos;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SurvivalForm::typeid));
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
			this->txtTimeMax = (gcnew System::Windows::Forms::TextBox());
			this->txtIntentos = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_playSurvival->Location = System::Drawing::Point(703, 579);
			this->btn_playSurvival->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_playSurvival->Name = L"btn_playSurvival";
			this->btn_playSurvival->Size = System::Drawing::Size(295, 59);
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
			this->label_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(600, 67);
			this->label_title->TabIndex = 6;
			this->label_title->Text = L"SUPERVIVENCIA";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(576, 79);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 316);
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
			this->label1->Location = System::Drawing::Point(32, 79);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"INFORMACIÓN NIVEL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(55, 146);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 391);
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
			this->textBox_rank->Location = System::Drawing::Point(316, 144);
			this->textBox_rank->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_rank->Name = L"textBox_rank";
			this->textBox_rank->Size = System::Drawing::Size(103, 23);
			this->textBox_rank->TabIndex = 12;
			this->textBox_rank->Text = L"Coronel";
			// 
			// pictureBox_rank
			// 
			this->pictureBox_rank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rank.Image")));
			this->pictureBox_rank->Location = System::Drawing::Point(423, 144);
			this->pictureBox_rank->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox_rank->Name = L"pictureBox_rank";
			this->pictureBox_rank->Size = System::Drawing::Size(35, 32);
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
			this->textBox_unlock_units->Location = System::Drawing::Point(316, 189);
			this->textBox_unlock_units->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_unlock_units->Multiline = true;
			this->textBox_unlock_units->Name = L"textBox_unlock_units";
			this->textBox_unlock_units->Size = System::Drawing::Size(230, 53);
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
			this->textBox3->Location = System::Drawing::Point(316, 256);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(230, 53);
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
			this->textBox4->Location = System::Drawing::Point(316, 313);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(239, 166);
			this->textBox4->TabIndex = 16;
			this->textBox4->Text = L"Ataque I, Ataque II. Defensa I, Pillaje I, Velocidad I\r\n";
			// 
			// txtTimeMax
			// 
			this->txtTimeMax->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtTimeMax->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtTimeMax->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTimeMax->ForeColor = System::Drawing::Color::White;
			this->txtTimeMax->Location = System::Drawing::Point(316, 435);
			this->txtTimeMax->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtTimeMax->Multiline = true;
			this->txtTimeMax->Name = L"txtTimeMax";
			this->txtTimeMax->Size = System::Drawing::Size(110, 36);
			this->txtTimeMax->TabIndex = 17;
			this->txtTimeMax->Text = L"3:00min";
			// 
			// txtIntentos
			// 
			this->txtIntentos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtIntentos->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIntentos->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIntentos->ForeColor = System::Drawing::Color::White;
			this->txtIntentos->Location = System::Drawing::Point(316, 497);
			this->txtIntentos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtIntentos->Multiline = true;
			this->txtIntentos->Name = L"txtIntentos";
			this->txtIntentos->Size = System::Drawing::Size(93, 27);
			this->txtIntentos->TabIndex = 18;
			this->txtIntentos->Text = L"12";
			// 
			// SurvivalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1035, 665);
			this->Controls->Add(this->txtIntentos);
			this->Controls->Add(this->txtTimeMax);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SurvivalForm";
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

		private: System::Void SurvivalForm_Load(System::Object^ sender, System::EventArgs^ e) {

			if (user->rank == User::Rank::Captain)
				this->textBox_rank->Text = "Capitán";
			if (user->rank == User::Rank::Colonel)
				this->textBox_rank->Text = "Coronel";
			if (user->rank == User::Rank::General)
				this->textBox_rank->Text = "General";
			if (user->rank == User::Rank::Marshal)
				this->textBox_rank->Text = "Mariscal";

			this->txtIntentos->Text = "" + FBAController::FBA_Controller::QuerySurvivalByID(user->id);

			int a = FBAController::FBA_Controller::QueryTimeSurvivalByID(user->id);
			int seg = a % 60;
			int min = a / 60;
			this->txtTimeMax->Text = "" + (min < 10 ? "0" : "") + min + ":" + ((seg < 10 || seg == 0) ? "0" : "") + seg + " seg.";

		}

	};
}
