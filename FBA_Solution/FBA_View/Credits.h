#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Credits
	/// </summary>
	public ref class Credits : public System::Windows::Forms::Form
	{
	public:
		Credits(void)
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
		~Credits()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Credits::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(91, 50);
			this->btn_close->Margin = System::Windows::Forms::Padding(2);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(56, 45);
			this->btn_close->TabIndex = 4;
			this->btn_close->Text = L"<-";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &Credits::btn_close_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(374, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(578, 451);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(384, 590);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(549, 179);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(80, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 62);
			this->label1->TabIndex = 7;
			this->label1->Text = L"EQUIPO\r\nDESARROLLADOR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(122, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 75);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Danny Valdivieso\r\nJorge Mendoza\r\nRoger Venegas";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(162, 309);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"M�SICA";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(53, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(374, 75);
			this->label4->TabIndex = 10;
			this->label4->Text = L"\"DETROIT: BECOME HUMAN\"\r\nMain Menu Theme \r\nSoundTrack";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(112, 482);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(263, 31);
			this->label5->TabIndex = 11;
			this->label5->Text = L"GAME ASSETS";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(122, 516);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(235, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"� 2020 CraftPix";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(905, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(352, 62);
			this->label7->TabIndex = 13;
			this->label7->Text = L"AGRADECIMIENTOS\r\nESPECIALES";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(949, 487);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(308, 75);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Basado originalmente \r\nen el juego\r\nTroy (2009).";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(949, 174);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(283, 50);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Al canal de YouTube\r\n\"Escuela de Juegos\".";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(537, 744);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(251, 25);
			this->label8->TabIndex = 17;
			this->label8->Text = L"CyberPucp. 2021.\r\n";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(547, 581);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(231, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Presentado por:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label12->Location = System::Drawing::Point(958, 378);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(302, 75);
			this->label12->TabIndex = 19;
			this->label12->Text = L"y a nuestro asesor\r\nde proyecto, al\r\nProf. Johan Balde�n.";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1010, 237);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(121, 114);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// Credits
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1269, 820);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Credits";
			this->Text = L"Credits";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}
