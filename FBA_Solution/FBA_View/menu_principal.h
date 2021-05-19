#pragma once
#include "Game_loop.h"
namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAView;
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel_lateral;
	private: System::Windows::Forms::Button^ btn_config;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu_principal::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_config = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel_lateral->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(375, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &menu_principal::pictureBox1_Click);
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel_lateral->Controls->Add(this->button4);
			this->panel_lateral->Controls->Add(this->button5);
			this->panel_lateral->Controls->Add(this->panel2);
			this->panel_lateral->Controls->Add(this->button8);
			this->panel_lateral->Controls->Add(this->panel1);
			this->panel_lateral->Controls->Add(this->button11);
			this->panel_lateral->Controls->Add(this->btn_config);
			this->panel_lateral->Controls->Add(this->pictureBox1);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(375, 1024);
			this->panel_lateral->TabIndex = 3;
			this->panel_lateral->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &menu_principal::panel1_Paint);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 765);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(375, 72);
			this->button4->TabIndex = 8;
			this->button4->Text = L"SCOREBOARDS";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &menu_principal::button4_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 695);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(375, 70);
			this->button5->TabIndex = 9;
			this->button5->Text = L"AMIGOS";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 515);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(375, 180);
			this->panel2->TabIndex = 12;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 92);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(375, 66);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Backgrounds";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menu_principal::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(375, 92);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Skins ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &menu_principal::button7_Click);
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Top;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(0, 427);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(375, 88);
			this->button8->TabIndex = 12;
			this->button8->Text = L"TIENDA";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &menu_principal::button8_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 284);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 143);
			this->panel1->TabIndex = 15;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button9->Dock = System::Windows::Forms::DockStyle::Top;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(0, 79);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(375, 53);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Survival";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button10->Dock = System::Windows::Forms::DockStyle::Top;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(0, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(375, 79);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Historia";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Top;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(0, 186);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(375, 98);
			this->button11->TabIndex = 15;
			this->button11->Text = L"MODOS DE JUEGO";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &menu_principal::button11_Click);
			// 
			// btn_config
			// 
			this->btn_config->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btn_config->FlatAppearance->BorderSize = 0;
			this->btn_config->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_config->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_config->ForeColor = System::Drawing::Color::White;
			this->btn_config->Location = System::Drawing::Point(0, 955);
			this->btn_config->Name = L"btn_config";
			this->btn_config->Size = System::Drawing::Size(375, 69);
			this->btn_config->TabIndex = 5;
			this->btn_config->Text = L"CONFIGURACIÓN";
			this->btn_config->UseVisualStyleBackColor = true;
			this->btn_config->Click += gcnew System::EventHandler(this, &menu_principal::button2_Click_1);
			// 
			// menu_principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1894, 1024);
			this->Controls->Add(this->panel_lateral);
			this->IsMdiContainer = true;
			this->Name = L"menu_principal";
			this->Text = L"FBA";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &menu_principal::menu_principal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel_lateral->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menu_principal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_survival_Click(System::Object^ sender, System::EventArgs^ e) {
		Game_loop::run();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
