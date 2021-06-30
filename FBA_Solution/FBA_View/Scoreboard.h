#pragma once


namespace FBAView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FBAModel;
	using namespace System::Collections::Generic;
	using namespace FBAController;

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

	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank1;






	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabRank1;
	private: System::Windows::Forms::TabPage^ tabRank2;









	private: System::Windows::Forms::TabPage^ tabRank3;
	private: System::Windows::Forms::TabPage^ tabRank4;












	private: System::Windows::Forms::DataGridView^ dgvScoreRank2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank4;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridView^ dgvScoreRank3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userTabla;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ scoreTabla;






















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabRank3 = (gcnew System::Windows::Forms::TabPage());
			this->dgvScoreRank3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabRank4 = (gcnew System::Windows::Forms::TabPage());
			this->dgvScoreRank4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabRank1->SuspendLayout();
			this->tabRank2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank2))->BeginInit();
			this->tabRank3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank3))->BeginInit();
			this->tabRank4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank4))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->AllowDrop = true;
			this->splitContainer1->Panel2->AutoScroll = true;
			this->splitContainer1->Size = System::Drawing::Size(150, 100);
			this->splitContainer1->SplitterDistance = 49;
			this->splitContainer1->TabIndex = 0;
			// 
			// dgvScoreRank1
			// 
			this->dgvScoreRank1->AllowUserToAddRows = false;
			this->dgvScoreRank1->AllowUserToDeleteRows = false;
			this->dgvScoreRank1->AllowUserToResizeColumns = false;
			this->dgvScoreRank1->AllowUserToResizeRows = false;
			this->dgvScoreRank1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvScoreRank1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScoreRank1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvScoreRank1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScoreRank1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvScoreRank1->ColumnHeadersHeight = 45;
			this->dgvScoreRank1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->position,
					this->userTabla, this->scoreTabla
			});
			this->dgvScoreRank1->EnableHeadersVisualStyles = false;
			this->dgvScoreRank1->GridColor = System::Drawing::Color::Gray;
			this->dgvScoreRank1->Location = System::Drawing::Point(2, 2);
			this->dgvScoreRank1->Name = L"dgvScoreRank1";
			this->dgvScoreRank1->ReadOnly = true;
			this->dgvScoreRank1->RowHeadersVisible = false;
			this->dgvScoreRank1->RowHeadersWidth = 40;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			this->dgvScoreRank1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvScoreRank1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvScoreRank1->Size = System::Drawing::Size(936, 419);
			this->dgvScoreRank1->TabIndex = 5;
			// 
			// position
			// 
			this->position->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->position->HeaderText = L"#";
			this->position->MinimumWidth = 6;
			this->position->Name = L"position";
			this->position->ReadOnly = true;
			this->position->Width = 80;
			// 
			// userTabla
			// 
			this->userTabla->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->userTabla->HeaderText = L"Usuario";
			this->userTabla->MinimumWidth = 30;
			this->userTabla->Name = L"userTabla";
			this->userTabla->ReadOnly = true;
			// 
			// scoreTabla
			// 
			this->scoreTabla->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->scoreTabla->HeaderText = L"Puntaje más alto";
			this->scoreTabla->MinimumWidth = 150;
			this->scoreTabla->Name = L"scoreTabla";
			this->scoreTabla->ReadOnly = true;
			this->scoreTabla->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(496, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 39);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Tabla de Puntuaciones";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabRank1);
			this->tabControl1->Controls->Add(this->tabRank2);
			this->tabControl1->Controls->Add(this->tabRank3);
			this->tabControl1->Controls->Add(this->tabRank4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(150, 40);
			this->tabControl1->Location = System::Drawing::Point(212, 125);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(946, 443);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 7;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Scoreboard::tabControl1_SelectedIndexChanged);
			// 
			// tabRank1
			// 
			this->tabRank1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->tabRank1->Controls->Add(this->dgvScoreRank1);
			this->tabRank1->Location = System::Drawing::Point(4, 44);
			this->tabRank1->Margin = System::Windows::Forms::Padding(2);
			this->tabRank1->Name = L"tabRank1";
			this->tabRank1->Padding = System::Windows::Forms::Padding(2);
			this->tabRank1->Size = System::Drawing::Size(938, 395);
			this->tabRank1->TabIndex = 0;
			this->tabRank1->Text = L"Mariscal";
			// 
			// tabRank2
			// 
			this->tabRank2->Controls->Add(this->dgvScoreRank2);
			this->tabRank2->Location = System::Drawing::Point(4, 44);
			this->tabRank2->Margin = System::Windows::Forms::Padding(2);
			this->tabRank2->Name = L"tabRank2";
			this->tabRank2->Padding = System::Windows::Forms::Padding(2);
			this->tabRank2->Size = System::Drawing::Size(938, 395);
			this->tabRank2->TabIndex = 1;
			this->tabRank2->Text = L"General";
			this->tabRank2->UseVisualStyleBackColor = true;
			// 
			// dgvScoreRank2
			// 
			this->dgvScoreRank2->AllowUserToAddRows = false;
			this->dgvScoreRank2->AllowUserToDeleteRows = false;
			this->dgvScoreRank2->AllowUserToResizeColumns = false;
			this->dgvScoreRank2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dgvScoreRank2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvScoreRank2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvScoreRank2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScoreRank2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvScoreRank2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScoreRank2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvScoreRank2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13
			});
			this->dgvScoreRank2->EnableHeadersVisualStyles = false;
			this->dgvScoreRank2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank2->Location = System::Drawing::Point(34, 23);
			this->dgvScoreRank2->Name = L"dgvScoreRank2";
			this->dgvScoreRank2->RowHeadersVisible = false;
			this->dgvScoreRank2->RowHeadersWidth = 51;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank2->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvScoreRank2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvScoreRank2->Size = System::Drawing::Size(732, 230);
			this->dgvScoreRank2->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"#";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 53;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"-";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 43;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 140;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 187;
			// 
			// tabRank3
			// 
			this->tabRank3->Controls->Add(this->dgvScoreRank3);
			this->tabRank3->Location = System::Drawing::Point(4, 44);
			this->tabRank3->Margin = System::Windows::Forms::Padding(2);
			this->tabRank3->Name = L"tabRank3";
			this->tabRank3->Padding = System::Windows::Forms::Padding(2);
			this->tabRank3->Size = System::Drawing::Size(938, 395);
			this->tabRank3->TabIndex = 2;
			this->tabRank3->Text = L"Coronel";
			this->tabRank3->UseVisualStyleBackColor = true;
			// 
			// dgvScoreRank3
			// 
			this->dgvScoreRank3->AllowUserToAddRows = false;
			this->dgvScoreRank3->AllowUserToDeleteRows = false;
			this->dgvScoreRank3->AllowUserToResizeColumns = false;
			this->dgvScoreRank3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dgvScoreRank3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvScoreRank3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvScoreRank3->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScoreRank3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvScoreRank3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScoreRank3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvScoreRank3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dgvScoreRank3->EnableHeadersVisualStyles = false;
			this->dgvScoreRank3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank3->Location = System::Drawing::Point(98, 5);
			this->dgvScoreRank3->Name = L"dgvScoreRank3";
			this->dgvScoreRank3->RowHeadersVisible = false;
			this->dgvScoreRank3->RowHeadersWidth = 51;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank3->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvScoreRank3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvScoreRank3->Size = System::Drawing::Size(732, 230);
			this->dgvScoreRank3->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"#";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 53;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"-";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 43;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 140;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 187;
			// 
			// tabRank4
			// 
			this->tabRank4->Controls->Add(this->dgvScoreRank4);
			this->tabRank4->Location = System::Drawing::Point(4, 44);
			this->tabRank4->Margin = System::Windows::Forms::Padding(2);
			this->tabRank4->Name = L"tabRank4";
			this->tabRank4->Padding = System::Windows::Forms::Padding(2);
			this->tabRank4->Size = System::Drawing::Size(938, 395);
			this->tabRank4->TabIndex = 3;
			this->tabRank4->Text = L"Capitán";
			this->tabRank4->UseVisualStyleBackColor = true;
			// 
			// dgvScoreRank4
			// 
			this->dgvScoreRank4->AllowUserToAddRows = false;
			this->dgvScoreRank4->AllowUserToDeleteRows = false;
			this->dgvScoreRank4->AllowUserToResizeColumns = false;
			this->dgvScoreRank4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dgvScoreRank4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvScoreRank4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvScoreRank4->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvScoreRank4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dgvScoreRank4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(74)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvScoreRank4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dgvScoreRank4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvScoreRank4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn14
			});
			this->dgvScoreRank4->EnableHeadersVisualStyles = false;
			this->dgvScoreRank4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank4->Location = System::Drawing::Point(-7, 5);
			this->dgvScoreRank4->Name = L"dgvScoreRank4";
			this->dgvScoreRank4->RowHeadersVisible = false;
			this->dgvScoreRank4->RowHeadersWidth = 51;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->dgvScoreRank4->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dgvScoreRank4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvScoreRank4->Size = System::Drawing::Size(732, 230);
			this->dgvScoreRank4->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"#";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 53;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"-";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 43;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Usuario";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 140;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Puntaje más alto";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 187;
			// 
			// Scoreboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(1269, 820);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->Name = L"Scoreboard";
			this->Text = L"Scoreboard";
			this->Load += gcnew System::EventHandler(this, &Scoreboard::Scoreboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabRank1->ResumeLayout(false);
			this->tabRank2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank2))->EndInit();
			this->tabRank3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank3))->EndInit();
			this->tabRank4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvScoreRank4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	public:
		List <User^>^ userList = gcnew List <User^>;

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
				//if (this->medal == userList[i]::medal::Mariscal) { //CORREGIR
					int seg, min;
					seg = (userList[i]->survival->timeMax) % 60;
					min = (userList[i]->survival->timeMax) / 60;
					dgvScoreRank1->Rows->Add(gcnew array<String^> {
							""+(i + 1),
							"" + userList[i]->nickname,
							"" + (min<10? "0" : "") + min + ":" + ((seg < 10 || seg==0) ? "0" : "") + seg + " min."
					});
				//}
			}
		}

		void RefreshRank2() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank2->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("General")) { //CORREGIR
					int seg, min;
					seg = (userList[i]->survival->timeMax) % 60;
					min = (userList[i]->survival->timeMax) / 60;
					dgvScoreRank2->Rows->Add(gcnew array<String^> {
						"i+1",
							"",
							"" + userList[i]->nickname,
							"" + min + ":" + seg + " min."
					});
				}
			}

		}
		void RefreshRank3() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank3->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("Coronel")) { //CORREGIR
					int seg, min;
					seg = (userList[i]->survival->timeMax) % 60;
					min = (userList[i]->survival->timeMax) / 60;
					dgvScoreRank3->Rows->Add(gcnew array<String^> {
						"i+1",
							"",
							"" + userList[i]->nickname,
							"" + min + ":" + seg + " min."
					});
				}
			}
		}
		void RefreshRank4() {
			List <User^>^ userList = DBController::QueryAllUser(); //Comando recibir lista
			dgvScoreRank4->Rows->Clear();
			for (int i = 0; i < userList->Count; i++) {
				if (userList[i]->medal->Nombre->CompareTo("Capitan")) { //CORREGIR
					int seg, min;
					seg = (userList[i]->survival->timeMax) % 60;
					min = (userList[i]->survival->timeMax) / 60;
					dgvScoreRank4->Rows->Add(gcnew array<String^> {
							"i+1", 
							"",
							"" + userList[i]->nickname,
							"" + min + ":" + seg + " min."
					});
				}
			}

		}




private: System::Void Scoreboard_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshScores();
}

private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	RefreshScores();
}
};
}
