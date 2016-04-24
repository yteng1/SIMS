#pragma once
#include "resource.h"
#include "SpecAdd.h"
#include "fcs.h"
namespace SIMS {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for DetailRec
	/// </summary>
	public ref class DetailRec : public System::Windows::Forms::Form
	{
	public:
		DetailRec(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomForm();
			FillDiameter();
			Filltype1();
			Filltype2();

			comboBox1->Text = SharedData::diameter;
			comboBox2->Text = SharedData::type1;
			comboBox3->Text = SharedData::type2;

			FillRadioSet();

			dataGridFill();

		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailRec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  l1;
	private: System::Windows::Forms::Label^  l2;
	private: System::Windows::Forms::Label^  l3;




	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  l4;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;




	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Button^  button3;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DetailRec::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->l2 = (gcnew System::Windows::Forms::Label());
			this->l3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->l4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(32, 274);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1440, 793);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1440, 793);
			this->dataGridView1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(301, 0);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(148, 54);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::MenuBar;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(547, 0);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(148, 54);
			this->comboBox3->TabIndex = 3;
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l1->ForeColor = System::Drawing::Color::White;
			this->l1->Location = System::Drawing::Point(155, 10);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(134, 46);
			this->l1->TabIndex = 4;
			this->l1->Text = L"mm  --";
			// 
			// l2
			// 
			this->l2->AutoSize = true;
			this->l2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::Color::White;
			this->l2->Location = System::Drawing::Point(448, 10);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(90, 46);
			this->l2->TabIndex = 5;
			this->l2->Text = L"  --  ";
			// 
			// l3
			// 
			this->l3->AutoSize = true;
			this->l3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l3->ForeColor = System::Drawing::Color::White;
			this->l3->Location = System::Drawing::Point(739, 10);
			this->l3->Name = L"l3";
			this->l3->Size = System::Drawing::Size(150, 46);
			this->l3->TabIndex = 7;
			this->l3->Text = L"Record";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->l4);
			this->panel2->Controls->Add(this->l3);
			this->panel2->Controls->Add(this->l2);
			this->panel2->Controls->Add(this->l1);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Location = System::Drawing::Point(32, 201);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1440, 67);
			this->panel2->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(5, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 54);
			this->comboBox1->TabIndex = 9;
			// 
			// l4
			// 
			this->l4->AutoSize = true;
			this->l4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->l4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"l4.Image")));
			this->l4->Location = System::Drawing::Point(1336, 26);
			this->l4->Name = L"l4";
			this->l4->Size = System::Drawing::Size(36, 32);
			this->l4->TabIndex = 8;
			this->l4->Text = L"   ";
			this->l4->Click += gcnew System::EventHandler(this, &DetailRec::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Total Quantity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Total Weight";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Total Cost";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 32);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Average Cost";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(261, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(124, 38);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(261, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(177, 38);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(261, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(223, 38);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(261, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(132, 38);
			this->textBox4->TabIndex = 16;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(1523, 201);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(549, 369);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Current Summary";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Desktop;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(1549, 922);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 59);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Withdraw";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DetailRec::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(1523, 604);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(365, 181);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Status";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(37, 108);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(213, 36);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Out Of Stock";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &DetailRec::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(37, 49);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(153, 36);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"In Stock";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &DetailRec::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(1549, 858);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 59);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DetailRec::button2_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(40, 40);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 1147);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(2192, 46);
			this->statusStrip1->TabIndex = 21;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &DetailRec::statusStrip1_ItemClicked);
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Green;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(99, 41);
			this->toolStripStatusLabel1->Text = L"Ready";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1545, 992);
			this->button3->Margin = System::Windows::Forms::Padding(8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(450, 132);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Export to Excel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DetailRec::button3_Click);
			// 
			// DetailRec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(2192, 1193);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"DetailRec";
			this->Text = L"DetailRec";
			this->Load += gcnew System::EventHandler(this, &DetailRec::DetailRec_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void FillDiameter(void){
				
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Diameter from stoneinventory.stonetable group by Diameter;",conDataBase);
				 MySqlDataReader^ myReader;

				 try{
					conDataBase->Open();
					myReader= cmdDataBase->ExecuteReader();
					comboBox1->Items->Clear();

					while(myReader->Read()){

						System::String^ vD;
						float v1 = myReader->GetFloat("Diameter");
						vD = v1.ToString("f1");

						comboBox1->Items->Add(vD);

					}

				 }catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				 }
			 
			 }

	private: void Filltype1(void){
				
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Type1 from stoneinventory.stonetable group by Type1;",conDataBase);
				 MySqlDataReader^ myReader;

				 try{
					conDataBase->Open();
					myReader= cmdDataBase->ExecuteReader();
					comboBox2->Items->Clear();

					while(myReader->Read()){

						System::String^ vT1;
						vT1 = myReader->GetString("Type1");

						comboBox2->Items->Add(vT1);
						
					}

				 }catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				 }
			 
			 }

	private: void Filltype2(void){
				
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Type2 from stoneinventory.stonetable group by Type2;",conDataBase);
				 MySqlDataReader^ myReader;

				 try{
					conDataBase->Open();
					myReader= cmdDataBase->ExecuteReader();
					comboBox3->Items->Clear();

					while(myReader->Read()){

						System::String^ vT2;
						vT2 = myReader->GetString("Type2");

						comboBox3->Items->Add(vT2);
					}

				 }catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				 }
			 
			 }


	private: void dataGridFill(void) {

			 	MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				double di = System::Double::Parse(comboBox1->Text);
				MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select Stone_ID,Weight,Price,Cost,InTime from stoneinventory.stonetable where Diameter="+di+" and Type1='"+comboBox2->Text+"'and Type2='"+comboBox3->Text+"';",conDataBase);
				this->button2->Enabled = true;
				//this->button2->BackColor = System::Drawing::SystemColors::Desktop;
				this->button1->Enabled = true;
				//this->button1->BackColor = System::Drawing::SystemColors::Desktop;

				if (Equals(SharedData::status,L"OutOfStock"))
				{
					cmdDataBase = gcnew MySqlCommand("select StoneID,Weight,Price,Cost,InTime,OutTime from stoneinventory.storagerec where Diameter="+di+" and Type1='"+comboBox2->Text+"'and Type2='"+comboBox3->Text+"';",conDataBase);
					this->button1->Enabled = false;
					//this->button1->BackColor = System::Drawing::SystemColors::Control;
					this->button2->Enabled = false;
					//this->button2->BackColor = System::Drawing::SystemColors::Control;
				}

				try{
					AutoSetName();
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

					dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
					dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;

					FillSummary();



				}catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				}


		 }

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::diameter = comboBox1->Text;
				 SharedData::type1 = comboBox2->Text;
				 SharedData::type2 = comboBox3->Text;
				 dataGridFill();

		 }

	private: void FillSummary(void){
			 
			 	 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 double di = System::Double::Parse(comboBox1->Text);
				 
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(Stone_ID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.stonetable where Diameter="+di+" and Type1='"+comboBox2->Text+"'and Type2='"+comboBox3->Text+"';",conDataBase);

				 if (Equals(SharedData::status,L"OutOfStock"))
				 {
					cmdDataBase = gcnew MySqlCommand("select count(StoneID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.storagerec where Diameter="+di+" and Type1='"+comboBox2->Text+"'and Type2='"+comboBox3->Text+"';",conDataBase);
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

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(dataGridView1->SelectedRows->Count>0)
			 {
				 System::String^ ID = dataGridView1->SelectedRows[0]->Cells["Stone_ID"]->Value->ToString();

				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Insert into stoneinventory.storagerec(StoneID,Diameter,Weight,Cost,Price,Type1,Type2,InTime) select * from stoneinventory.stonetable where Stone_ID= '"+ID+"';\
					 delete from stoneinventory.stonetable where Stone_ID= '"+ID+"';",conDataBase);
				 try{

					if(MessageBox::Show("Do you want to withdraw Stone "+ID+"?","Check Again",
						MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
					{
						conDataBase->Open();
						cmdDataBase->ExecuteReader();
						
						MessageBox::Show("Withdraw Compeleted");
						dataGridFill();
					}					

				 }catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				 }

			 }
			 else MessageBox::Show("Please select one row first");
		 }

	private: System::Void DetailRec_Load(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView1->ClearSelection();
		 }

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::status = L"InStock";
				 dataGridFill();
		 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::status = L"OutOfStock";
				 dataGridFill();
		 }
	private: void FillRadioSet(void){
			 
				 if(Equals(SharedData::status,L"InStock")){
						radioButton1->Checked = true;//radioButton1->PerformClick();
				 }
				 else radioButton2->Checked = true;//radioButton2->PerformClick();	 
			 
		 }
	private: void AutoSetName(void){
			 
				 this->Text = L""+comboBox1->Text+"--"+comboBox2->Text+"--"+comboBox3->Text+"  "+SharedData::status+"  Record";	 
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 SpecAdd^ SA = gcnew SpecAdd();
			 SA->Owner = this;
			 SA->ShowDialog(this);
			 if(SA ->Visible == false){
				rfs();
			 }

		 }

public: void rfs(void){
			dataGridFill();
			CustomForm();
		}
private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

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

	private:void CustomForm(void){
			
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
				 
				 this->l1->ForeColor = fcs::Form_Menu_Font_Color;
				 this->l2->ForeColor = fcs::Form_Menu_Font_Color;
				 this->l3->ForeColor = fcs::Form_Menu_Font_Color;
				 this->panel2->ForeColor = fcs::Form_Menu_BG_Color;
				 this->panel2->BackColor = fcs::Form_Menu_BG_Color;

				 this->button1->BackColor = fcs::Form_BUTT_Color;
				 this->button2->BackColor = fcs::Form_BUTT_Color;
				 this->button3->BackColor = fcs::Form_BUTT_Color;
				 this->button1->ForeColor = fcs::Form_BUTT_Font_Color;
				 this->button2->ForeColor = fcs::Form_BUTT_Font_Color;
				 this->button3->ForeColor = fcs::Form_BUTT_Font_Color;
			
		}

};
}

