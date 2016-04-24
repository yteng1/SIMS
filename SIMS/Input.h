#pragma once
#include "InputData.h"
#include "resource.h"
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
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomForm();
			FillGrid();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->Location = System::Drawing::Point(64, 49);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(294, 369);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Input::dataGridView1_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(429, 67);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Diameter";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(429, 95);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Type1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(429, 125);
			this->label3->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 12);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Type2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(429, 155);
			this->label4->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 12);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Weight";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(429, 186);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Cost";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Location = System::Drawing::Point(498, 67);
			this->textBox1->Margin = System::Windows::Forms::Padding(1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 21);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->AcceptsTab = true;
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(498, 95);
			this->textBox2->Margin = System::Windows::Forms::Padding(1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(102, 14);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->AcceptsReturn = true;
			this->textBox3->AcceptsTab = true;
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(498, 125);
			this->textBox3->Margin = System::Windows::Forms::Padding(1);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(102, 14);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->AcceptsReturn = true;
			this->textBox4->AcceptsTab = true;
			this->textBox4->Location = System::Drawing::Point(498, 155);
			this->textBox4->Margin = System::Windows::Forms::Padding(1);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(102, 21);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->AcceptsReturn = true;
			this->textBox5->AcceptsTab = true;
			this->textBox5->Location = System::Drawing::Point(498, 186);
			this->textBox5->Margin = System::Windows::Forms::Padding(1);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(102, 21);
			this->textBox5->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Desktop;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(465, 232);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 27);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Input::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(657, 110);
			this->checkBox1->Margin = System::Windows::Forms::Padding(1);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(114, 16);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Enable New Type";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Input::checkBox1_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(604, 69);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 13;
			this->label6->Text = L"mm";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(604, 155);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 12);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ct";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(604, 187);
			this->label8->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 12);
			this->label8->TabIndex = 15;
			this->label8->Text = L"USD/Ct";
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(812, 457);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"Input";
			this->Text = L"Input";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void FillGrid(){

			InputData IPD;

			dataGridView1->Columns->Clear();
			int col_size = dataGridView1->Size.Width;
			int row_size = dataGridView1->Size.Height;
			dataGridView1->ColumnHeadersHeight= row_size/(1+IPD.Size_Type1());
			dataGridView1->RowHeadersWidth = (col_size) / (1 + IPD.Size_Type2());

			System::String^ t1;
			System::String^ t2;

			for(int i=0;i<IPD.Size_Type2();i++)
			{
				t1 = gcnew System::String(IPD.GetType2()[i].c_str());
				dataGridView1->Columns->Add(t1,t1);
				DataGridViewColumn^ col = dataGridView1->Columns[i];
				col->Width = (col_size)/(1+IPD.Size_Type2());
			}
			for(int i=0;i<IPD.Size_Type1();i++)
			{
				t2 = gcnew System::String(IPD.GetType1()[i].c_str());
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->HeaderCell->Value = t2;
				DataGridViewRow^ row = dataGridView1->Rows[i];
				row->Height = row_size/(1+IPD.Size_Type1());
			}
		}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 	 MySqlConnection^ conDataBase = gcnew MySqlConnection(SharedData::constring);
				 double di = System::Double::Parse(textBox1->Text);
				 double wei = System::Double::Parse(textBox4->Text);
				 double cos = System::Double::Parse(textBox5->Text);
				 MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Insert into stoneinventory.stonetable(Diameter,Weight,Cost,Type1,Type2) values("+di+","+wei+","+cos+",'"+textBox2->Text+"','"+textBox3->Text+"');",conDataBase);
				 try{
						conDataBase->Open();
						cmdDataBase->ExecuteReader();
						
						MessageBox::Show("Add Compeleted");
					}					

				 catch(System::Exception^ ex){
					MessageBox::Show(ex->Message);//catch connection error
				 }

		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(checkBox1->Checked == true)
			 {
				textBox2->ReadOnly = false;
				this->textBox2->BackColor = System::Drawing::SystemColors::Window;
				this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				textBox3->ReadOnly = false;
				this->textBox3->BackColor = System::Drawing::SystemColors::Window;
				this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			 }
			 else 
			 {
				 textBox2->ReadOnly = true;
				 this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
				 this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 textBox3->ReadOnly = true;
				 this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
				 this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			 }

		 }


private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 if(e->RowIndex>=0 && e->ColumnIndex>=0)
			 {
			   textBox2->Text = dataGridView1->Rows[e->RowIndex]->HeaderCell->Value->ToString();
			   textBox3->Text = dataGridView1->Columns[e->ColumnIndex]->HeaderText;
			 }
		 }

private:void CustomForm(void){
			
				 this->label1->ForeColor = fcs::Form_BG_Font_Color;
				 this->label2->ForeColor = fcs::Form_BG_Font_Color;
				 this->label3->ForeColor = fcs::Form_BG_Font_Color;
				 this->label4->ForeColor = fcs::Form_BG_Font_Color;
				 this->label5->ForeColor = fcs::Form_BG_Font_Color;
				 this->label6->ForeColor = fcs::Form_BG_Font_Color;
				 this->label7->ForeColor = fcs::Form_BG_Font_Color;
				 this->label8->ForeColor = fcs::Form_BG_Font_Color;
				 this->checkBox1->ForeColor = fcs::Form_BG_Font_Color;

				 this->BackColor = fcs::Form_BG_Color;
				 this->ForeColor = fcs::Form_Font_Color;	
				 

				 this->button1->BackColor = fcs::Form_BUTT_Color;
				 this->button1->ForeColor = fcs::Form_BUTT_Font_Color;
			
	}
};
}
