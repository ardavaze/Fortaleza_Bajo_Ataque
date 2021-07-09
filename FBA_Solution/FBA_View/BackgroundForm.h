#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Background
	/// </summary>
	public ref class BackgroundForm : public System::Windows::Forms::Form
	{
	public:
		BackgroundForm(void)
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
		~BackgroundForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Panel^ pnlItem1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnBuy1;


	private: System::Windows::Forms::Panel^ pnlItem2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnBuy2;


	private: System::Windows::Forms::Panel^ pnlItem3;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnBuy3;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ txbDescription;
	private: System::Windows::Forms::GroupBox^ gpb;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BackgroundForm::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->pnlItem1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBuy1 = (gcnew System::Windows::Forms::Button());
			this->pnlItem2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBuy2 = (gcnew System::Windows::Forms::Button());
			this->pnlItem3 = (gcnew System::Windows::Forms::Panel());
			this->txbDescription = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBuy3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gpb = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlItem1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlItem2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pnlItem3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->gpb->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::DimGray;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_close->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_close->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_close->Location = System::Drawing::Point(0, 0);
			this->btn_close->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(36, 39);
			this->btn_close->TabIndex = 3;
			this->btn_close->Text = L"<";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &BackgroundForm::btn_close_Click);
			// 
			// pnlItem1
			// 
			this->pnlItem1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlItem1->Controls->Add(this->pictureBox4);
			this->pnlItem1->Controls->Add(this->textBox1);
			this->pnlItem1->Controls->Add(this->pictureBox1);
			this->pnlItem1->Controls->Add(this->btnBuy1);
			this->pnlItem1->Location = System::Drawing::Point(22, 79);
			this->pnlItem1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlItem1->Name = L"pnlItem1";
			this->pnlItem1->Size = System::Drawing::Size(260, 250);
			this->pnlItem1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Location = System::Drawing::Point(0, 154);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(256, 51);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 152);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// btnBuy1
			// 
			this->btnBuy1->BackColor = System::Drawing::Color::DimGray;
			this->btnBuy1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnBuy1->FlatAppearance->BorderSize = 0;
			this->btnBuy1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnBuy1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->btnBuy1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuy1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuy1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnBuy1->Location = System::Drawing::Point(0, 205);
			this->btnBuy1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuy1->Name = L"btnBuy1";
			this->btnBuy1->Size = System::Drawing::Size(256, 41);
			this->btnBuy1->TabIndex = 0;
			this->btnBuy1->Text = L"Comprar";
			this->btnBuy1->UseVisualStyleBackColor = false;
			// 
			// pnlItem2
			// 
			this->pnlItem2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlItem2->Controls->Add(this->pictureBox6);
			this->pnlItem2->Controls->Add(this->textBox2);
			this->pnlItem2->Controls->Add(this->pictureBox2);
			this->pnlItem2->Controls->Add(this->btnBuy2);
			this->pnlItem2->Location = System::Drawing::Point(307, 80);
			this->pnlItem2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlItem2->Name = L"pnlItem2";
			this->pnlItem2->Size = System::Drawing::Size(295, 250);
			this->pnlItem2->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->textBox2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Location = System::Drawing::Point(0, 154);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(291, 51);
			this->textBox2->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(291, 152);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btnBuy2
			// 
			this->btnBuy2->BackColor = System::Drawing::Color::DimGray;
			this->btnBuy2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnBuy2->FlatAppearance->BorderSize = 0;
			this->btnBuy2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnBuy2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->btnBuy2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuy2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuy2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnBuy2->Location = System::Drawing::Point(0, 205);
			this->btnBuy2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuy2->Name = L"btnBuy2";
			this->btnBuy2->Size = System::Drawing::Size(291, 41);
			this->btnBuy2->TabIndex = 0;
			this->btnBuy2->Text = L"Comprar";
			this->btnBuy2->UseVisualStyleBackColor = false;
			// 
			// pnlItem3
			// 
			this->pnlItem3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlItem3->Controls->Add(this->pictureBox5);
			this->pnlItem3->Controls->Add(this->txbDescription);
			this->pnlItem3->Controls->Add(this->pictureBox3);
			this->pnlItem3->Controls->Add(this->btnBuy3);
			this->pnlItem3->Location = System::Drawing::Point(632, 82);
			this->pnlItem3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlItem3->Name = L"pnlItem3";
			this->pnlItem3->Size = System::Drawing::Size(272, 250);
			this->pnlItem3->TabIndex = 6;
			// 
			// txbDescription
			// 
			this->txbDescription->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txbDescription->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->txbDescription->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->txbDescription->Location = System::Drawing::Point(0, 154);
			this->txbDescription->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txbDescription->Multiline = true;
			this->txbDescription->Name = L"txbDescription";
			this->txbDescription->ReadOnly = true;
			this->txbDescription->Size = System::Drawing::Size(268, 51);
			this->txbDescription->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(268, 152);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// btnBuy3
			// 
			this->btnBuy3->BackColor = System::Drawing::Color::DimGray;
			this->btnBuy3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnBuy3->FlatAppearance->BorderSize = 0;
			this->btnBuy3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnBuy3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->btnBuy3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuy3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuy3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnBuy3->Location = System::Drawing::Point(0, 205);
			this->btnBuy3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuy3->Name = L"btnBuy3";
			this->btnBuy3->Size = System::Drawing::Size(268, 41);
			this->btnBuy3->TabIndex = 0;
			this->btnBuy3->Text = L"Comprar";
			this->btnBuy3->UseVisualStyleBackColor = false;
			this->btnBuy3->Click += gcnew System::EventHandler(this, &BackgroundForm::btnBuy_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(43, 52);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(759, 50);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Tienda de Fondos de Imagen";
			// 
			// gpb
			// 
			this->gpb->BackColor = System::Drawing::Color::DarkSlateGray;
			this->gpb->Controls->Add(this->button2);
			this->gpb->Controls->Add(this->button1);
			this->gpb->Controls->Add(this->pnlItem1);
			this->gpb->Controls->Add(this->pnlItem2);
			this->gpb->Controls->Add(this->pnlItem3);
			this->gpb->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpb->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->gpb->Location = System::Drawing::Point(238, 183);
			this->gpb->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gpb->Name = L"gpb";
			this->gpb->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gpb->Size = System::Drawing::Size(934, 360);
			this->gpb->TabIndex = 8;
			this->gpb->TabStop = false;
			this->gpb->Text = L"Productos disponibles";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::Honeydew;
			this->button2->Location = System::Drawing::Point(834, 24);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 24);
			this->button2->TabIndex = 8;
			this->button2->Text = L"<-";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Honeydew;
			this->button1->Location = System::Drawing::Point(884, 24);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 24);
			this->button1->TabIndex = 7;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-2, -2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(260, 155);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-2, -2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(272, 155);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(-2, -2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(293, 155);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// BackgroundForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1294, 665);
			this->Controls->Add(this->gpb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"BackgroundForm";
			this->Text = L"Background";
			this->pnlItem1->ResumeLayout(false);
			this->pnlItem1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlItem2->ResumeLayout(false);
			this->pnlItem2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pnlItem3->ResumeLayout(false);
			this->pnlItem3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->gpb->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnBuy_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
