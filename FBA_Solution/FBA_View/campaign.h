#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for campaign
	/// </summary>
	public ref class campaign : public System::Windows::Forms::Form
	{
	public:
		campaign(void)
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
		~campaign()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_playCampaign;
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Panel^ panel_store_upgrades;
	private: System::Windows::Forms::Panel^ panel_upgrades;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label_1;
	private: System::Windows::Forms::Button^ btn_buy_upgrade;
	private: System::Windows::Forms::Panel^ panel_descripción;
	private: System::Windows::Forms::Label^ label_2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_title;

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
			this->btn_playCampaign = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->panel_store_upgrades = (gcnew System::Windows::Forms::Panel());
			this->btn_buy_upgrade = (gcnew System::Windows::Forms::Button());
			this->panel_descripción = (gcnew System::Windows::Forms::Panel());
			this->label_2 = (gcnew System::Windows::Forms::Label());
			this->panel_upgrades = (gcnew System::Windows::Forms::Panel());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->panel_store_upgrades->SuspendLayout();
			this->panel_descripción->SuspendLayout();
			this->panel_upgrades->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_playCampaign
			// 
			this->btn_playCampaign->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_playCampaign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_playCampaign->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playCampaign->ForeColor = System::Drawing::Color::Black;
			this->btn_playCampaign->Location = System::Drawing::Point(1055, 891);
			this->btn_playCampaign->Name = L"btn_playCampaign";
			this->btn_playCampaign->Size = System::Drawing::Size(442, 91);
			this->btn_playCampaign->TabIndex = 0;
			this->btn_playCampaign->Text = L"JUGAR";
			this->btn_playCampaign->UseVisualStyleBackColor = false;
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_close->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_close->ForeColor = System::Drawing::Color::Black;
			this->btn_close->Location = System::Drawing::Point(0, 0);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(47, 48);
			this->btn_close->TabIndex = 1;
			this->btn_close->Text = L"<";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &campaign::button1_Click);
			// 
			// panel_store_upgrades
			// 
			this->panel_store_upgrades->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_store_upgrades->Controls->Add(this->btn_buy_upgrade);
			this->panel_store_upgrades->Controls->Add(this->panel_descripción);
			this->panel_store_upgrades->Controls->Add(this->panel_upgrades);
			this->panel_store_upgrades->Location = System::Drawing::Point(44, 199);
			this->panel_store_upgrades->Name = L"panel_store_upgrades";
			this->panel_store_upgrades->Size = System::Drawing::Size(1453, 615);
			this->panel_store_upgrades->TabIndex = 2;
			// 
			// btn_buy_upgrade
			// 
			this->btn_buy_upgrade->BackColor = System::Drawing::Color::Green;
			this->btn_buy_upgrade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buy_upgrade->ForeColor = System::Drawing::Color::White;
			this->btn_buy_upgrade->Location = System::Drawing::Point(998, 510);
			this->btn_buy_upgrade->Name = L"btn_buy_upgrade";
			this->btn_buy_upgrade->Size = System::Drawing::Size(316, 87);
			this->btn_buy_upgrade->TabIndex = 2;
			this->btn_buy_upgrade->Text = L"Mejorar";
			this->btn_buy_upgrade->UseVisualStyleBackColor = false;
			// 
			// panel_descripción
			// 
			this->panel_descripción->Controls->Add(this->label_2);
			this->panel_descripción->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_descripción->Location = System::Drawing::Point(891, 0);
			this->panel_descripción->Name = L"panel_descripción";
			this->panel_descripción->Size = System::Drawing::Size(560, 486);
			this->panel_descripción->TabIndex = 1;
			// 
			// label_2
			// 
			this->label_2->AutoSize = true;
			this->label_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_2->ForeColor = System::Drawing::Color::White;
			this->label_2->Location = System::Drawing::Point(63, 151);
			this->label_2->Name = L"label_2";
			this->label_2->Size = System::Drawing::Size(321, 64);
			this->label_2->TabIndex = 0;
			this->label_2->Text = L"Descripción";
			// 
			// panel_upgrades
			// 
			this->panel_upgrades->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_upgrades->Controls->Add(this->label_1);
			this->panel_upgrades->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_upgrades->Location = System::Drawing::Point(0, 0);
			this->panel_upgrades->Name = L"panel_upgrades";
			this->panel_upgrades->Size = System::Drawing::Size(891, 613);
			this->panel_upgrades->TabIndex = 0;
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->BackColor = System::Drawing::Color::Transparent;
			this->label_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_1->ForeColor = System::Drawing::Color::White;
			this->label_1->Location = System::Drawing::Point(138, 205);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(383, 82);
			this->label_1->TabIndex = 0;
			this->label_1->Text = L"MEJORAS";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(44, 891);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(877, 91);
			this->panel2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(583, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"AEAE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(400, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nivel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(559, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_title->ForeColor = System::Drawing::Color::White;
			this->label_title->Location = System::Drawing::Point(12, 65);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(562, 100);
			this->label_title->TabIndex = 5;
			this->label_title->Text = L"CAMPAÑA";
			// 
			// campaign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1552, 1023);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel_store_upgrades);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_playCampaign);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"campaign";
			this->Text = L"campaign";
			this->panel_store_upgrades->ResumeLayout(false);
			this->panel_descripción->ResumeLayout(false);
			this->panel_descripción->PerformLayout();
			this->panel_upgrades->ResumeLayout(false);
			this->panel_upgrades->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
