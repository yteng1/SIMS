#pragma once
#include "resource.h"
#include "DetailRec.h"
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
	/// Summary for SubRec
	/// </summary>
	public ref class SubRec : public System::Windows::Forms::Form
	{
	public:
		SubRec(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomForm();
			FillDiameter();
			comboBox1->Text = SharedData::diameter;

			FillRadioSet();
			AutoSetName();

			CustFillGrid();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SubRec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  l1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SubRec::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->l1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(149, 266);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(523, 770);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SubRec::dataGridView1_CellContentDoubleClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(149, 212);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 39);
			this->comboBox1->TabIndex = 1;
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
			this->groupBox1->Location = System::Drawing::Point(760, 266);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(584, 341);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Current Summary";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(259, 251);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(137, 38);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(259, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(247, 38);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(259, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(169, 38);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(259, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(119, 38);
			this->textBox1->TabIndex = 13;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Total Cost";
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Total Quantity";
			// 
			// l1
			// 
			this->l1->AutoSize = true;
			this->l1->Font = (gcnew System::Drawing::Font(L"SimSun", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->l1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"l1.Image")));
			this->l1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->l1->Location = System::Drawing::Point(370, 163);
			this->l1->Name = L"l1";
			this->l1->Size = System::Drawing::Size(302, 88);
			this->l1->TabIndex = 19;
			this->l1->Text = L"      ";
			this->l1->Click += gcnew System::EventHandler(this, &SubRec::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(760, 635);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(283, 165);
			this->groupBox2->TabIndex = 20;
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &SubRec::radioButton2_CheckedChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &SubRec::radioButton1_CheckedChanged);
			// 
			// SubRec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1589, 1113);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->l1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SubRec";
			this->Text = L"SubRec";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void CustFillGrid(void){
				 
				MySqlConnection^ conDataBase1 = gcnew MySqlConnection(SharedData::constring);
				double di = System::Double::Parse(comboBox1->Text);
				MySqlCommand^ cmdDataBase1 = gcnew MySqlCommand("select Type1,count(Stone_ID) as num from stoneinventory.stonetable where Diameter="+di+" and Type2='VS' group by Type1;",conDataBase1);
				MySqlCommand^ cmdDataBase2 = gcnew MySqlCommand("select Type1,count(Stone_ID) as num from stoneinventory.stonetable where Diameter="+di+" and Type2='SI' group by Type1;",conDataBase1);
				MySqlCommand^ cmdDataBase3 = gcnew MySqlCommand("select Type1,count(Stone_ID) as num from stoneinventory.stonetable where Diameter="+di+" and Type2='I' group by Type1;",conDataBase1);
				MySqlCommand^ cmdDataBase4 = gcnew MySqlCommand("select Type1,count(Stone_ID) as num from stoneinventory.stonetable where Diameter="+di+" group by Type1;",conDataBase1);
				MySqlDataReader^ myReader1;

				if (Equals(SharedData::status,L"OutOfStock"))
				{
					cmdDataBase1 = gcnew MySqlCommand("select Type1,count(StoneID) as num from stoneinventory.storagerec where Diameter="+di+" and Type2='VS' group by Type1;",conDataBase1);
					cmdDataBase2 = gcnew MySqlCommand("select Type1,count(StoneID) as num from stoneinventory.storagerec where Diameter="+di+" and Type2='SI' group by Type1;",conDataBase1);
					cmdDataBase3 = gcnew MySqlCommand("select Type1,count(StoneID) as num from stoneinventory.storagerec where Diameter="+di+" and Type2='I' group by Type1;",conDataBase1);
					cmdDataBase4 = gcnew MySqlCommand("select Type1,count(StoneID) as num from stoneinventory.storagerec where Diameter="+di+" group by Type1;",conDataBase1);
				}

				try{
					AutoSetName();
					dataGridView1->Columns->Clear();
					conDataBase1->Open();

					myReader1= cmdDataBase4->ExecuteReader();

					dataGridView1->RowHeadersVisible = false;
					int col_size = dataGridView1->Size.Width;

					dataGridView1->Columns->Add("T1","");
					dataGridView1->Columns->Add("VS","VS");
					dataGridView1->Columns->Add("SI","SI");
					dataGridView1->Columns->Add("I","I");

					for(int i=0;i<4;i++)
					{
						DataGridViewColumn^ col = dataGridView1->Columns[i];
						col->Width = col_size/4;
					}

					while(myReader1->Read()){
					
						System::String^ vT1;
						vT1 = myReader1->GetString("Type1");
						dataGridView1->Rows->Add(vT1,"0","0","0");
					
					}
					conDataBase1->Close();
					int col = dataGridView1->RowCount;

					conDataBase1->Open();
					myReader1= cmdDataBase1->ExecuteReader();

					int i=0;

					while(myReader1->Read()){

							System::String^ vN;
							vN = myReader1->GetString("Type1");
						
							while(Equals(vN,dataGridView1->Rows[i]->Cells[0]->Value)==false)
							{
								i++;
							}
							System::String^ vTT1;
							vTT1 = myReader1->GetInt32("num").ToString();

							dataGridView1->Rows[i]->Cells[1]->Value = vTT1;

					}
					conDataBase1->Close();

					conDataBase1->Open();
					myReader1= cmdDataBase2->ExecuteReader();

					i=0;
					while(myReader1->Read()){

							System::String^ vN;
							vN = myReader1->GetString("Type1");
						
							while(Equals(vN,dataGridView1->Rows[i]->Cells[0]->Value)==false)
							{
								i++;
							}
							System::String^ vTT2;
							vTT2 = myReader1->GetInt32("num").ToString();

							dataGridView1->Rows[i]->Cells[2]->Value = vTT2;
							

					}

					conDataBase1->Close();
					conDataBase1->Open();
					myReader1= cmdDataBase3->ExecuteReader();

					i=0;
					while(myReader1->Read()){

							System::String^ vN;
							vN = myReader1->GetString("Type1");
						
							while(Equals(vN,dataGridView1->Rows[i]->Cells[0]->Value)==false)
							{
								i++;
							}
							System::String^ vTT3;
							vTT3 = myReader1->GetInt32("num").ToString();

							dataGridView1->Rows[i]->Cells[3]->Value = vTT3;

					}


					dataGridView1->ClearSelection();

					dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;

					FillSummary();


				}catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				}

		}
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

	private: void FillSummary(void){
			 
				 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 double di = System::Double::Parse(comboBox1->Text);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(Stone_ID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.stonetable where Diameter="+di+";",conDataBase);

				 if(Equals(SharedData::status,L"OutOfStock"))
				 {
					cmdDataBase = gcnew MySqlCommand("select count(StoneID) as num, sum(Weight) as Wei, sum(Price) as Pri from stoneinventory.storagerec where Diameter="+di+";",conDataBase);
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





	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 SharedData::diameter = comboBox1->Text;
				 CustFillGrid();
			 }
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::status = L"InStock";
				 CustFillGrid();
		 }
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 SharedData::status = L"OutOfStock";
				 CustFillGrid();
				
		 }
	private: void FillRadioSet(void){
			 
				 if(Equals(SharedData::status,L"InStock")){
						radioButton1->Checked = true;//radioButton1->PerformClick();
				 }
				 else radioButton2->Checked = true;//radioButton2->PerformClick();	 
			 
		 }
	private: void AutoSetName(void){
			 
				 this->Text = L""+comboBox1->Text+"  "+SharedData::status+"  Record";	 
		 }

private: System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 if(e->RowIndex>=0 && e->ColumnIndex>0)
			 {
				SharedData::type1 = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				SharedData::type2 = dataGridView1->Columns[e->ColumnIndex]->HeaderText;
				DetailRec^ DR = gcnew DetailRec();
				DR->Owner = this;
				DR->ShowDialog(this);
				if(DR->Visible == false)
				{
					refresh();
				}
			 }

		 }
private: void refresh(void){

			 CustFillGrid();
			 FillDiameter();
			 AutoSetName();
			 comboBox1->Text = SharedData::diameter;
			 FillRadioSet();
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
				 
			
		}
};
}
