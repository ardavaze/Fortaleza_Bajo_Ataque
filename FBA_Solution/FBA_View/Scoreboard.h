#pragma once

namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Scoreboard
	/// </summary>
	public ref class Scoreboard : public System::Windows::Forms::Form
	{
	public:
		Scoreboard(void)
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
		~Scoreboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank1;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userTabla;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ scoreTabla;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabRank1;
	private: System::Windows::Forms::TabPage^ tabRank2;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank2;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::TabPage^ tabRank3;
	private: System::Windows::Forms::TabPage^ tabRank4;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;






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
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dgvScoreRank1 = (gcnew System::Windows::Forms::DataGridView());
			this->position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userTabla = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->scoreTabla = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabRank1 = (gcnew System::Windows::Forms::TabPage());
			this->tabRank2 = (gcnew System::Windows::Forms::TabPage());
			this->dgvScoreRank2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabRank3 = (gcnew System::Windows::Forms::TabPage());
			this->tabRank4 = (gcnew System::Windows::Forms::TabPage());
			this->dgvScoreRank3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvScoreRank4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabRank1->SuspendLayout();
			this->tabRank2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank2))->BeginInit();
			this->tabRank3->SuspendLayout();
			this->tabRank4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank4))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(87, 79);
			this->btn_close->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(79, 63);
			this->btn_close->TabIndex = 4;
			this->btn_close->Text = L"<-";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &Scoreboard::btn_close_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(4);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->AllowDrop = true;
			this->splitContainer1->Panel2->AutoScroll = true;
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Scoreboard::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(200, 123);
			this->splitContainer1->SplitterDistance = 66;
			this->splitContainer1->SplitterWidth = 5;
			this->splitContainer1->TabIndex = 0;
			// 
			// dgvScoreRank1
			// 
			this->dgvScoreRank1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->position,
					this->userTabla, this->scoreTabla
			});
			this->dgvScoreRank1->Location = System::Drawing::Point(7, 7);
			this->dgvScoreRank1->Margin = System::Windows::Forms::Padding(4);
			this->dgvScoreRank1->Name = L"dgvScoreRank1";
			this->dgvScoreRank1->RowHeadersWidth = 51;
			this->dgvScoreRank1->Size = System::Drawing::Size(668, 172);
			this->dgvScoreRank1->TabIndex = 5;
			this->dgvScoreRank1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Scoreboard::dgvScoresRank1_CellContentClick);
			// 
			// position
			// 
			this->position->HeaderText = L"#";
			this->position->MinimumWidth = 6;
			this->position->Name = L"position";
			this->position->Width = 125;
			// 
			// userTabla
			// 
			this->userTabla->HeaderText = L"Usuario";
			this->userTabla->MinimumWidth = 6;
			this->userTabla->Name = L"userTabla";
			this->userTabla->Width = 125;
			// 
			// scoreTabla
			// 
			this->scoreTabla->HeaderText = L"Puntaje más alto";
			this->scoreTabla->MinimumWidth = 6;
			this->scoreTabla->Name = L"scoreTabla";
			this->scoreTabla->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(708, 111);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 35);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Tabla de Puntuaciones";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabRank1);
			this->tabControl1->Controls->Add(this->tabRank2);
			this->tabControl1->Controls->Add(this->tabRank3);
			this->tabControl1->Controls->Add(this->tabRank4);
			this->tabControl1->Location = System::Drawing::Point(261, 197);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(690, 215);
			this->tabControl1->TabIndex = 7;
			// 
			// tabRank1
			// 
			this->tabRank1->Controls->Add(this->dgvScoreRank1);
			this->tabRank1->Location = System::Drawing::Point(4, 25);
			this->tabRank1->Name = L"tabRank1";
			this->tabRank1->Padding = System::Windows::Forms::Padding(3);
			this->tabRank1->Size = System::Drawing::Size(682, 186);
			this->tabRank1->TabIndex = 0;
			this->tabRank1->Text = L"Rank1";
			this->tabRank1->UseVisualStyleBackColor = true;
			// 
			// tabRank2
			// 
			this->tabRank2->Controls->Add(this->dgvScoreRank2);
			this->tabRank2->Location = System::Drawing::Point(4, 25);
			this->tabRank2->Name = L"tabRank2";
			this->tabRank2->Padding = System::Windows::Forms::Padding(3);
			this->tabRank2->Size = System::Drawing::Size(682, 186);
			this->tabRank2->TabIndex = 1;
			this->tabRank2->Text = L"Rank2";
			this->tabRank2->UseVisualStyleBackColor = true;
			// 
			// dgvScoreRank2
			// 
			this->dgvScoreRank2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dgvScoreRank2->Location = System::Drawing::Point(30, 34);
			this->dgvScoreRank2->Margin = System::Windows::Forms::Padding(4);
			this->dgvScoreRank2->Name = L"dgvScoreRank2";
			this->dgvScoreRank2->RowHeadersWidth = 51;
			this->dgvScoreRank2->Size = System::Drawing::Size(529, 128);
			this->dgvScoreRank2->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"#";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// tabRank3
			// 
			this->tabRank3->Controls->Add(this->dgvScoreRank3);
			this->tabRank3->Location = System::Drawing::Point(4, 25);
			this->tabRank3->Name = L"tabRank3";
			this->tabRank3->Padding = System::Windows::Forms::Padding(3);
			this->tabRank3->Size = System::Drawing::Size(682, 186);
			this->tabRank3->TabIndex = 2;
			this->tabRank3->Text = L"Rank3";
			this->tabRank3->UseVisualStyleBackColor = true;
			// 
			// tabRank4
			// 
			this->tabRank4->Controls->Add(this->dgvScoreRank4);
			this->tabRank4->Location = System::Drawing::Point(4, 25);
			this->tabRank4->Name = L"tabRank4";
			this->tabRank4->Padding = System::Windows::Forms::Padding(3);
			this->tabRank4->Size = System::Drawing::Size(682, 186);
			this->tabRank4->TabIndex = 3;
			this->tabRank4->Text = L"Rank4";
			this->tabRank4->UseVisualStyleBackColor = true;
			// 
			// dgvScoreRank3
			// 
			this->dgvScoreRank3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dgvScoreRank3->Location = System::Drawing::Point(14, 22);
			this->dgvScoreRank3->Margin = System::Windows::Forms::Padding(4);
			this->dgvScoreRank3->Name = L"dgvScoreRank3";
			this->dgvScoreRank3->RowHeadersWidth = 51;
			this->dgvScoreRank3->Size = System::Drawing::Size(529, 128);
			this->dgvScoreRank3->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"#";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dgvScoreRank4
			// 
			this->dgvScoreRank4->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dgvScoreRank4->Location = System::Drawing::Point(20, 34);
			this->dgvScoreRank4->Margin = System::Windows::Forms::Padding(4);
			this->dgvScoreRank4->Name = L"dgvScoreRank4";
			this->dgvScoreRank4->RowHeadersWidth = 51;
			this->dgvScoreRank4->Size = System::Drawing::Size(529, 128);
			this->dgvScoreRank4->TabIndex = 8;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"#";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// Scoreboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1692, 1009);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(2560, 1329);
			this->Name = L"Scoreboard";
			this->Text = L"Scoreboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabRank1->ResumeLayout(false);
			this->tabRank2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank2))->EndInit();
			this->tabRank3->ResumeLayout(false);
			this->tabRank4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	public:
		void RefreshScores() {
			if (tabRank1->Visible)
				RefreshRank1();
			if (tabRank2->Visible)
				RefreshRank2();
			if (tabRank3->Visible)
				RefreshRank3();
			if (tabRank4->Visible)
				RefreshRank4();
		}

		void RefreshRank1() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank1->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("Capitán")) {
					dgvScoreRank1->Rows->Add(gcnew array<String^> {
						"i+1",
							"" + userList[i]->nickname,
							"" + userList[i]->survival->timeMax
					});
				}
			}
		}

		void RefreshRank2() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank1->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("Mariscal")) {
					dgvScoreRank1->Rows->Add(gcnew array<String^> {
						"i+1",
							"" + userList[i]->nickname,
							"" + userList[i]->survival->timeMax
					});
				}
			}

		}
		void RefreshRank3() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank1->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("Coronel")) {
					dgvScoreRank1->Rows->Add(gcnew array<String^> {
						"i+1",
							"" + userList[i]->nickname,
							"" + userList[i]->survival->timeMax
					});
				}
			}

		}
		void RefreshRank4() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank1->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("General")) {
					dgvScoreRank1->Rows->Add(gcnew array<String^> {
						"i+1",
							"" + userList[i]->nickname,
							"" + userList[i]->survival->timeMax
					});
				}
			}

		}




};
}
