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
			this->SuspendLayout();
			// 
			// btn_playCampaign
			// 
			this->btn_playCampaign->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_playCampaign->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_playCampaign->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_playCampaign->ForeColor = System::Drawing::Color::Black;
			this->btn_playCampaign->Location = System::Drawing::Point(1010, 854);
			this->btn_playCampaign->Name = L"btn_playCampaign";
			this->btn_playCampaign->Size = System::Drawing::Size(442, 91);
			this->btn_playCampaign->TabIndex = 0;
			this->btn_playCampaign->Text = L"JUGAR";
			this->btn_playCampaign->UseVisualStyleBackColor = false;
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(58, 93);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(88, 78);
			this->btn_close->TabIndex = 1;
			this->btn_close->Text = L"<-";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &campaign::button1_Click);
			// 
			// campaign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1500, 1024);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_playCampaign);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"campaign";
			this->Text = L"campaign";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
