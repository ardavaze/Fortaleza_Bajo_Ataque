#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAModel;
	using namespace FBAController;
	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		Graphics^ plotter;
		static int mousePositionX = 0;
		static int mousePositionY = 0;
		bool close=1;
		RegisterForm(void)
		{
			InitializeComponent();
			plotter = this->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRegister;
	protected:









	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txbLastNameFath;
	private: System::Windows::Forms::TextBox^ txbName;



	private: System::Windows::Forms::TextBox^ txbLastNameMoth;

	private: System::Windows::Forms::TextBox^ txbnickname;

	private: System::Windows::Forms::TextBox^ txbBirthday;

	private: System::Windows::Forms::TextBox^ txbemail;
	private: System::Windows::Forms::TextBox^ txbPassword;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnClose;

	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::Button^ btnBack;


	private: System::Windows::Forms::PictureBox^ pictureBox3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txbLastNameFath = (gcnew System::Windows::Forms::TextBox());
			this->txbName = (gcnew System::Windows::Forms::TextBox());
			this->txbLastNameMoth = (gcnew System::Windows::Forms::TextBox());
			this->txbnickname = (gcnew System::Windows::Forms::TextBox());
			this->txbBirthday = (gcnew System::Windows::Forms::TextBox());
			this->txbemail = (gcnew System::Windows::Forms::TextBox());
			this->txbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(140, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro de cuenta";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnRegister->Location = System::Drawing::Point(36, 581);
			this->btnRegister->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(447, 40);
			this->btnRegister->TabIndex = 8;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label9->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(32, 483);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Correo: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(33, 77);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombres:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(32, 135);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Paterno:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(29, 202);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Apellido Materno:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label7->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(29, 275);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Nickname:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label8->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(32, 414);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fecha de Nacimiento:";
			// 
			// txbLastNameFath
			// 
			this->txbLastNameFath->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbLastNameFath->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbLastNameFath->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbLastNameFath->ForeColor = System::Drawing::Color::LightGray;
			this->txbLastNameFath->Location = System::Drawing::Point(34, 154);
			this->txbLastNameFath->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbLastNameFath->Name = L"txbLastNameFath";
			this->txbLastNameFath->Size = System::Drawing::Size(448, 21);
			this->txbLastNameFath->TabIndex = 2;
			// 
			// txbName
			// 
			this->txbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbName->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbName->ForeColor = System::Drawing::Color::LightGray;
			this->txbName->Location = System::Drawing::Point(36, 97);
			this->txbName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbName->Name = L"txbName";
			this->txbName->Size = System::Drawing::Size(447, 21);
			this->txbName->TabIndex = 1;
			// 
			// txbLastNameMoth
			// 
			this->txbLastNameMoth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbLastNameMoth->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbLastNameMoth->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbLastNameMoth->ForeColor = System::Drawing::Color::LightGray;
			this->txbLastNameMoth->Location = System::Drawing::Point(32, 222);
			this->txbLastNameMoth->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbLastNameMoth->Name = L"txbLastNameMoth";
			this->txbLastNameMoth->Size = System::Drawing::Size(451, 21);
			this->txbLastNameMoth->TabIndex = 3;
			// 
			// txbnickname
			// 
			this->txbnickname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbnickname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbnickname->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbnickname->ForeColor = System::Drawing::Color::LightGray;
			this->txbnickname->Location = System::Drawing::Point(32, 294);
			this->txbnickname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbnickname->Name = L"txbnickname";
			this->txbnickname->Size = System::Drawing::Size(451, 21);
			this->txbnickname->TabIndex = 4;
			// 
			// txbBirthday
			// 
			this->txbBirthday->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbBirthday->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbBirthday->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbBirthday->ForeColor = System::Drawing::Color::LightGray;
			this->txbBirthday->Location = System::Drawing::Point(34, 434);
			this->txbBirthday->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbBirthday->Name = L"txbBirthday";
			this->txbBirthday->Size = System::Drawing::Size(448, 21);
			this->txbBirthday->TabIndex = 6;
			// 
			// txbemail
			// 
			this->txbemail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbemail->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbemail->ForeColor = System::Drawing::Color::LightGray;
			this->txbemail->Location = System::Drawing::Point(33, 502);
			this->txbemail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbemail->Name = L"txbemail";
			this->txbemail->Size = System::Drawing::Size(450, 21);
			this->txbemail->TabIndex = 7;
			// 
			// txbPassword
			// 
			this->txbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->txbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbPassword->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbPassword->ForeColor = System::Drawing::Color::LightGray;
			this->txbPassword->Location = System::Drawing::Point(32, 358);
			this->txbPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbPassword->Name = L"txbPassword";
			this->txbPassword->Size = System::Drawing::Size(451, 21);
			this->txbPassword->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(32, 338);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 23);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Contraseña";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 523);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(525, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(500, 8);
			this->btnClose->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(16, 18);
			this->btnClose->TabIndex = 10;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &RegisterForm::btnClose_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnMinimize->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(479, 8);
			this->btnMinimize->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(16, 18);
			this->btnMinimize->TabIndex = 9;
			this->btnMinimize->UseVisualStyleBackColor = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &RegisterForm::btnMinimize_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Location = System::Drawing::Point(0, 0);
			this->btnBack->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(32, 30);
			this->btnBack->TabIndex = 21;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &RegisterForm::btnBack_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(525, 41);
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::pictureBox3_MouseDown);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RegisterForm::pictureBox3_MouseMove);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->ClientSize = System::Drawing::Size(531, 650);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnMinimize);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txbPassword);
			this->Controls->Add(this->txbemail);
			this->Controls->Add(this->txbBirthday);
			this->Controls->Add(this->txbnickname);
			this->Controls->Add(this->txbLastNameMoth);
			this->Controls->Add(this->txbName);
			this->Controls->Add(this->txbLastNameFath);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"RegisterForm";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RegisterForm::RegisterForm_FormClosing);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegisterForm::RegisterForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
		private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		private: System::Void pictureBox3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				mousePositionX = e->Location.X; mousePositionY = e->Location.Y;
			}
		}
		private: System::Void pictureBox3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				this->Location = Point(this->Location.X + e->Location.X - mousePositionX, this->Location.Y + (e->Location.Y - mousePositionY));
			}
		}
		private: System::Void RegisterForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Point p1(this->txbBirthday->Location.X + 1, this->txbBirthday->Location.Y + this->txbBirthday->Size.Height);
			Point p2(p1.X + txbBirthday->Size.Width, p1.Y);
			Point p3(this->txbemail->Location.X + 1, this->txbemail->Location.Y + this->txbemail->Size.Height);
			Point p4(p3.X + txbemail->Size.Width, p3.Y);
			Point p5(this->txbLastNameFath->Location.X + 1, this->txbLastNameFath->Location.Y + this->txbLastNameFath->Size.Height);
			Point p6(p5.X + txbLastNameFath->Size.Width, p5.Y);
			Point p7(this->txbLastNameMoth->Location.X + 1, this->txbLastNameMoth->Location.Y + this->txbLastNameMoth->Size.Height);
			Point p8(p7.X + txbLastNameMoth->Size.Width, p7.Y);
			Point p9(this->txbName->Location.X + 1, this->txbName->Location.Y + this->txbName->Size.Height);
			Point p10(p9.X + txbName->Size.Width, p9.Y);
			Point p11(this->txbnickname->Location.X + 1, this->txbnickname->Location.Y + this->txbnickname->Size.Height);
			Point p12(p11.X + txbnickname->Size.Width, p11.Y);
			Point p13(this->txbPassword->Location.X + 1, this->txbPassword->Location.Y + this->txbPassword->Size.Height);
			Point p14(p13.X + txbPassword->Size.Width, p13.Y);
			plotter->DrawLine(Pens::DimGray, p1, p2);
			plotter->DrawLine(Pens::DimGray, p3, p4);
			plotter->DrawLine(Pens::DimGray, p5, p6);
			plotter->DrawLine(Pens::DimGray, p7, p8);
			plotter->DrawLine(Pens::DimGray, p9, p10);
			plotter->DrawLine(Pens::DimGray, p11, p12);
			plotter->DrawLine(Pens::DimGray, p13, p14);
		}
		private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide();
			close = 0;
			Owner->Show();
		}
		private: System::Void RegisterForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			if (close) {
				Application::Exit();
			}
			close = 1;
		}
		private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
