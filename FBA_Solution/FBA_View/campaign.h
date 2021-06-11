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











	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_playSurvival;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(campaign::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_playSurvival = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1257, 107);
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
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(562, 100);
			this->label_title->TabIndex = 5;
			this->label_title->Text = L"CAMPAÑA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(272, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 58);
			this->label1->TabIndex = 6;
			this->label1->Text = L"MEJORAS";
			// 
			// btn_playSurvival
			// 
			this->btn_playSurvival->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_playSurvival->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_playSurvival->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playSurvival->ForeColor = System::Drawing::Color::Black;
			this->btn_playSurvival->Location = System::Drawing::Point(1034, 872);
			this->btn_playSurvival->Name = L"btn_playSurvival";
			this->btn_playSurvival->Size = System::Drawing::Size(442, 91);
			this->btn_playSurvival->TabIndex = 7;
			this->btn_playSurvival->Text = L"JUGAR";
			this->btn_playSurvival->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(84, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 481);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ATAQUE\r\n\r\n\r\n\r\nDEFENSA\r\n\r\n\r\n\r\nFORTALEZA\r\n\r\n\r\n\r\nEXTRA";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(357, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 83);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(511, 233);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 83);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Location = System::Drawing::Point(666, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 83);
			this->button3->TabIndex = 11;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(357, 385);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 83);
			this->button4->TabIndex = 12;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Location = System::Drawing::Point(511, 385);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 83);
			this->button5->TabIndex = 13;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->Location = System::Drawing::Point(666, 385);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 83);
			this->button6->TabIndex = 14;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->Location = System::Drawing::Point(357, 530);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 83);
			this->button7->TabIndex = 15;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->Location = System::Drawing::Point(357, 669);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 83);
			this->button8->TabIndex = 16;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(914, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(457, 58);
			this->label4->TabIndex = 17;
			this->label4->Text = L"DESCRIPCIÓN";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(1067, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 34);
			this->textBox1->TabIndex = 18;
			this->textBox1->Text = L"Ataque I";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(913, 276);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(491, 144);
			this->textBox2->TabIndex = 19;
			this->textBox2->Text = L"Esta mejora permite un aumento de los ataques de cualquier tipo de soldado produc"
				L"ido";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LimeGreen;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(1133, 447);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(212, 43);
			this->button9->TabIndex = 21;
			this->button9->Text = L"MEJORAR";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(1046, 451);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 34);
			this->textBox3->TabIndex = 22;
			this->textBox3->Text = L"30";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(918, 451);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 34);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Costo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(993, 555);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(208, 58);
			this->label7->TabIndex = 24;
			this->label7->Text = L"NIVEL";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(1230, 557);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 59);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"8";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(945, 641);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 170);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Duración:\r\n\r\nIntentos:\r\n\r\n\r\n";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(1183, 641);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 34);
			this->textBox5->TabIndex = 27;
			this->textBox5->Text = L"2:00";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(1183, 715);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(81, 34);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"2";
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->Location = System::Drawing::Point(511, 530);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 83);
			this->button10->TabIndex = 29;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->Location = System::Drawing::Point(666, 530);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(81, 83);
			this->button11->TabIndex = 30;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->Location = System::Drawing::Point(511, 669);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 83);
			this->button12->TabIndex = 31;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->Location = System::Drawing::Point(666, 669);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(81, 83);
			this->button13->TabIndex = 32;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// campaign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1522, 1009);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_playSurvival);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_title);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"campaign";
			this->Text = L"campaign";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &campaign::campaign_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}










private: System::Void campaign_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Graphics^ g = e->Graphics;
	g->DrawLine(System::Drawing::Pens::WhiteSmoke,600,350,950,350);
	g->DrawLine(System::Drawing::Pens::WhiteSmoke, 600,350,600,500);

}
};
}
