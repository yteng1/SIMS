#pragma once
#include "DetailRec.h"
#include "SubRec.h"
#include "Info.h"
#include "Input.h"
#include "fcs.h"
#include "setting_form1.h"
#include "Customize.h"

namespace SIMS {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Text::RegularExpressions;


	/// <summary>
	/// Summary for homepage
	/// </summary>
	public ref class homepage : public System::Windows::Forms::Form
	{
	public:
		homepage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomForm();
			FillRadioSet();
			FilldataGrid();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~homepage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::GroupBox^  groupBox2;





	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  detailToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  detailToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  subDetailToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  fullDetailToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addRecordToolStripMenuItem;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  exportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toExcelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  connectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  customizeToolStripMenuItem;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;



	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->detailToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->detailToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->subDetailToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fullDetailToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toExcelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->connectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->NullValue = nullptr;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(179, 113);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1333, 1120);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &homepage::dataGridView1_CellContentDoubleClick);
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &homepage::dataGridView1_RowHeaderMouseClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(269, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(135, 38);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(269, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(196, 38);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(269, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(276, 38);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(269, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(161, 38);
			this->textBox4->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(27, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Total quantity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(27, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Total Weight";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(27, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Total Cost";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(27, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Average Cost";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(1651, 113);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(627, 395);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Current Summary";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton1->Location = System::Drawing::Point(37, 49);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(153, 36);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"In Stock";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &homepage::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radioButton2->Location = System::Drawing::Point(37, 103);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(213, 36);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Out Of Stock";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &homepage::radioButton2_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(1651, 590);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(360, 183);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Status";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlText;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->detailToolStripMenuItem,
					this->exportToolStripMenuItem, this->optionToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(2873, 51);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// detailToolStripMenuItem
			// 
			this->detailToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->detailToolStripMenuItem1,
					this->addRecordToolStripMenuItem
			});
			this->detailToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->detailToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::White;
			this->detailToolStripMenuItem->Name = L"detailToolStripMenuItem";
			this->detailToolStripMenuItem->Size = System::Drawing::Size(138, 45);
			this->detailToolStripMenuItem->Text = L"Manage";
			// 
			// detailToolStripMenuItem1
			// 
			this->detailToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->subDetailToolStripMenuItem1,
					this->fullDetailToolStripMenuItem1
			});
			this->detailToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->detailToolStripMenuItem1->Name = L"detailToolStripMenuItem1";
			this->detailToolStripMenuItem1->Size = System::Drawing::Size(315, 46);
			this->detailToolStripMenuItem1->Text = L"Check Record";
			// 
			// subDetailToolStripMenuItem1
			// 
			this->subDetailToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->subDetailToolStripMenuItem1->Name = L"subDetailToolStripMenuItem1";
			this->subDetailToolStripMenuItem1->Size = System::Drawing::Size(285, 46);
			this->subDetailToolStripMenuItem1->Text = L"Sub Record";
			this->subDetailToolStripMenuItem1->Click += gcnew System::EventHandler(this, &homepage::subDetailToolStripMenuItem1_Click);
			// 
			// fullDetailToolStripMenuItem1
			// 
			this->fullDetailToolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->fullDetailToolStripMenuItem1->Name = L"fullDetailToolStripMenuItem1";
			this->fullDetailToolStripMenuItem1->Size = System::Drawing::Size(285, 46);
			this->fullDetailToolStripMenuItem1->Text = L"Full Record";
			this->fullDetailToolStripMenuItem1->Click += gcnew System::EventHandler(this, &homepage::fullDetailToolStripMenuItem1_Click);
			// 
			// addRecordToolStripMenuItem
			// 
			this->addRecordToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->addRecordToolStripMenuItem->Name = L"addRecordToolStripMenuItem";
			this->addRecordToolStripMenuItem->Size = System::Drawing::Size(315, 46);
			this->addRecordToolStripMenuItem->Text = L"Add Record";
			this->addRecordToolStripMenuItem->Click += gcnew System::EventHandler(this, &homepage::addRecordToolStripMenuItem_Click);
			// 
			// exportToolStripMenuItem
			// 
			this->exportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toExcelToolStripMenuItem });
			this->exportToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->exportToolStripMenuItem->Name = L"exportToolStripMenuItem";
			this->exportToolStripMenuItem->Size = System::Drawing::Size(151, 45);
			this->exportToolStripMenuItem->Text = L"Generate";
			// 
			// toExcelToolStripMenuItem
			// 
			this->toExcelToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toExcelToolStripMenuItem->Name = L"toExcelToolStripMenuItem";
			this->toExcelToolStripMenuItem->Size = System::Drawing::Size(328, 46);
			this->toExcelToolStripMenuItem->Text = L"Export to Excel";
			this->toExcelToolStripMenuItem->Click += gcnew System::EventHandler(this, &homepage::toExcelToolStripMenuItem_Click);
			// 
			// optionToolStripMenuItem
			// 
			this->optionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->connectToolStripMenuItem,
					this->loginToolStripMenuItem, this->customizeToolStripMenuItem
			});
			this->optionToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->optionToolStripMenuItem->Name = L"optionToolStripMenuItem";
			this->optionToolStripMenuItem->Size = System::Drawing::Size(124, 45);
			this->optionToolStripMenuItem->Text = L"Setting";
			// 
			// connectToolStripMenuItem
			// 
			this->connectToolStripMenuItem->Name = L"connectToolStripMenuItem";
			this->connectToolStripMenuItem->Size = System::Drawing::Size(273, 46);
			this->connectToolStripMenuItem->Text = L"Connect";
			this->connectToolStripMenuItem->Click += gcnew System::EventHandler(this, &homepage::connectToolStripMenuItem_Click);
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(273, 46);
			this->loginToolStripMenuItem->Text = L"Login";
			// 
			// customizeToolStripMenuItem
			// 
			this->customizeToolStripMenuItem->Name = L"customizeToolStripMenuItem";
			this->customizeToolStripMenuItem->Size = System::Drawing::Size(273, 46);
			this->customizeToolStripMenuItem->Text = L"Customize";
			this->customizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &homepage::customizeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(92, 45);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(215, 46);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &homepage::aboutToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 1315);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(2873, 46);
			this->statusStrip1->TabIndex = 17;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Green;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(99, 41);
			this->toolStripStatusLabel1->Text = L"Ready";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 54);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer1->Panel2->Controls->Add(this->groupBox1);
			this->splitContainer1->Size = System::Drawing::Size(2873, 1258);
			this->splitContainer1->SplitterDistance = 405;
			this->splitContainer1->TabIndex = 18;
			// 
			// homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(2873, 1361);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"homepage";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"homepage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &homepage::homepage_FormClosing);
			this->Load += gcnew System::EventHandler(this, &homepage::homepage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void homepage_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

				 if(MessageBox::Show("Do you really want to exit?","Your Application Name",
				 MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes){
			 
					Application::Exit();
				 }
				 else
					e->Cancel = true;

			 }

	private: void FilldataGrid(void){
			 
				MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Diameter, Count(Stone_ID) as Total_Quantity,Sum(Weight) as Total_Weight,Sum(Price) as Total_Price,Sum(Price)/Sum(Weight) as Average_Cost from stoneinventory.stonetable Group by Diameter;",conDataBase);

				if(Equals(SharedData::status,L"OutOfStock"))
				{
					cmdDataBase = gcnew MySqlCommand("select Diameter, Count(StoneID) as Total_Quantity,Sum(Weight) as Total_Weight,Sum(Price) as Total_Price,Sum(Price)/Sum(Weight) as Average_Cost from stoneinventory.storagerec Group by Diameter;",conDataBase);
				}

				try{
					dataGridView1->Columns->Clear();
					MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
					sda->SelectCommand = cmdDataBase;
					DataTable^ dbdataset = gcnew DataTable();
					sda->Fill(dbdataset);
					BindingSource^ bSource = gcnew BindingSource();

					bSource->DataSource =dbdataset;
					dataGridView1->DataSource = bSource;
					dataGridView1->ClearSelection();
					sda->Update(dbdataset);

					int col_size = dataGridView1->Size.Width;
					int row_h_size = dataGridView1->RowHeadersWidth;
					for(int i=0;i<dataGridView1->Columns->Count;i++)
					{
						DataGridViewColumn^ col = dataGridView1->Columns[i];
						col->Width = (col_size-row_h_size)/(dataGridView1->Columns->Count);
					}
					//dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
					dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
					dataGridView1->Columns[4]->DefaultCellStyle->Format = L"N2";
					dataGridView1->Columns[0]->DefaultCellStyle->Format = L"N1";

					FillSummary();

				}catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				}			 
			 }

	private: void FillSummary(void){
			 
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);				 
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(Stone_ID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.stonetable;",conDataBase);

				 if(Equals(SharedData::status,L"OutOfStock"))
				 {
					cmdDataBase = gcnew MySqlCommand("select count(StoneID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.storagerec;",conDataBase);
				 }


				 MySqlDataReader^ myReader;

				 try{
					conDataBase->Open();
					myReader= cmdDataBase->ExecuteReader();

					while(myReader->Read()){

						textBox1->Text = myReader->GetInt32("num").ToString();
						double wei = myReader->GetDouble("Wei");
						textBox2->Text = wei.ToString();
						double pri = myReader->GetDouble("Pri");
						textBox3->Text = pri.ToString("C2");
						textBox4->Text = (pri/wei).ToString("C2");

					}
					conDataBase->Close();

				 }catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
					textBox1->Text = "";
					textBox2->Text = "";
					textBox3->Text = "";
					textBox4->Text = "";
				 }
			 }

	private: System::Void homepage_Load(System::Object^  sender, System::EventArgs^  e) {

				 dataGridView1->ClearSelection();
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				SharedData::status=L"InStock";
				FilldataGrid();
		 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::status=L"OutOfStock";
				 FilldataGrid();
		 }
	private: void FillRadioSet(void){
			 
				 if(Equals(SharedData::status,L"InStock")){
						radioButton1->Checked = true;//radioButton1->PerformClick();
				 }
				 else radioButton2->Checked = true;//radioButton2->PerformClick();
			 
		 }

private: System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 if(e->ColumnIndex>=0)
			 {
				//MessageBox::Show("TEST");
				SharedData::diameter = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				SubRec^ SR = gcnew SubRec();
				SR->Owner = this;
				SR->ShowDialog(this);
				if(SR->Visible == false)
				{
					refresh();
				}
			 }

		 }
private: System::Void dataGridView1_RowHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {

			 	SharedData::diameter = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				SubRec^ SR = gcnew SubRec();
				SR->Owner = this;
				SR->ShowDialog(this);
				if(SR->Visible == false)
				{
					refresh();
				}

		 }
private: System::Void subDetailToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			 	SubRec^ SR = gcnew SubRec();
				SR->Owner = this;
				SR->ShowDialog(this);
				if(SR->Visible == false)
				{
					refresh();
				}

		 }
private: System::Void fullDetailToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {

			 	DetailRec^ DR = gcnew DetailRec();
				DR->Owner = this;
				DR->ShowDialog(this);
				if(DR->Visible == false)
				{
					refresh();
				}
		 }
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				Info^ information = gcnew Info();
				information->ShowDialog();
		 }
private: System::Void addRecordToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				
				Input^ IP = gcnew Input();
				IP->Owner = this;
				IP->ShowDialog(this);
				if(IP->Visible == false)
				{
					refresh();
				}
		 }
private: void refresh(void){
			 FillRadioSet();
			 FilldataGrid();
			 CustomForm();
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			try{

				SaveFileDialog^ sfd = gcnew SaveFileDialog;
				sfd->InitialDirectory = "C:";
				sfd->Title = "Save as Excel File";
				sfd->FileName = "";
				sfd->Filter = "Excel Files(2003)|*.xls|Excel Files(2007)|*.xlsx";
				if(sfd->ShowDialog()== System::Windows::Forms::DialogResult::OK)
				{
					 toolStripStatusLabel1->Text = L"Exporting to Excel... Please wait";
					 toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;

					 Microsoft::Office::Interop::Excel::ApplicationClass^ ExcelApp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
					 ExcelApp->Application->Workbooks->Add(System::Type::Missing);

					 ExcelApp->Columns->ColumnWidth = 20;

					 Microsoft::Office::Interop::Excel::Range^ range1;

					 ExcelApp->Cells[1,1] = this->Text;
					 range1 = (Microsoft::Office::Interop::Excel::Range^)ExcelApp->Range[ExcelApp->Cells[1,1],ExcelApp->Cells[1,dataGridView1->Columns->Count]];
					 range1->MergeCells = true;
					 range1->HorizontalAlignment = Microsoft::Office::Interop::Excel::XlHAlign::xlHAlignCenter;  //excel单元格的内容居中(可以设置靠左，居中，靠右)

					 range1->Font->Size = 16;
					 range1->Font->Bold = true;
	
					for(int i=1;i<dataGridView1->Columns->Count +1;i++)
					 {
						 ExcelApp->Cells[2,i] = dataGridView1->Columns[i-1]->HeaderText;
					 }
	
					for(int i=0;i<dataGridView1->Rows->Count;i++)
					{
						 for(int j=0;j<dataGridView1->Columns->Count;j++)
						 {
							 ExcelApp->Cells[i+3,j+1] = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
						 }
					 }

					 ExcelApp->Cells[2,dataGridView1->Columns->Count +2] = label1->Text;
					 ExcelApp->Cells[3,dataGridView1->Columns->Count +2] = label2->Text;
					 ExcelApp->Cells[4,dataGridView1->Columns->Count +2] = label3->Text;
					 ExcelApp->Cells[5,dataGridView1->Columns->Count +2] = label4->Text;
					 ExcelApp->Cells[2,dataGridView1->Columns->Count +3] = textBox1->Text;
					 ExcelApp->Cells[3,dataGridView1->Columns->Count +3] = textBox2->Text;
					 ExcelApp->Cells[4,dataGridView1->Columns->Count +3] = textBox3->Text;
					 ExcelApp->Cells[5,dataGridView1->Columns->Count +3] = textBox4->Text;

					 ExcelApp->ActiveWorkbook->SaveCopyAs(sfd->FileName->ToString());
					 ExcelApp->ActiveWorkbook->Saved = true;
					 ExcelApp->Quit();

					 toolStripStatusLabel1->Text = L"Ready";
					 toolStripStatusLabel1->ForeColor = System::Drawing::Color::Green;

				}
			}
			catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);
			}
		}


private: System::Void toExcelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		try{

				SaveFileDialog^ sfd = gcnew SaveFileDialog;
				sfd->InitialDirectory = "C:";
				sfd->Title = "Save as Excel File";
				sfd->FileName = "";
				sfd->Filter = "Excel Files(2003)|*.xls|Excel Files(2007)|*.xlsx";
				if(sfd->ShowDialog()== System::Windows::Forms::DialogResult::OK)
				{
					 toolStripStatusLabel1->Text = L"Exporting to Excel... Please wait";
					 toolStripStatusLabel1->ForeColor = System::Drawing::Color::Red;

					 Microsoft::Office::Interop::Excel::ApplicationClass^ ExcelApp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
					 ExcelApp->Application->Workbooks->Add(System::Type::Missing);

					 ExcelApp->Columns->ColumnWidth = 20;

					 Microsoft::Office::Interop::Excel::Range^ range1;

					 ExcelApp->Cells[1,1] = this->Text;
					 range1 = (Microsoft::Office::Interop::Excel::Range^)ExcelApp->Range[ExcelApp->Cells[1,1],ExcelApp->Cells[1,dataGridView1->Columns->Count]];
					 range1->MergeCells = true;
					 range1->HorizontalAlignment = Microsoft::Office::Interop::Excel::XlHAlign::xlHAlignCenter;  //excel单元格的内容居中(可以设置靠左，居中，靠右)

					 range1->Font->Size = 16;
					 range1->Font->Bold = true;
	
					for(int i=1;i<dataGridView1->Columns->Count +1;i++)
					 {
						 ExcelApp->Cells[2,i] = dataGridView1->Columns[i-1]->HeaderText;
					 }
	
					for(int i=0;i<dataGridView1->Rows->Count;i++)
					{
						 for(int j=0;j<dataGridView1->Columns->Count;j++)
						 {
							 ExcelApp->Cells[i+3,j+1] = dataGridView1->Rows[i]->Cells[j]->Value->ToString();
						 }
					 }

					 ExcelApp->Cells[2,dataGridView1->Columns->Count +2] = label1->Text;
					 ExcelApp->Cells[3,dataGridView1->Columns->Count +2] = label2->Text;
					 ExcelApp->Cells[4,dataGridView1->Columns->Count +2] = label3->Text;
					 ExcelApp->Cells[5,dataGridView1->Columns->Count +2] = label4->Text;
					 ExcelApp->Cells[2,dataGridView1->Columns->Count +3] = textBox1->Text;
					 ExcelApp->Cells[3,dataGridView1->Columns->Count +3] = textBox2->Text;
					 ExcelApp->Cells[4,dataGridView1->Columns->Count +3] = textBox3->Text;
					 ExcelApp->Cells[5,dataGridView1->Columns->Count +3] = textBox4->Text;

					 ExcelApp->ActiveWorkbook->SaveCopyAs(sfd->FileName->ToString());
					 ExcelApp->ActiveWorkbook->Saved = true;
					 ExcelApp->Quit();

					 toolStripStatusLabel1->Text = L"Ready";
					 toolStripStatusLabel1->ForeColor = System::Drawing::Color::Green;

				}
			}
			catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);
			}

		 }

	private: void CustomForm(void){
					
				 this->label1->ForeColor = fcs::Form_BG_Font_Color;
				 this->label2->ForeColor = fcs::Form_BG_Font_Color;
				 this->label3->ForeColor = fcs::Form_BG_Font_Color;
				 this->label4->ForeColor = fcs::Form_BG_Font_Color;
				 this->groupBox1->ForeColor = fcs::Form_BG_Font_Color;
				 this->groupBox2->ForeColor = fcs::Form_BG_Font_Color;
				 this->radioButton1->ForeColor = fcs::Form_BG_Font_Color;
				 this->radioButton2->ForeColor = fcs::Form_BG_Font_Color;
			 
				 this->BackColor = fcs::Form_BG_Color;
				 this->ForeColor = fcs::Form_Font_Color;

				 this->menuStrip1->BackColor = fcs::Form_Menu_BG_Color;
				 this->detailToolStripMenuItem->ForeColor = fcs::Form_Menu_Font_Color;
				 this->exportToolStripMenuItem->ForeColor = fcs::Form_Menu_Font_Color;
				 this->helpToolStripMenuItem->ForeColor = fcs::Form_Menu_Font_Color;
				 this->detailToolStripMenuItem1->ForeColor = fcs::Form_BG_Font_Color;
				 this->subDetailToolStripMenuItem1->ForeColor = fcs::Form_BG_Font_Color;
				 this->fullDetailToolStripMenuItem1->ForeColor = fcs::Form_BG_Font_Color;
				 this->addRecordToolStripMenuItem->ForeColor = fcs::Form_BG_Font_Color;
				 this->toExcelToolStripMenuItem->ForeColor = fcs::Form_BG_Font_Color;
				 this->aboutToolStripMenuItem->ForeColor = fcs::Form_BG_Font_Color;
				 this->optionToolStripMenuItem->ForeColor = fcs::Form_Menu_Font_Color;

		}

private: System::Void connectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
		setting_form^ stf1 = gcnew setting_form();
		stf1->Owner = this;
		stf1->ShowDialog(this);
		if (stf1->Visible == false)
		{
			refresh();
		}
}
private: System::Void customizeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Customize^ CT = gcnew Customize();
		CT->Owner = this;
		CT->ShowDialog(this);
		if (CT->Visible == false)
		{
			refresh();
		}
}

};


}
