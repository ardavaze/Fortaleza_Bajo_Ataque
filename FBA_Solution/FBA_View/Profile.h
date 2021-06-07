#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
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
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ btn_OK;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Label^ label_friends_list;
	private: System::Windows::Forms::ColumnHeader^ name;
	private: System::Windows::Forms::ColumnHeader^ rank;

	private: System::Windows::Forms::Label^ label2;


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
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->rank = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_friends_list = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title->ForeColor = System::Drawing::Color::White;
			this->label_title->Location = System::Drawing::Point(-1, 0);
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
			this->listView1->Location = System::Drawing::Point(1111, 243);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(373, 719);
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
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btn_cancel);
			this->panel1->Controls->Add(this->btn_OK);
			this->panel1->Controls->Add(this->btn_update);
			this->panel1->Location = System::Drawing::Point(40, 243);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1012, 719);
			this->panel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(50, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(426, 75);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombre de usuario:\r\nFecha de nacimiento:\r\n";
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(838, 667);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(146, 36);
			this->btn_cancel->TabIndex = 11;
			this->btn_cancel->Text = L"Cancelar";
			this->btn_cancel->UseVisualStyleBackColor = true;
			// 
			// btn_OK
			// 
			this->btn_OK->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_OK->Location = System::Drawing::Point(681, 666);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(140, 37);
			this->btn_OK->TabIndex = 10;
			this->btn_OK->Text = L"Aceptar";
			this->btn_OK->UseVisualStyleBackColor = true;
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Location = System::Drawing::Point(512, 666);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(154, 37);
			this->btn_update->TabIndex = 9;
			this->btn_update->Text = L"Modificar";
			this->btn_update->UseVisualStyleBackColor = true;
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
			this->label_friends_list->Location = System::Drawing::Point(1103, 131);
			this->label_friends_list->Name = L"label_friends_list";
			this->label_friends_list->Size = System::Drawing::Size(394, 46);
			this->label_friends_list->TabIndex = 9;
			this->label_friends_list->Text = L"Lista de Amigos";
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1552, 1023);
			this->Controls->Add(this->label_friends_list);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Profile";
			this->Text = L"Profile";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btn_close_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}




};
}
