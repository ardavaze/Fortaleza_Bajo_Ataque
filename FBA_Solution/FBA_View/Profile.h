#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAController;
	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
		{
			InitializeComponent();
			User_data_load();
			Hide_button();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile()
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
	private: void Hide_button() {
			
		btn_cancel->Visible = false;
		btn_OK->Visible = false;
		btn_delete->Visible = false;
	}
	private: void Show_button() {
		btn_cancel->Visible = true;
		btn_OK->Visible = true;
		btn_delete->Visible = true;

	}
		

	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_OK;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Label^ label_friends_list;
	private: System::Windows::Forms::ColumnHeader^ name;
	private: System::Windows::Forms::ColumnHeader^ rank;

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


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_delete;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->rank = (gcnew System::Windows::Forms::ColumnHeader());
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
			this->label_friends_list = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_LastName_Father = (gcnew System::Windows::Forms::TextBox());
			this->textBox_LastName_Mother = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_Birthday = (gcnew System::Windows::Forms::TextBox());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title->ForeColor = System::Drawing::Color::White;
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(412, 100);
			this->label_title->TabIndex = 6;
			this->label_title->Text = L"PERFIL";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->name, this->rank });
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(1074, 225);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(373, 565);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// name
			// 
			this->name->Text = L"Nombre";
			this->name->Width = 191;
			// 
			// rank
			// 
			this->rank->Text = L"Insignia";
			this->rank->Width = 146;
			// 
			// textBox_max_time
			// 
			this->textBox_max_time->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_max_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_max_time->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_max_time->ForeColor = System::Drawing::Color::White;
			this->textBox_max_time->Location = System::Drawing::Point(814, 484);
			this->textBox_max_time->Name = L"textBox_max_time";
			this->textBox_max_time->ReadOnly = true;
			this->textBox_max_time->Size = System::Drawing::Size(212, 26);
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
			this->textBox_level->Location = System::Drawing::Point(814, 425);
			this->textBox_level->Name = L"textBox_level";
			this->textBox_level->ReadOnly = true;
			this->textBox_level->Size = System::Drawing::Size(212, 26);
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
			this->textBox_skill_points->Location = System::Drawing::Point(814, 353);
			this->textBox_skill_points->Name = L"textBox_skill_points";
			this->textBox_skill_points->ReadOnly = true;
			this->textBox_skill_points->Size = System::Drawing::Size(212, 26);
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
			this->textBox_emerald->Location = System::Drawing::Point(814, 294);
			this->textBox_emerald->Name = L"textBox_emerald";
			this->textBox_emerald->ReadOnly = true;
			this->textBox_emerald->Size = System::Drawing::Size(212, 26);
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
			this->textBox_rank->Location = System::Drawing::Point(814, 240);
			this->textBox_rank->Name = L"textBox_rank";
			this->textBox_rank->ReadOnly = true;
			this->textBox_rank->Size = System::Drawing::Size(212, 26);
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
			this->textBox_username->Location = System::Drawing::Point(270, 254);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->ReadOnly = true;
			this->textBox_username->Size = System::Drawing::Size(251, 26);
			this->textBox_username->TabIndex = 13;
			this->textBox_username->Text = L"USERNAME";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(79, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 550);
			this->label2->TabIndex = 12;
			this->label2->Text = L"NOMBRE DE \r\nUSUARIO:\r\n\r\n\r\nAVATAR:\r\n\r\n\r\n\r\nNOMBRE:\r\n\r\nAPELLIDO \r\nPATERNO:\r\n\r\nAPELLI"
				L"DO \r\nMATERNO:\r\n\r\n\r\nFECHA DE \r\nNACIMIENTO:\r\n\r\nCORREO:\r\n\r\n";
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(859, 881);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(176, 38);
			this->btn_cancel->TabIndex = 11;
			this->btn_cancel->Text = L"Cancelar";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Profile::btn_cancel_Click);
			// 
			// btn_OK
			// 
			this->btn_OK->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_OK->Location = System::Drawing::Point(679, 882);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(155, 37);
			this->btn_OK->TabIndex = 10;
			this->btn_OK->Text = L"Aceptar";
			this->btn_OK->UseVisualStyleBackColor = true;
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(482, 883);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(175, 37);
			this->btn_update->TabIndex = 9;
			this->btn_update->Text = L"Modificar";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &Profile::btn_update_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(32, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(560, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información de cuenta";
			// 
			// label_friends_list
			// 
			this->label_friends_list->AutoSize = true;
			this->label_friends_list->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_friends_list->ForeColor = System::Drawing::Color::White;
			this->label_friends_list->Location = System::Drawing::Point(1025, 131);
			this->label_friends_list->Name = L"label_friends_list";
			this->label_friends_list->Size = System::Drawing::Size(394, 46);
			this->label_friends_list->TabIndex = 9;
			this->label_friends_list->Text = L"Lista de Amigos";
			// 
			// textBox_name
			// 
			this->textBox_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_name->ForeColor = System::Drawing::Color::White;
			this->textBox_name->Location = System::Drawing::Point(268, 449);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ReadOnly = true;
			this->textBox_name->Size = System::Drawing::Size(253, 26);
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
			this->textBox_LastName_Father->Location = System::Drawing::Point(268, 508);
			this->textBox_LastName_Father->Name = L"textBox_LastName_Father";
			this->textBox_LastName_Father->ReadOnly = true;
			this->textBox_LastName_Father->Size = System::Drawing::Size(251, 26);
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
			this->textBox_LastName_Mother->Location = System::Drawing::Point(268, 581);
			this->textBox_LastName_Mother->Name = L"textBox_LastName_Mother";
			this->textBox_LastName_Mother->ReadOnly = true;
			this->textBox_LastName_Mother->Size = System::Drawing::Size(251, 26);
			this->textBox_LastName_Mother->TabIndex = 22;
			this->textBox_LastName_Mother->Text = L"APELLIDO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(539, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 300);
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
			this->textBox_Birthday->Location = System::Drawing::Point(270, 696);
			this->textBox_Birthday->Name = L"textBox_Birthday";
			this->textBox_Birthday->ReadOnly = true;
			this->textBox_Birthday->Size = System::Drawing::Size(251, 26);
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
			this->textBox_email->Location = System::Drawing::Point(268, 764);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->ReadOnly = true;
			this->textBox_email->Size = System::Drawing::Size(436, 26);
			this->textBox_email->TabIndex = 25;
			this->textBox_email->Text = L"CORREO";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(270, 311);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(108, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::DarkRed;
			this->btn_delete->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::Color::White;
			this->btn_delete->Location = System::Drawing::Point(84, 882);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(283, 38);
			this->btn_delete->TabIndex = 27;
			this->btn_delete->Text = L"Eliminar cuenta";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Profile::btn_delete_Click);
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1522, 1009);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox_email);
			this->Controls->Add(this->textBox_Birthday);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_LastName_Mother);
			this->Controls->Add(this->textBox_LastName_Father);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->textBox_max_time);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->label_friends_list);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->textBox_level);
			this->Controls->Add(this->textBox_skill_points);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox_emerald);
			this->Controls->Add(this->textBox_rank);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Profile";
			this->Text = L"TIME";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_close_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}






private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadOnly_false();
	Show_button();
}

private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	ReadOnly_true();
	User_data_load();
	Hide_button();
}




private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e);

	

	

};
}
