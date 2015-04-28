#pragma once
#include "stdafx.h"
#include "DodajZespolForm.h"
#include "Klient.h"

namespace ZakladBukmacherski2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{

	public:
		Form2(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		Form2(String^ login)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^  label1;
		String^ userLogin;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  klienciToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dodajNowegoToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;




	private: System::Windows::Forms::ToolStripMenuItem^  obiektyZakładuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dodajNowyToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  zatwierdz;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jakObstawiacToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wprowadzWynikiToolStripMenuItem;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->klienciToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajNowegoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obiektyZakładuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajNowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wprowadzWynikiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jakObstawiacToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zatwierdz = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(593, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zalogowany jako: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Castellar", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(73, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(591, 44);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Zakłady Bukmacherskie";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->klienciToolStripMenuItem,
					this->obiektyZakładuToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// klienciToolStripMenuItem
			// 
			this->klienciToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dodajNowegoToolStripMenuItem });
			this->klienciToolStripMenuItem->Name = L"klienciToolStripMenuItem";
			this->klienciToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->klienciToolStripMenuItem->Text = L"Klienci";
			// 
			// dodajNowegoToolStripMenuItem
			// 
			this->dodajNowegoToolStripMenuItem->Name = L"dodajNowegoToolStripMenuItem";
			this->dodajNowegoToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->dodajNowegoToolStripMenuItem->Text = L"Dodaj nowego";
			this->dodajNowegoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::dodajNowegoToolStripMenuItem_Click);
			// 
			// obiektyZakładuToolStripMenuItem
			// 
			this->obiektyZakładuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajNowyToolStripMenuItem,
					this->wprowadzWynikiToolStripMenuItem
			});
			this->obiektyZakładuToolStripMenuItem->Name = L"obiektyZakładuToolStripMenuItem";
			this->obiektyZakładuToolStripMenuItem->Size = System::Drawing::Size(103, 20);
			this->obiektyZakładuToolStripMenuItem->Text = L"Obiekty zakładu";
			// 
			// dodajNowyToolStripMenuItem
			// 
			this->dodajNowyToolStripMenuItem->Name = L"dodajNowyToolStripMenuItem";
			this->dodajNowyToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->dodajNowyToolStripMenuItem->Text = L"Dodaj nowy";
			this->dodajNowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::dodajNowyToolStripMenuItem_Click);
			// 
			// wprowadzWynikiToolStripMenuItem
			// 
			this->wprowadzWynikiToolStripMenuItem->Name = L"wprowadzWynikiToolStripMenuItem";
			this->wprowadzWynikiToolStripMenuItem->Size = System::Drawing::Size(167, 22);
			this->wprowadzWynikiToolStripMenuItem->Text = L"Wprowadz wyniki";
			this->wprowadzWynikiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::wprowadzWynikiToolStripMenuItem_Click);
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
			this->jakObstawiacToolStripMenuItem->Text = L"Jak obstawiać";
			this->jakObstawiacToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::jakObstawiacToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(269, 112);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 109);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Informacje o kliencie";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(86, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Telefon:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Nazwisko:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Imię:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->zatwierdz);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(33, 281);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(723, 269);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Wprowad informacje o nowym zakładzie";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(9, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Ztwierd dane";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 146);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 7;
			this->toolTip1->SetToolTip(this->textBox5, L"Wpisz odpowiednie oznaczenie: 1 - wygrana pierwszej drużyny, 2 - wygrana drugiej "
				L"drużyny, 0 - remis");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 149);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Kwota zakładu:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(173, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 231);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Rodzaj zakladu";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Zespół 1";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Zespół 2";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Zespół 3";
			this->Column5->Name = L"Column5";
			// 
			// zatwierdz
			// 
			this->zatwierdz->Enabled = false;
			this->zatwierdz->Location = System::Drawing::Point(9, 183);
			this->zatwierdz->Name = L"zatwierdz";
			this->zatwierdz->Size = System::Drawing::Size(128, 23);
			this->zatwierdz->TabIndex = 4;
			this->zatwierdz->Text = L"Dodaj kolejny";
			this->zatwierdz->UseVisualStyleBackColor = true;
			this->zatwierdz->Click += gcnew System::EventHandler(this, &Form2::dodajZaklad_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(104, 118);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 20);
			this->textBox4->TabIndex = 3;
			this->toolTip1->SetToolTip(this->textBox4, L"Wpisz odpowiednie oznaczenie: 1 - wygrana pierwszej drużyny, 2 - wygrana drugiej "
				L"drużyny, 0 - remis");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Obstawiany wynik:";
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"sdfdsfsdfsdf";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Dodaj Klienta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::dodaj_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: Void wczytajDatagrid1(){
		StreamReader^ plik1 = gcnew StreamReader("BazaDanych\\zakladID.txt", System::Text::Encoding::Default);
		StreamReader^ plik2 = gcnew StreamReader("BazaDanych\\druzyny.txt", System::Text::Encoding::Default);
		Int16 liczbaZakladow = Int16::Parse(plik1->ReadToEnd()->Trim());
		Int16 typ;
		plik1->Close();

		for (Int16 i = 0; i < liczbaZakladow; i++){
			dataGridView1->Rows[i]->Cells[0]->Value = plik2->ReadLine();	//id
			typ = Int16::Parse(plik2->ReadLine());//typ
			switch (typ){
			case 1:
				dataGridView1->Rows[i]->Cells[2]->Value = plik2->ReadLine();	//z1
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[3]->Value = plik2->ReadLine();	//z2
				dataGridView1->Rows[i]->Cells[4]->Value = "";	//z3
				plik2->ReadLine();
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[1]->Value = "pilka nozna";	//z3
				break;
			case 2:
				dataGridView1->Rows[i]->Cells[2]->Value = plik2->ReadLine();	//z1
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[3]->Value = plik2->ReadLine();	//z2
				dataGridView1->Rows[i]->Cells[4]->Value = "";	//z3
				plik2->ReadLine();
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[1]->Value = "koszykowka";	//z3
				break;
			case 3:
				dataGridView1->Rows[i]->Cells[2]->Value = plik2->ReadLine();	//z1
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[3]->Value = plik2->ReadLine();	//z2
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[4]->Value = plik2->ReadLine();	//z3
				plik2->ReadLine();
				plik2->ReadLine();
				dataGridView1->Rows[i]->Cells[1]->Value = "Formula 1";	//z3
				break;
			}

		}
		plik2->Close();
	}
#pragma endregion
			 PostawionyZaklad^ postawionyZaklad1;
			 Klient^ klient1;
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
		this->Top = (ekran.Height / 2) - (this->Height / 2);
		this->Left = (ekran.Width / 2) - (this->Width / 2);
		label1->Text += userLogin;
		this->dataGridView1->RowCount = 100;
		wczytajDatagrid1();
	}

	private: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

	}

	private: System::Void dodajNowegoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void dodajNowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		DodajZespolForm^ dodajZespolForm = gcnew DodajZespolForm(userLogin);
		
		//this->Hide();
		dodajZespolForm->Show();
		
		//ZakladBukmacherski2::Form2^ form2;
	}
	private: System::Void dodajZaklad_Click(System::Object^  sender, System::EventArgs^  e) {
		//label2->Text = dataGridView1->SelectedCells->
		for each(DataGridViewCell^ dgc in dataGridView1->SelectedCells){
			label2->Text = dgc->Value->ToString();
		}
		//StreamWriter^ plik1 = gcnew StreamWriter("BazaDanych\\klienci.txt", true, System::Text::Encoding::Default);
		//zapis do pliku ID zakładu
		String^ idZak;
		for each(DataGridViewCell^ dgc in dataGridView1->SelectedCells){
			idZak = dgc->Value->ToString();
		}
		//plik1->WriteLine(idZak);
		PostawionyZaklad^ postawionyZaklad = gcnew PostawionyZaklad(idZak, Single::Parse(textBox5->Text, CultureInfo::InvariantCulture), textBox4->Text);
		klient1->uzupelnijListeZakladow(postawionyZaklad);
		//plik1->WriteLine(textBox4->Text);
		//plik1->WriteLine(textBox5->Text);
		//plik1->Close();
	}
	private: System::Void dodaj_Click(System::Object^  sender, System::EventArgs^  e) {
		zatwierdz->Enabled = true;
		button2->Enabled = true;
		klient1 = gcnew Klient(textBox1->Text, textBox2->Text, textBox3->Text);
		StreamWriter^ plik1 = gcnew StreamWriter("BazaDanych\\klienci.txt", true, System::Text::Encoding::Default);
		plik1->WriteLine(klient1->getImie());
		plik1->WriteLine(klient1->getNazwisko());
		plik1->WriteLine(klient1->getTelefon());
		plik1->WriteLine(0);
		plik1->Close();
		//klient1
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		StreamWriter^ plik1 = gcnew StreamWriter("BazaDanych\\klienci.txt", true, System::Text::Encoding::Default);
		Int16 listaCount = klient1->getListCount();

		for (Int16 i = 0; i < listaCount; i++){
			plik1->WriteLine(klient1->getListaZakladow(i)->getID_zakladu());
			plik1->WriteLine(klient1->getListaZakladow(i)->getWynik());
			plik1->WriteLine(klient1->getListaZakladow(i)->getKwota());
		}
		plik1->WriteLine("##########");
		plik1->Close();
	}
private: System::Void jakObstawiacToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Info^ info = gcnew Info();
	info->ShowDialog();
}
private: System::Void wprowadzWynikiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	WprowadzWynikiForm^ wprowadzWynikiForm = gcnew WprowadzWynikiForm(userLogin);
	wprowadzWynikiForm->Show();
}
};
}
