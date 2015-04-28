#pragma once
#include "Zaklad.h"
#include "ZakladFormula1.h"
#include "Info.h"
#include "WprowadzWynikiForm.h"

namespace ZakladBukmacherski2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DodajZespolForm
	/// </summary>
	public ref class DodajZespolForm : public System::Windows::Forms::Form
	{
	public:
		DodajZespolForm(void)
		{
			InitializeComponent();
			Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
			this->Top = (ekran.Height / 2) - (this->Height / 2);
			this->Left = (ekran.Width / 2) - (this->Width / 2);
			//
			//TODO: Add the constructor code here
			//
		}
		DodajZespolForm(String^ login)
		{
			InitializeComponent();
			userLogin = login;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DodajZespolForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ userLogin;
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aAAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jakObstawiacToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dodajNowegoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  obiektZakladuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wprowadzWynikiToolStripMenuItem;
	private: System::Windows::Forms::Label^  label8;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aAAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajNowegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obiektZakladuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wprowadzWynikiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jakObstawiacToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa zespo³u/zawodnika";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(212, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Kategoria zawodów";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"pilka_nozna", L"koszykowka", L"Formula 1" });
			this->comboBox1->Location = System::Drawing::Point(338, 287);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(57, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(680, 491);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"WprowadŸ informacje o nowym zespole";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &DodajZespolForm::groupBox1_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(399, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Kurs";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(553, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(399, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Nazwa zespo³u/zawodnika";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(553, 48);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(149, 143);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(360, 106);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Opcjonalne (dodatkowe pola dla Formuly 1)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Kurs";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(203, 63);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Nazwa zespo³u/zawodnika";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(203, 24);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(234, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Dodaj druzynê/zawodnika";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodajZespolForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Kurs";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(212, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 6;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aAAToolStripMenuItem,
					this->obiektZakladuToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aAAToolStripMenuItem
			// 
			this->aAAToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dodajNowegoToolStripMenuItem });
			this->aAAToolStripMenuItem->Name = L"aAAToolStripMenuItem";
			this->aAAToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->aAAToolStripMenuItem->Text = L"Klienci";
			// 
			// dodajNowegoToolStripMenuItem
			// 
			this->dodajNowegoToolStripMenuItem->Name = L"dodajNowegoToolStripMenuItem";
			this->dodajNowegoToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->dodajNowegoToolStripMenuItem->Text = L"Dodaj nowego";
			// 
			// obiektZakladuToolStripMenuItem
			// 
			this->obiektZakladuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wprowadzWynikiToolStripMenuItem });
			this->obiektZakladuToolStripMenuItem->Name = L"obiektZakladuToolStripMenuItem";
			this->obiektZakladuToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->obiektZakladuToolStripMenuItem->Text = L"Obiekt zakladu";
			// 
			// wprowadzWynikiToolStripMenuItem
			// 
			this->wprowadzWynikiToolStripMenuItem->Name = L"wprowadzWynikiToolStripMenuItem";
			this->wprowadzWynikiToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->wprowadzWynikiToolStripMenuItem->Text = L"WprowadŸ wyniki";
			this->wprowadzWynikiToolStripMenuItem->Click += gcnew System::EventHandler(this, &DodajZespolForm::wprowadzWynikiToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->jakObstawiacToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// jakObstawiacToolStripMenuItem
			// 
			this->jakObstawiacToolStripMenuItem->Name = L"jakObstawiacToolStripMenuItem";
			this->jakObstawiacToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->jakObstawiacToolStripMenuItem->Text = L"Jak obstawiaæ";
			this->jakObstawiacToolStripMenuItem->Click += gcnew System::EventHandler(this, &DodajZespolForm::jakObstawiacToolStripMenuItem_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(581, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Zalogowany jako: ";
			// 
			// DodajZespolForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DodajZespolForm";
			this->Text = L"DodajZespolForm";
			this->Load += gcnew System::EventHandler(this, &DodajZespolForm::DodajZespolForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Zaklad^ zaklad1 = gcnew Zaklad;
		Int16 typZespolu;

		if (comboBox1->SelectedItem->ToString()->Equals("pilka_nozna")){
			typZespolu = 1;
			ZakladPilkarski^ zakPilkarski = gcnew ZakladPilkarski(gcnew ObiektZakladu(textBox1->Text, Single::Parse(textBox2->Text, CultureInfo::InvariantCulture), typZespolu),
				gcnew ObiektZakladu(textBox4->Text, Single::Parse(textBox3->Text, CultureInfo::InvariantCulture), typZespolu));
			zaklad1 = zakPilkarski;
		}
		else if (comboBox1->SelectedItem->ToString()->Equals("koszykowka")){
			typZespolu = 2;
			ZakladKoszykarski^ zakKoszykarski = gcnew ZakladKoszykarski(gcnew ObiektZakladu(textBox1->Text, Single::Parse(textBox2->Text, CultureInfo::InvariantCulture), typZespolu),
				gcnew ObiektZakladu(textBox4->Text, Single::Parse(textBox3->Text, CultureInfo::InvariantCulture), typZespolu));
			zaklad1 = zakKoszykarski;
		}
		else{
			typZespolu = 3;
			ZakladFormula1^ zakFormula1 = gcnew ZakladFormula1(gcnew ObiektZakladu(textBox1->Text, Single::Parse(textBox2->Text, CultureInfo::InvariantCulture), typZespolu),
				gcnew ObiektZakladu(textBox4->Text, Single::Parse(textBox3->Text, CultureInfo::InvariantCulture), typZespolu), 
				gcnew ObiektZakladu(textBox6->Text, Single::Parse(textBox5->Text, CultureInfo::InvariantCulture), typZespolu));
			zaklad1 = zakFormula1;
		}

		zaklad1->dodajNowyZaklad();
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void jakObstawiacToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Info^ info = gcnew Info();
	info->ShowDialog();
}
private: System::Void wprowadzWynikiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void DodajZespolForm_Load(System::Object^  sender, System::EventArgs^  e) {
	label8->Text += userLogin;
}
};
}
