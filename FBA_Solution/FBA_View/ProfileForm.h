#pragma once
#include "AvatarForm.h"
namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAController;
	using namespace FBAModel;
	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(void)
		{
			InitializeComponent();
			User_data_load();
			Write_rank();
			Hide_button();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: void ReadOnly_true() {
		this->textBox_username->ReadOnly = true;
		this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox_name->ReadOnly = true;
		this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox_LastName_Father->ReadOnly = true;
		this->textBox_LastName_Father->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox_LastName_Mother->ReadOnly = true;
		this->textBox_LastName_Mother->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox_Birthday->ReadOnly = true;
		this->textBox_Birthday->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->textBox_email->ReadOnly = true;
		this->textBox_email->BorderStyle = System::Windows::Forms::BorderStyle::None;

	}
	

	private: void ReadOnly_false() {
		this->textBox_username->ReadOnly = false;
		this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox_name->ReadOnly = false;
		this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox_LastName_Father->ReadOnly = false;
		this->textBox_LastName_Father->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox_LastName_Mother->ReadOnly = false;
		this->textBox_LastName_Mother->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox_Birthday->ReadOnly = false;
		this->textBox_Birthday->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->textBox_email->ReadOnly = false;
		this->textBox_email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	}
	private: void User_data_load();
	private: void Write_rank();
	private: void Hide_button() {
			
		btn_cancel->Visible = false;
		btn_OK->Visible = false;
		btn_delete->Visible = false;
		btn_update_avatar->Visible = false;
	}
	private: void Show_button() {
		btn_cancel->Visible = true;
		btn_OK->Visible = true;
		btn_delete->Visible = true;
		btn_update_avatar->Visible = true;
	}
		
	public: User::Avatar avatar;
	private: System::Windows::Forms::Label^ label_title;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_OK;
	private: System::Windows::Forms::Button^ btn_update;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_username;

	private: System::Windows::Forms::TextBox^ textBox_skill_points;

	private: System::Windows::Forms::TextBox^ textBox_emerald;

	private: System::Windows::Forms::TextBox^ textBox_rank;
	private: System::Windows::Forms::TextBox^ textBox_max_time;


	private: System::Windows::Forms::TextBox^ textBox_level;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_LastName_Father;
	private: System::Windows::Forms::TextBox^ textBox_LastName_Mother;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_Birthday;
	private: System::Windows::Forms::TextBox^ textBox_email;
private: System::Windows::Forms::PictureBox^ pictureBox_avatar;



	private: System::Windows::Forms::Button^ btn_delete;
private: System::Windows::Forms::Button^ btn_update_avatar;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->textBox_max_time = (gcnew System::Windows::Forms::TextBox());
			this->textBox_level = (gcnew System::Windows::Forms::TextBox());
			this->textBox_skill_points = (gcnew System::Windows::Forms::TextBox());
			this->textBox_emerald = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rank = (gcnew System::Windows::Forms::TextBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_LastName_Father = (gcnew System::Windows::Forms::TextBox());
			this->textBox_LastName_Mother = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_Birthday = (gcnew System::Windows::Forms::TextBox());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox_avatar = (gcnew System::Windows::Forms::PictureBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update_avatar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_avatar))->BeginInit();
			this->SuspendLayout();
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
			this->label_title->Size = System::Drawing::Size(276, 67);
			this->label_title->TabIndex = 6;
			this->label_title->Text = L"PERFIL";
			// 
			// textBox_max_time
			// 
			this->textBox_max_time->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_max_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_max_time->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_max_time->ForeColor = System::Drawing::Color::White;
			this->textBox_max_time->Location = System::Drawing::Point(543, 315);
			this->textBox_max_time->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_max_time->Name = L"textBox_max_time";
			this->textBox_max_time->ReadOnly = true;
			this->textBox_max_time->Size = System::Drawing::Size(141, 17);
			this->textBox_max_time->TabIndex = 19;
			this->textBox_max_time->Text = L"TIME";
			// 
			// textBox_level
			// 
			this->textBox_level->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_level->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_level->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_level->ForeColor = System::Drawing::Color::White;
			this->textBox_level->Location = System::Drawing::Point(543, 276);
			this->textBox_level->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_level->Name = L"textBox_level";
			this->textBox_level->ReadOnly = true;
			this->textBox_level->Size = System::Drawing::Size(141, 17);
			this->textBox_level->TabIndex = 18;
			this->textBox_level->Text = L"LEVEL";
			// 
			// textBox_skill_points
			// 
			this->textBox_skill_points->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_skill_points->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_skill_points->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_skill_points->ForeColor = System::Drawing::Color::White;
			this->textBox_skill_points->Location = System::Drawing::Point(543, 229);
			this->textBox_skill_points->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_skill_points->Name = L"textBox_skill_points";
			this->textBox_skill_points->ReadOnly = true;
			this->textBox_skill_points->Size = System::Drawing::Size(141, 17);
			this->textBox_skill_points->TabIndex = 17;
			this->textBox_skill_points->Text = L"SKILL_POINT";
			// 
			// textBox_emerald
			// 
			this->textBox_emerald->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_emerald->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_emerald->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_emerald->ForeColor = System::Drawing::Color::White;
			this->textBox_emerald->Location = System::Drawing::Point(543, 191);
			this->textBox_emerald->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_emerald->Name = L"textBox_emerald";
			this->textBox_emerald->ReadOnly = true;
			this->textBox_emerald->Size = System::Drawing::Size(141, 17);
			this->textBox_emerald->TabIndex = 16;
			this->textBox_emerald->Text = L"EMERALD";
			// 
			// textBox_rank
			// 
			this->textBox_rank->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_rank->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_rank->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_rank->ForeColor = System::Drawing::Color::White;
			this->textBox_rank->Location = System::Drawing::Point(543, 156);
			this->textBox_rank->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_rank->Name = L"textBox_rank";
			this->textBox_rank->ReadOnly = true;
			this->textBox_rank->Size = System::Drawing::Size(141, 17);
			this->textBox_rank->TabIndex = 15;
			this->textBox_rank->Text = L"RANK";
			// 
			// textBox_username
			// 
			this->textBox_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_username->ForeColor = System::Drawing::Color::White;
			this->textBox_username->Location = System::Drawing::Point(180, 165);
			this->textBox_username->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->ReadOnly = true;
			this->textBox_username->Size = System::Drawing::Size(167, 17);
			this->textBox_username->TabIndex = 13;
			this->textBox_username->Text = L"USERNAME";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(53, 158);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 391);
			this->label2->TabIndex = 12;
			this->label2->Text = L"NOMBRE DE \r\nUSUARIO:\r\n\r\n\r\nAVATAR:\r\n\r\n\r\n\r\n\r\nNOMBRE:\r\n\r\nAPELLIDO \r\nPATERNO:\r\n\r\nAPEL"
				L"LIDO \r\nMATERNO:\r\n\r\n\r\nFECHA DE \r\nNACIMIENTO:\r\n\r\nCORREO:\r\n\r\n";
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(573, 573);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(117, 25);
			this->btn_cancel->TabIndex = 11;
			this->btn_cancel->Text = L"Cancelar";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &ProfileForm::btn_cancel_Click);
			// 
			// btn_OK
			// 
			this->btn_OK->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_OK->Location = System::Drawing::Point(453, 573);
			this->btn_OK->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(103, 24);
			this->btn_OK->TabIndex = 10;
			this->btn_OK->Text = L"Aceptar";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &ProfileForm::btn_OK_Click);
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(321, 574);
			this->btn_update->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(117, 24);
			this->btn_update->TabIndex = 9;
			this->btn_update->Text = L"Modificar";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &ProfileForm::btn_update_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 85);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información de cuenta";
			// 
			// textBox_name
			// 
			this->textBox_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->ForeColor = System::Drawing::Color::White;
			this->textBox_name->Location = System::Drawing::Point(179, 305);
			this->textBox_name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ReadOnly = true;
			this->textBox_name->Size = System::Drawing::Size(169, 17);
			this->textBox_name->TabIndex = 20;
			this->textBox_name->Text = L"NOMBRE 1";
			// 
			// textBox_LastName_Father
			// 
			this->textBox_LastName_Father->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_LastName_Father->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_LastName_Father->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_LastName_Father->ForeColor = System::Drawing::Color::White;
			this->textBox_LastName_Father->Location = System::Drawing::Point(179, 343);
			this->textBox_LastName_Father->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_LastName_Father->Name = L"textBox_LastName_Father";
			this->textBox_LastName_Father->ReadOnly = true;
			this->textBox_LastName_Father->Size = System::Drawing::Size(167, 17);
			this->textBox_LastName_Father->TabIndex = 21;
			this->textBox_LastName_Father->Text = L"APELLIDO";
			// 
			// textBox_LastName_Mother
			// 
			this->textBox_LastName_Mother->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_LastName_Mother->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_LastName_Mother->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_LastName_Mother->ForeColor = System::Drawing::Color::White;
			this->textBox_LastName_Mother->Location = System::Drawing::Point(179, 391);
			this->textBox_LastName_Mother->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_LastName_Mother->Name = L"textBox_LastName_Mother";
			this->textBox_LastName_Mother->ReadOnly = true;
			this->textBox_LastName_Mother->Size = System::Drawing::Size(167, 17);
			this->textBox_LastName_Mother->TabIndex = 22;
			this->textBox_LastName_Mother->Text = L"APELLIDO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(359, 158);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 204);
			this->label3->TabIndex = 23;
			this->label3->Text = L"RANGO:\r\n\r\nESMERALDAS:\r\n\r\nPUNTOS DE \r\nHABILIDAD:\r\n\r\nNIVEL CAMPAÑA:\r\n\r\nTIEMPO MÁXIM"
				L"O\r\nSUPERRVIVENVIA:\r\n\r\n";
			// 
			// textBox_Birthday
			// 
			this->textBox_Birthday->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_Birthday->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Birthday->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Birthday->ForeColor = System::Drawing::Color::White;
			this->textBox_Birthday->Location = System::Drawing::Point(180, 465);
			this->textBox_Birthday->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_Birthday->Name = L"textBox_Birthday";
			this->textBox_Birthday->ReadOnly = true;
			this->textBox_Birthday->Size = System::Drawing::Size(167, 17);
			this->textBox_Birthday->TabIndex = 24;
			this->textBox_Birthday->Text = L"FECHA";
			// 
			// textBox_email
			// 
			this->textBox_email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->ForeColor = System::Drawing::Color::White;
			this->textBox_email->Location = System::Drawing::Point(179, 510);
			this->textBox_email->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->ReadOnly = true;
			this->textBox_email->Size = System::Drawing::Size(291, 17);
			this->textBox_email->TabIndex = 25;
			this->textBox_email->Text = L"CORREO";
			// 
			// pictureBox_avatar
			// 
			this->pictureBox_avatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_avatar.Image")));
			this->pictureBox_avatar->Location = System::Drawing::Point(192, 199);
			this->pictureBox_avatar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox_avatar->Name = L"pictureBox_avatar";
			this->pictureBox_avatar->Size = System::Drawing::Size(72, 61);
			this->pictureBox_avatar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_avatar->TabIndex = 26;
			this->pictureBox_avatar->TabStop = false;
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::DarkRed;
			this->btn_delete->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::Color::White;
			this->btn_delete->Location = System::Drawing::Point(56, 573);
			this->btn_delete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(189, 25);
			this->btn_delete->TabIndex = 27;
			this->btn_delete->Text = L"Eliminar cuenta";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &ProfileForm::btn_delete_Click);
			// 
			// btn_update_avatar
			// 
			this->btn_update_avatar->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update_avatar->Location = System::Drawing::Point(180, 264);
			this->btn_update_avatar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_update_avatar->Name = L"btn_update_avatar";
			this->btn_update_avatar->Size = System::Drawing::Size(95, 19);
			this->btn_update_avatar->TabIndex = 28;
			this->btn_update_avatar->Text = L"CAMBIAR";
			this->btn_update_avatar->UseVisualStyleBackColor = true;
			this->btn_update_avatar->Click += gcnew System::EventHandler(this, &ProfileForm::btn_update_avatar_Click);
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1015, 656);
			this->Controls->Add(this->btn_update_avatar);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->pictureBox_avatar);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->textBox_Birthday);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_LastName_Mother);
			this->Controls->Add(this->textBox_LastName_Father);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->textBox_max_time);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->textBox_level);
			this->Controls->Add(this->textBox_skill_points);
			this->Controls->Add(this->textBox_emerald);
			this->Controls->Add(this->textBox_rank);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ProfileForm";
			this->Text = L"TIME";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_avatar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadOnly_false();
	Show_button();
	btn_update->Visible = false;
}

private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadOnly_true();
	User_data_load();
	Hide_button();
	btn_update->Visible = true;
}

private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);

	

	

private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e);
	

private: System::Void btn_update_avatar_Click(System::Object^ sender, System::EventArgs^ e) {
	AvatarForm^ avatar = gcnew AvatarForm();
	avatar->Owner = this;
	avatar->ShowDialog();
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
	pictureBox_avatar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(this->avatar.ToString())));

}
};
}
