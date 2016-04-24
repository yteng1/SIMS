#pragma once
#include "fcs.h"

namespace SIMS {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Customize
	/// </summary>
	public ref class Customize : public System::Windows::Forms::Form
	{
	public:
		Customize(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomForm();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Customize()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(196, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Window Back Grond Color";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(196, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Window Font Color";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(196, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(345, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Button Back Ground Color";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(196, 367);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Button Font Color";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(196, 439);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(333, 32);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Menu Back Ground Color";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(196, 509);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 32);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Menu Font Color";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(196, 582);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(268, 32);
			this->label7->TabIndex = 6;
			this->label7->Text = L"DataGrid Font Color";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(620, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(173, 38);
			this->textBox1->TabIndex = 7;
			this->textBox1->Click += gcnew System::EventHandler(this, &Customize::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(620, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(173, 38);
			this->textBox2->TabIndex = 8;
			this->textBox2->Click += gcnew System::EventHandler(this, &Customize::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(620, 295);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(173, 38);
			this->textBox3->TabIndex = 9;
			this->textBox3->Click += gcnew System::EventHandler(this, &Customize::textBox3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(620, 364);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(173, 38);
			this->textBox4->TabIndex = 10;
			this->textBox4->Click += gcnew System::EventHandler(this, &Customize::textBox4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(620, 436);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(173, 38);
			this->textBox5->TabIndex = 11;
			this->textBox5->Click += gcnew System::EventHandler(this, &Customize::textBox5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(620, 506);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(173, 38);
			this->textBox6->TabIndex = 12;
			this->textBox6->Click += gcnew System::EventHandler(this, &Customize::textBox6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(620, 579);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(173, 38);
			this->textBox7->TabIndex = 13;
			this->textBox7->Click += gcnew System::EventHandler(this, &Customize::textBox7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(732, 703);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 52);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Apply";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Customize::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(556, 703);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 52);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Customize::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(141, 703);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 52);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Set Default";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Customize::button3_Click);
			// 
			// Customize
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 952);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Customize";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Customize";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void SetColor(System::Windows::Forms::TextBox^ tb) {
		ColorDialog^ CD = gcnew ColorDialog();

		if (CD->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			tb->BackColor = CD->Color;
		}

	}

private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox1);
	}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox2);
	}
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox3);
	}
private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox4);
	}
private: System::Void textBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox5);
	}
private: System::Void textBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox6);
	}
private: System::Void textBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		SetColor(textBox7);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		fcs::Form_BG_Color = textBox1->BackColor;
		fcs::Form_BG_Font_Color = textBox2->BackColor;
		fcs::Form_BUTT_Color = textBox3->BackColor;
		fcs::Form_BUTT_Font_Color = textBox4->BackColor;
		fcs::Form_Menu_BG_Color = textBox5->BackColor;
		fcs::Form_Menu_Font_Color = textBox6->BackColor;
		fcs::Form_Font_Color = textBox7->BackColor;

		CustomForm();
		System::Windows::Forms::MessageBox::Show("Applied");
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		fcs::Form_BG_Color = SystemColors::GradientActiveCaption;
		fcs::Form_BG_Font_Color = SystemColors::ControlText;
		fcs::Form_BUTT_Color = SystemColors::ControlText;
		fcs::Form_BUTT_Font_Color = SystemColors::ControlLightLight;
		fcs::Form_Menu_BG_Color = Color::Black;
		fcs::Form_Menu_Font_Color = SystemColors::ControlLightLight;
		fcs::Form_Font_Color = SystemColors::ControlText;

		fcs::Col2Hex();
		INI::SaveStyle();
		CustomForm();
		System::Windows::Forms::MessageBox::Show("Successed!");
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		fcs::Col2Hex();
		INI::SaveStyle();
		System::Windows::Forms::MessageBox::Show("Saved");
	}
private: void CustomForm(void) {
		this->label1->ForeColor = fcs::Form_BG_Font_Color;
		this->label2->ForeColor = fcs::Form_BG_Font_Color;
		this->label3->ForeColor = fcs::Form_BG_Font_Color;
		this->label4->ForeColor = fcs::Form_BG_Font_Color;
		this->label5->ForeColor = fcs::Form_BG_Font_Color;
		this->label6->ForeColor = fcs::Form_BG_Font_Color;
		this->label7->ForeColor = fcs::Form_BG_Font_Color;

		this->button1->BackColor = fcs::Form_BUTT_Color;
		this->button1->ForeColor = fcs::Form_BUTT_Font_Color;
		this->button2->BackColor = fcs::Form_BUTT_Color;
		this->button2->ForeColor = fcs::Form_BUTT_Font_Color;
		this->button3->BackColor = fcs::Form_BUTT_Color;
		this->button3->ForeColor = fcs::Form_BUTT_Font_Color;

		this->textBox1->BackColor = fcs::Form_BG_Color;
		this->textBox2->BackColor = fcs::Form_BG_Font_Color;
		this->textBox3->BackColor = fcs::Form_BUTT_Color;
		this->textBox4->BackColor = fcs::Form_BUTT_Font_Color;
		this->textBox5->BackColor = fcs::Form_Menu_BG_Color;
		this->textBox6->BackColor = fcs::Form_Menu_Font_Color;
		this->textBox7->BackColor = fcs::Form_Font_Color;

		this->BackColor = fcs::Form_BG_Color;
		this->ForeColor = fcs::Form_Font_Color;
	}
};
}
