#pragma once
#include "SurvivalRender.h"
#include "campaign.h"
#include "Survival.h"
#include "LoginForm.h"
#include "Skins.h"
#include "Background.h"
#include "Scoreboard.h"
#include "Credits.h"
#include "Settings.h"
#include "Profile.h"
namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	
	/// <summary>
	/// Summary for Menu_principal
	/// </summary>
	public ref class Menu_principal : public System::Windows::Forms::Form
	{
		public:
			SoundPlayer^ sound_menu = gcnew SoundPlayer("Assets/Audio/menu_music.wav");
			SoundPlayer^ sound_submenu_click = gcnew SoundPlayer("Trigger_click.wav");

	public:
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::TextBox^ textBox_skills_points;

	private: System::Windows::Forms::PictureBox^ pictureBox_rank;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_emerald;


	private: System::Windows::Forms::PictureBox^ pictureBox_profile;
	private: System::Windows::Forms::PictureBox^ pictureBox_frame;



	private: System::Windows::Forms::Label^ label3;


	public:



	public:

	public:

	public:

		   static FBAModel::User^ user;
			Menu_principal(void){
				if (user == nullptr) {
					LoginForm^ login = gcnew LoginForm();
					login->ShowDialog();
				}
				InitializeComponent();
				sound_menu->PlayLooping();
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~Menu_principal()
			{
				if (components)
				{
					delete components;
				}
			}
		private: void Hide_panel() {
			panel_modo->Visible = false;
			panel_tienda->Visible = false;
		}


		private: void Click_panel(Panel^ panel) {

			if (panel->Visible == false) {
				Hide_panel();
				panel->Visible = true;
			}
			else
				panel->Visible = false;
		}
		private: System::Windows::Forms::PictureBox^ background;
		private: System::Windows::Forms::Label^ title;

		private: Form^ active_Form = nullptr;
		private: void open_ChildForm(Form^ childForm) {
	
			if (active_Form != nullptr)
				active_Form->Close();
			active_Form = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = System::Windows::Forms::DockStyle::Fill; 
			panel_childform->Controls->Add(childForm);
			panel_childform->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();

		}
	private: System::Windows::Forms::PictureBox^ pictureBox_logo;



		protected:


		private: System::Windows::Forms::Panel^ panel_lateral;
		private: System::Windows::Forms::Button^ btn_scoreboard;



		private: System::Windows::Forms::Panel^ panel_tienda;
		private: System::Windows::Forms::Button^ btn_backgrounds;


		private: System::Windows::Forms::Button^ btn_skin;

		private: System::Windows::Forms::Button^ btn_tienda;

		private: System::Windows::Forms::Panel^ panel_modo;
		private: System::Windows::Forms::Button^ btn_survival;

		private: System::Windows::Forms::Button^ btn_historia;

		private: System::Windows::Forms::Button^ btn_modo;

		private: System::Windows::Forms::Panel^ panel1;
		private: System::Windows::Forms::Button^ btn_creditos;
		private: System::Windows::Forms::Button^ btn_config;
		private: System::Windows::Forms::Panel^ panel_childform;
		private: System::ComponentModel::IContainer^ components;

		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menu_principal::typeid));
			this->pictureBox_logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->btn_creditos = (gcnew System::Windows::Forms::Button());
			this->btn_config = (gcnew System::Windows::Forms::Button());
			this->btn_scoreboard = (gcnew System::Windows::Forms::Button());
			this->panel_tienda = (gcnew System::Windows::Forms::Panel());
			this->btn_backgrounds = (gcnew System::Windows::Forms::Button());
			this->btn_skin = (gcnew System::Windows::Forms::Button());
			this->btn_tienda = (gcnew System::Windows::Forms::Button());
			this->panel_modo = (gcnew System::Windows::Forms::Panel());
			this->btn_survival = (gcnew System::Windows::Forms::Button());
			this->btn_historia = (gcnew System::Windows::Forms::Button());
			this->btn_modo = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox_profile = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_frame = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_emerald = (gcnew System::Windows::Forms::TextBox());
			this->textBox_skills_points = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox_rank = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->panel_childform = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->background = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->BeginInit();
			this->panel_lateral->SuspendLayout();
			this->panel_tienda->SuspendLayout();
			this->panel_modo->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_profile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_frame))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rank))->BeginInit();
			this->panel_childform->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox_logo
			// 
			this->pictureBox_logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_logo.Image")));
			this->pictureBox_logo->Location = System::Drawing::Point(0, 0);
			this->pictureBox_logo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox_logo->Name = L"pictureBox_logo";
			this->pictureBox_logo->Size = System::Drawing::Size(394, 190);
			this->pictureBox_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_logo->TabIndex = 4;
			this->pictureBox_logo->TabStop = false;
			this->pictureBox_logo->Click += gcnew System::EventHandler(this, &Menu_principal::pictureBox1_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->AutoScroll = true;
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel_lateral->Controls->Add(this->btn_creditos);
			this->panel_lateral->Controls->Add(this->btn_config);
			this->panel_lateral->Controls->Add(this->btn_scoreboard);
			this->panel_lateral->Controls->Add(this->panel_tienda);
			this->panel_lateral->Controls->Add(this->btn_tienda);
			this->panel_lateral->Controls->Add(this->panel_modo);
			this->panel_lateral->Controls->Add(this->btn_modo);
			this->panel_lateral->Controls->Add(this->panel1);
			this->panel_lateral->Controls->Add(this->pictureBox_logo);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(394, 1279);
			this->panel_lateral->TabIndex = 3;
			// 
			// btn_creditos
			// 
			this->btn_creditos->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btn_creditos->FlatAppearance->BorderSize = 0;
			this->btn_creditos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_creditos->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_creditos->ForeColor = System::Drawing::Color::White;
			this->btn_creditos->Location = System::Drawing::Point(0, 1099);
			this->btn_creditos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_creditos->Name = L"btn_creditos";
			this->btn_creditos->Size = System::Drawing::Size(394, 90);
			this->btn_creditos->TabIndex = 5;
			this->btn_creditos->Text = L"CREDITOS";
			this->btn_creditos->UseVisualStyleBackColor = true;
			this->btn_creditos->Click += gcnew System::EventHandler(this, &Menu_principal::btn_creditos_Click);
			// 
			// btn_config
			// 
			this->btn_config->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btn_config->FlatAppearance->BorderSize = 0;
			this->btn_config->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_config->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_config->ForeColor = System::Drawing::Color::White;
			this->btn_config->Location = System::Drawing::Point(0, 1189);
			this->btn_config->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_config->Name = L"btn_config";
			this->btn_config->Size = System::Drawing::Size(394, 90);
			this->btn_config->TabIndex = 7;
			this->btn_config->Text = L"CONFIGURACI�N";
			this->btn_config->UseVisualStyleBackColor = true;
			this->btn_config->Click += gcnew System::EventHandler(this, &Menu_principal::btn_config_Click);
			// 
			// btn_scoreboard
			// 
			this->btn_scoreboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_scoreboard->FlatAppearance->BorderSize = 0;
			this->btn_scoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_scoreboard->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_scoreboard->ForeColor = System::Drawing::Color::White;
			this->btn_scoreboard->Location = System::Drawing::Point(0, 839);
			this->btn_scoreboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_scoreboard->Name = L"btn_scoreboard";
			this->btn_scoreboard->Size = System::Drawing::Size(394, 90);
			this->btn_scoreboard->TabIndex = 28;
			this->btn_scoreboard->Text = L"PUNTUACIONES";
			this->btn_scoreboard->UseVisualStyleBackColor = true;
			this->btn_scoreboard->Click += gcnew System::EventHandler(this, &Menu_principal::btn_scoreboard_Click);
			// 
			// panel_tienda
			// 
			this->panel_tienda->Controls->Add(this->btn_backgrounds);
			this->panel_tienda->Controls->Add(this->btn_skin);
			this->panel_tienda->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_tienda->Location = System::Drawing::Point(0, 689);
			this->panel_tienda->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_tienda->Name = L"panel_tienda";
			this->panel_tienda->Size = System::Drawing::Size(394, 150);
			this->panel_tienda->TabIndex = 26;
			this->panel_tienda->Visible = false;
			// 
			// btn_backgrounds
			// 
			this->btn_backgrounds->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btn_backgrounds->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_backgrounds->FlatAppearance->BorderSize = 0;
			this->btn_backgrounds->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_backgrounds->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_backgrounds->ForeColor = System::Drawing::Color::White;
			this->btn_backgrounds->Location = System::Drawing::Point(0, 75);
			this->btn_backgrounds->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_backgrounds->Name = L"btn_backgrounds";
			this->btn_backgrounds->Size = System::Drawing::Size(394, 75);
			this->btn_backgrounds->TabIndex = 10;
			this->btn_backgrounds->Text = L"Fondos";
			this->btn_backgrounds->UseVisualStyleBackColor = false;
			this->btn_backgrounds->Click += gcnew System::EventHandler(this, &Menu_principal::btn_backgrounds_Click);
			// 
			// btn_skin
			// 
			this->btn_skin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btn_skin->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_skin->FlatAppearance->BorderSize = 0;
			this->btn_skin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_skin->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_skin->ForeColor = System::Drawing::Color::White;
			this->btn_skin->Location = System::Drawing::Point(0, 0);
			this->btn_skin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_skin->Name = L"btn_skin";
			this->btn_skin->Size = System::Drawing::Size(394, 75);
			this->btn_skin->TabIndex = 11;
			this->btn_skin->Text = L"Dise�os";
			this->btn_skin->UseVisualStyleBackColor = false;
			this->btn_skin->Click += gcnew System::EventHandler(this, &Menu_principal::btn_skin_Click);
			// 
			// btn_tienda
			// 
			this->btn_tienda->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_tienda->FlatAppearance->BorderSize = 0;
			this->btn_tienda->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tienda->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tienda->ForeColor = System::Drawing::Color::White;
			this->btn_tienda->Location = System::Drawing::Point(0, 599);
			this->btn_tienda->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_tienda->Name = L"btn_tienda";
			this->btn_tienda->Size = System::Drawing::Size(394, 90);
			this->btn_tienda->TabIndex = 25;
			this->btn_tienda->Text = L"TIENDA";
			this->btn_tienda->UseVisualStyleBackColor = true;
			this->btn_tienda->Click += gcnew System::EventHandler(this, &Menu_principal::btn_tienda_Click);
			// 
			// panel_modo
			// 
			this->panel_modo->Controls->Add(this->btn_survival);
			this->panel_modo->Controls->Add(this->btn_historia);
			this->panel_modo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_modo->Location = System::Drawing::Point(0, 449);
			this->panel_modo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_modo->Name = L"panel_modo";
			this->panel_modo->Size = System::Drawing::Size(394, 150);
			this->panel_modo->TabIndex = 24;
			this->panel_modo->Visible = false;
			// 
			// btn_survival
			// 
			this->btn_survival->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btn_survival->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_survival->FlatAppearance->BorderSize = 0;
			this->btn_survival->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_survival->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_survival->ForeColor = System::Drawing::Color::White;
			this->btn_survival->Location = System::Drawing::Point(0, 75);
			this->btn_survival->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_survival->Name = L"btn_survival";
			this->btn_survival->Size = System::Drawing::Size(394, 75);
			this->btn_survival->TabIndex = 13;
			this->btn_survival->Text = L"Supervivencia";
			this->btn_survival->UseVisualStyleBackColor = false;
			this->btn_survival->Click += gcnew System::EventHandler(this, &Menu_principal::btn_survival_Click);
			// 
			// btn_historia
			// 
			this->btn_historia->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btn_historia->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_historia->FlatAppearance->BorderSize = 0;
			this->btn_historia->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_historia->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_historia->ForeColor = System::Drawing::Color::White;
			this->btn_historia->Location = System::Drawing::Point(0, 0);
			this->btn_historia->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_historia->Name = L"btn_historia";
			this->btn_historia->Size = System::Drawing::Size(394, 75);
			this->btn_historia->TabIndex = 14;
			this->btn_historia->Text = L"Campa�a";
			this->btn_historia->UseVisualStyleBackColor = false;
			this->btn_historia->Click += gcnew System::EventHandler(this, &Menu_principal::btn_historia_Click);
			// 
			// btn_modo
			// 
			this->btn_modo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_modo->FlatAppearance->BorderSize = 0;
			this->btn_modo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modo->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modo->ForeColor = System::Drawing::Color::White;
			this->btn_modo->Location = System::Drawing::Point(0, 359);
			this->btn_modo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_modo->Name = L"btn_modo";
			this->btn_modo->Size = System::Drawing::Size(394, 90);
			this->btn_modo->TabIndex = 23;
			this->btn_modo->Text = L"MODOS DE JUEGO";
			this->btn_modo->UseVisualStyleBackColor = true;
			this->btn_modo->Click += gcnew System::EventHandler(this, &Menu_principal::btn_modo_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox_profile);
			this->panel1->Controls->Add(this->pictureBox_frame);
			this->panel1->Controls->Add(this->textBox_emerald);
			this->panel1->Controls->Add(this->textBox_skills_points);
			this->panel1->Controls->Add(this->pictureBox_rank);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox_username);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 190);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 169);
			this->panel1->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(174, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Esmeraldas:";
			// 
			// pictureBox_profile
			// 
			this->pictureBox_profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_profile.Image")));
			this->pictureBox_profile->Location = System::Drawing::Point(57, 53);
			this->pictureBox_profile->Name = L"pictureBox_profile";
			this->pictureBox_profile->Size = System::Drawing::Size(87, 78);
			this->pictureBox_profile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_profile->TabIndex = 2;
			this->pictureBox_profile->TabStop = false;
			this->pictureBox_profile->Click += gcnew System::EventHandler(this, &Menu_principal::pictureBox5_Click);
			// 
			// pictureBox_frame
			// 
			this->pictureBox_frame->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_frame.Image")));
			this->pictureBox_frame->Location = System::Drawing::Point(26, 33);
			this->pictureBox_frame->Name = L"pictureBox_frame";
			this->pictureBox_frame->Size = System::Drawing::Size(142, 128);
			this->pictureBox_frame->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_frame->TabIndex = 8;
			this->pictureBox_frame->TabStop = false;
			// 
			// textBox_emerald
			// 
			this->textBox_emerald->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox_emerald->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_emerald->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_emerald->ForeColor = System::Drawing::Color::White;
			this->textBox_emerald->Location = System::Drawing::Point(355, 85);
			this->textBox_emerald->Name = L"textBox_emerald";
			this->textBox_emerald->ReadOnly = true;
			this->textBox_emerald->Size = System::Drawing::Size(29, 26);
			this->textBox_emerald->TabIndex = 7;
			this->textBox_emerald->Text = L"8";
			// 
			// textBox_skills_points
			// 
			this->textBox_skills_points->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox_skills_points->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_skills_points->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_skills_points->ForeColor = System::Drawing::Color::White;
			this->textBox_skills_points->Location = System::Drawing::Point(297, 125);
			this->textBox_skills_points->Name = L"textBox_skills_points";
			this->textBox_skills_points->ReadOnly = true;
			this->textBox_skills_points->Size = System::Drawing::Size(68, 26);
			this->textBox_skills_points->TabIndex = 5;
			this->textBox_skills_points->Text = L"75";
			// 
			// pictureBox_rank
			// 
			this->pictureBox_rank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_rank.Image")));
			this->pictureBox_rank->Location = System::Drawing::Point(277, 33);
			this->pictureBox_rank->Name = L"pictureBox_rank";
			this->pictureBox_rank->Size = System::Drawing::Size(52, 49);
			this->pictureBox_rank->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_rank->TabIndex = 4;
			this->pictureBox_rank->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(175, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Rango:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(175, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"P. Hab :";
			// 
			// textBox_username
			// 
			this->textBox_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_username->ForeColor = System::Drawing::Color::White;
			this->textBox_username->Location = System::Drawing::Point(24, 5);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->ReadOnly = true;
			this->textBox_username->Size = System::Drawing::Size(144, 26);
			this->textBox_username->TabIndex = 0;
			this->textBox_username->Text = L"USUARIO";
			this->textBox_username->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel_childform
			// 
			this->panel_childform->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panel_childform->Controls->Add(this->title);
			this->panel_childform->Controls->Add(this->background);
			this->panel_childform->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_childform->Location = System::Drawing::Point(394, 0);
			this->panel_childform->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_childform->Name = L"panel_childform";
			this->panel_childform->Size = System::Drawing::Size(1746, 1279);
			this->panel_childform->TabIndex = 5;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Black;
			this->title->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->title->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::White;
			this->title->Location = System::Drawing::Point(83, 866);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(682, 54);
			this->title->TabIndex = 1;
			this->title->Text = L"Fortaleza Bajo Ataque";
			// 
			// background
			// 
			this->background->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"background.Image")));
			this->background->Location = System::Drawing::Point(0, 0);
			this->background->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1746, 1279);
			this->background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->background->TabIndex = 0;
			this->background->TabStop = false;
			// 
			// Menu_principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(2140, 1279);
			this->Controls->Add(this->panel_childform);
			this->Controls->Add(this->panel_lateral);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Menu_principal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fortaleza Bajo Ataque ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Menu_principal::Menu_principal_Load);
			this->Leave += gcnew System::EventHandler(this, &Menu_principal::Menu_principal_Leave);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->EndInit();
			this->panel_lateral->ResumeLayout(false);
			this->panel_tienda->ResumeLayout(false);
			this->panel_modo->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_profile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_frame))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_rank))->EndInit();
			this->panel_childform->ResumeLayout(false);
			this->panel_childform->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Menu_principal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_modo_Click(System::Object^ sender, System::EventArgs^ e) {
		Click_panel(panel_modo);
	}
	private: System::Void btn_historia_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		
		open_ChildForm(gcnew campaign());
		
	}
	private: System::Void btn_survival_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		
		open_ChildForm(gcnew Survival());

	}
	private: System::Void btn_tienda_Click(System::Object^ sender, System::EventArgs^ e) {
		Click_panel(panel_tienda);
		
	}


	private: System::Void btn_skin_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		open_ChildForm(gcnew Skins());
	}

	private: System::Void btn_backgrounds_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		open_ChildForm(gcnew Background());
	}

	

	private: System::Void btn_scoreboard_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		open_ChildForm(gcnew Scoreboard());
	}

	private: System::Void btn_creditos_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		open_ChildForm(gcnew Credits());
	}

	private: System::Void btn_config_Click(System::Object^ sender, System::EventArgs^ e) {
		Hide_panel();
		open_ChildForm(gcnew Settings());
	}




	
	
	



private: System::Void Menu_principal_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide_panel();
	if (active_Form != nullptr)
		active_Form->Close();

}


private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	open_ChildForm(gcnew Profile());
}
};
}
