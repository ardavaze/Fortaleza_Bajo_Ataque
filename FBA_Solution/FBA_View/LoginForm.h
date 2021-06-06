#pragma once
#include "RegisterForm.h"
namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		Graphics^ plotter;
		static int mousePositionX = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
		   bool frstTimeEnterTxbPassword;
	public:
		static int mousePositionY = 0;
		LoginForm(void)
		{
			InitializeComponent();
			//
			// draw lines for textboxes
			//
			plotter = this->CreateGraphics();
			//FBAModel::User^ user = gcnew FBAModel::User(); Por mientras se puede agregar usuarios por aqui
			//user->username ="Danny";
			//user->password ="password";
			//FBA_Controller::FBAController::AddUser(user);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Splitter^ splitter1;
	protected:
	private: System::Windows::Forms::Button^ btnAccess;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::TextBox^ txbUser;
	private: System::Windows::Forms::TextBox^ txbPassword;

	private:

	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnMinimize;
	private: System::Windows::Forms::LinkLabel^ lklRegister;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->btnAccess = (gcnew System::Windows::Forms::Button());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->txbUser = (gcnew System::Windows::Forms::TextBox());
			this->txbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->lklRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->splitter1->Enabled = false;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(250, 370);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// btnAccess
			// 
			this->btnAccess->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->btnAccess->FlatAppearance->BorderSize = 0;
			this->btnAccess->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnAccess->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnAccess->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAccess->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccess->ForeColor = System::Drawing::Color::LightGray;
			this->btnAccess->Location = System::Drawing::Point(309, 224);
			this->btnAccess->Name = L"btnAccess";
			this->btnAccess->Size = System::Drawing::Size(503, 43);
			this->btnAccess->TabIndex = 3;
			this->btnAccess->Text = L"Acceder";
			this->btnAccess->UseVisualStyleBackColor = false;
			this->btnAccess->Click += gcnew System::EventHandler(this, &LoginForm::btnAccess_Click);
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLogin->ForeColor = System::Drawing::Color::LightGray;
			this->lblLogin->Location = System::Drawing::Point(440, 12);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(244, 35);
			this->lblLogin->TabIndex = 2;
			this->lblLogin->Text = L"CYBERPUCP";
			// 
			// txbUser
			// 
			this->txbUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->txbUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbUser->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbUser->ForeColor = System::Drawing::Color::DimGray;
			this->txbUser->Location = System::Drawing::Point(309, 87);
			this->txbUser->Name = L"txbUser";
			this->txbUser->Size = System::Drawing::Size(503, 25);
			this->txbUser->TabIndex = 1;
			this->txbUser->Text = L"USUARIO";
			this->txbUser->Enter += gcnew System::EventHandler(this, &LoginForm::txbUser_Enter);
			this->txbUser->Leave += gcnew System::EventHandler(this, &LoginForm::txbUser_Leave);
			// 
			// txbPassword
			// 
			this->txbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->txbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbPassword->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbPassword->ForeColor = System::Drawing::Color::DimGray;
			this->txbPassword->Location = System::Drawing::Point(309, 151);
			this->txbPassword->Name = L"txbPassword";
			this->txbPassword->Size = System::Drawing::Size(503, 25);
			this->txbPassword->TabIndex = 2;
			this->txbPassword->Text = L"CONTRASEÑA";
			this->txbPassword->Enter += gcnew System::EventHandler(this, &LoginForm::txbPassword_Enter);
			this->txbPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LoginForm::txbPassword_KeyPress);
			this->txbPassword->Leave += gcnew System::EventHandler(this, &LoginForm::txbPassword_Leave);
			// 
			// btnClose
			// 
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(818, 10);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(20, 20);
			this->btnClose->TabIndex = 6;
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &LoginForm::btnClose_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnMinimize->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMinimize.Image")));
			this->btnMinimize->Location = System::Drawing::Point(792, 10);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(20, 20);
			this->btnMinimize->TabIndex = 5;
			this->btnMinimize->UseVisualStyleBackColor = true;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &LoginForm::btnMinimize_Click);
			// 
			// lklRegister
			// 
			this->lklRegister->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lklRegister->AutoSize = true;
			this->lklRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lklRegister->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lklRegister->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lklRegister->Location = System::Drawing::Point(477, 293);
			this->lklRegister->Name = L"lklRegister";
			this->lklRegister->Size = System::Drawing::Size(163, 18);
			this->lklRegister->TabIndex = 0;
			this->lklRegister->TabStop = true;
			this->lklRegister->Text = L"¿No tienes una cuenta\?";
			this->lklRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::lklRegister_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkLabel1->Location = System::Drawing::Point(470, 322);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(179, 18);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Olvidaste tu contraseña\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 132);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(236, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(247, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(601, 50);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pictureBox2_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pictureBox2_MouseMove);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(850, 370);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->lklRegister);
			this->Controls->Add(this->btnMinimize);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->txbPassword);
			this->Controls->Add(this->txbUser);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->btnAccess);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CyberPUCP 1917";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginForm::LoginForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::LoginForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void LoginForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Point p1(this->txbUser->Location.X + 1, this->txbUser->Location.Y + this->txbUser->Size.Height);
			Point p2(p1.X + txbUser->Size.Width, p1.Y);
			Point p3(this->txbPassword->Location.X + 1, this->txbPassword->Location.Y + this->txbPassword->Size.Height);
			Point p4(p3.X + txbPassword->Size.Width, p3.Y);
			plotter->DrawLine(Pens::DimGray, p1, p2);
			plotter->DrawLine(Pens::DimGray, p3, p4);
			Point k1(1, 1);
			Point k2(this->Size.Width-1, 1);
			Point k3(1, this->Size.Height-1);
			Point k4(this->Size.Width-1, this->Size.Height-1);
			plotter->DrawLine(Pens::DimGray, k1, k2);
			plotter->DrawLine(Pens::DimGray, k3, k4);
			plotter->DrawLine(Pens::DimGray, k1, k3);
			plotter->DrawLine(Pens::DimGray, k2, k4);
		}
		private: System::Void LoginForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
		private: System::Void txbUser_Enter(System::Object^ sender, System::EventArgs^ e) {
			if (txbUser->Text == "USUARIO") {
				txbUser->Text = "";
				txbUser->ForeColor = System::Drawing::Color::LightGray;
			}
		}
		private: System::Void txbUser_Leave(System::Object^ sender, System::EventArgs^ e) {
			if (txbUser->Text == "") {
				txbUser->Text = "USUARIO";
				txbUser->ForeColor = System::Drawing::Color::DimGray;
			}
		}
		private: System::Void txbPassword_Enter(System::Object^ sender, System::EventArgs^ e) {
			frstTimeEnterTxbPassword = 1;
			if (txbPassword->Text == "CONTRASEÑA") {
				txbPassword->Text = "";
				txbPassword->ForeColor = System::Drawing::Color::LightGray;
			}
		}
		private: System::Void txbPassword_Leave(System::Object^ sender, System::EventArgs^ e) {
			if (txbPassword->Text == "") {
				txbPassword->Text = "CONTRASEÑA";
				txbPassword->UseSystemPasswordChar = false;
				txbPassword->ForeColor = System::Drawing::Color::DimGray;
			}
		}
		private: System::Void txbPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (frstTimeEnterTxbPassword) {
				txbPassword->UseSystemPasswordChar = true;
				txbPassword->Text = e->KeyChar.ToString();
				txbPassword->Select(txbPassword->Text->Length, 0);
				frstTimeEnterTxbPassword = 0;
			}
		}
		private: System::Void btnAccess_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
		private: System::Void pictureBox2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				mousePositionX = e->Location.X; mousePositionY = e->Location.Y;
			}
		}
		private: System::Void pictureBox2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				this->Location = Point(this->Location.X + e->Location.X - mousePositionX, this->Location.Y +(e->Location.Y - mousePositionY));
			}
		}
		private: System::Void lklRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->Hide();
			RegisterForm^ regist = gcnew RegisterForm();
			regist->ShowDialog();
		}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
