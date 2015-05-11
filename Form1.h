
#pragma once
#include "Logowanie.h"
namespace ZakladBukmacherski2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
			this->Top = (ekran.Height / 2) - (this->Height / 2);
			this->Left = (ekran.Width / 2) - (this->Width / 2);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;






	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Castellar", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(108, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(591, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zak³ady Bukmacherskie";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(371, 183);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(281, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(281, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Has³o";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(371, 240);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(285, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Logowanie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(396, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Rejestracja";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(259, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(263, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Uzytkownik o podanym loginie znajduje siê ju¿ w bazie";
			this->label4->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Zak³ady bukmacherskie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ regForm = gcnew Form;
		Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
		regForm->Top = (ekran.Height / 2) - (this->Height / 2);
		regForm->Left = (ekran.Width / 2) - (this->Width / 2);
		regForm->Width = 500;
		regForm->Height = 400;
		regForm->BackColor = Color::LightBlue;
		// pole tekstowe
		Label^ label3 = gcnew Label;
		label3->Text = "Rejestracja";
		label3->Location = Point(150, 50);
		label3->Width = 200;
		label3->Height = 40;
		label3->Font = gcnew System::Drawing::Font(label3->Font->FontFamily, 24);

		Label^ label1 = gcnew Label;
		label1->Text = "Login";
		label1->Location = Point(100, 150);
		TextBox^ textbox3 = gcnew TextBox;
		textbox3->Width = 190;
		textbox3->Location = Point(200, 150);

		Label^ label2 = gcnew Label;
		label2->Text = "Has³o";
		label2->Location = Point(100, 200);
		TextBox^ textbox4 = gcnew TextBox;
		textbox4->Width = 190;
		textbox4->Location = Point(200, 200);
		textbox4->PasswordChar = '*';

		Button^ przycisk1 = gcnew Button;
		przycisk1->Text = "Zarejestruj";
		przycisk1->Location = Point(200, 250);

		regForm->Controls->Add(label3);
		regForm->Controls->Add(label1);
		regForm->Controls->Add(textbox3);
		regForm->Controls->Add(label2);
		regForm->Controls->Add(textbox4);
		regForm->Controls->Add(przycisk1);

		przycisk1->DialogResult = System::Windows::Forms::DialogResult::OK;
		regForm->ShowDialog();
		Rejestracja^ rejestracja = gcnew Rejestracja(textbox3->Text, textbox4->Text);
		rejestracja->aktualizujDane(label4);
	}
			 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Logowanie^ logowanie = gcnew Logowanie(textBox1->Text, textBox2->Text);

		if (logowanie->weryfikujDane(this)){			
			this->Hide();
		}
		else{
			label4->Text = "Wprowadzone dane s¹ nieprawid³owe. Spróbuj ponownie.";
			label4->Visible = true;
		}
	}
};
}

