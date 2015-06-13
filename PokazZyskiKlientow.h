#pragma once
#include "KolekcjaKlientow.h"
#include "Info.h"

namespace ZakladBukmacherski2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PokazZyskiKlientow
	/// </summary>
	public ref class PokazZyskiKlientow : public System::Windows::Forms::Form
	{
	private:
		Form^ form1;
		Form^ logowanieForm;
	private: System::Windows::Forms::ToolStripMenuItem^  wylogujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wsteczToolStripMenuItem;
			 KolekcjaKlientow^ kolekcjaKlientow1;
	public:
		PokazZyskiKlientow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PokazZyskiKlientow(String^ login, Form^ form, Form^ log)
		{
			InitializeComponent();
			userLogin = login;
			form1 = form;
			logowanieForm = log;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PokazZyskiKlientow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ userLogin;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;


	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^  jakObstawiacToolStripMenuItem;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->wsteczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jakObstawiacToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wylogujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(588, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Zalogowany jako: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(161, 126);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 150);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Imiê";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nazwisko";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Telefon";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Zysk";
			this->Column4->Name = L"Column4";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->wsteczToolStripMenuItem,
					this->pomocToolStripMenuItem, this->wylogujToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// wsteczToolStripMenuItem
			// 
			this->wsteczToolStripMenuItem->Name = L"wsteczToolStripMenuItem";
			this->wsteczToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->wsteczToolStripMenuItem->Text = L"Wstecz";
			this->wsteczToolStripMenuItem->Click += gcnew System::EventHandler(this, &PokazZyskiKlientow::wsteczToolStripMenuItem_Click);
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
			this->jakObstawiacToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->jakObstawiacToolStripMenuItem->Text = L"Jak obstawiaæ";
			this->jakObstawiacToolStripMenuItem->Click += gcnew System::EventHandler(this, &PokazZyskiKlientow::jakObstawiacToolStripMenuItem_Click);
			// 
			// wylogujToolStripMenuItem
			// 
			this->wylogujToolStripMenuItem->Name = L"wylogujToolStripMenuItem";
			this->wylogujToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->wylogujToolStripMenuItem->Text = L"Wyloguj";
			this->wylogujToolStripMenuItem->Click += gcnew System::EventHandler(this, &PokazZyskiKlientow::wylogujToolStripMenuItem_Click);
			// 
			// PokazZyskiKlientow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PokazZyskiKlientow";
			this->Text = L"PokazZyskiKlientow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &PokazZyskiKlientow::PokazZyskiKlientow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &PokazZyskiKlientow::PokazZyskiKlientow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void PokazZyskiKlientow_Load(System::Object^  sender, System::EventArgs^  e) {
		this->label1->Text += userLogin;
		this->dataGridView1->RowCount = 100;
		Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
		this->Top = (ekran.Height / 2) - (this->Height / 2);
		this->Left = (ekran.Width / 2) - (this->Width / 2);

		kolekcjaKlientow1 = gcnew KolekcjaKlientow();
		kolekcjaKlientow1->zapelnijListeKlientow();
		List<Klient^>^ listaKlientow = kolekcjaKlientow1->getKolekcja();

		Int16 typZakladu;
		Zaklad^ zaklad;

		for (Int16 i = 0; i < listaKlientow->Count; i++){

			for (Int16 j = 0; j < listaKlientow[i]->getListCount(); j++){
				StreamReader^ plikDruzyny = gcnew StreamReader("BazaDanych\\druzyny.txt", System::Text::Encoding::Default);

				while (!plikDruzyny->ReadLine()->Equals(listaKlientow[i]->getListaZakladow(j)->getID_zakladu())); //szukam id zakladu
				typZakladu = Int16::Parse(plikDruzyny->ReadLine()); //typ zak³adu 1 2 3
				plikDruzyny->Close();
				switch (typZakladu)
				{
				case 1:
					zaklad = gcnew ZakladPilkarski();
					break;
				case 2:
					zaklad = gcnew ZakladKoszykarski();
					break;
				default:
					zaklad = gcnew ZakladFormula1();
					break;
				}
				listaKlientow[i]->aktualizujZysk(zaklad->sprWyniki(listaKlientow[i]->getListaZakladow(j)));
			}
		}

		for (Int16 i = 0; i < listaKlientow->Count; i++){
			dataGridView1->Rows[i]->Cells[0]->Value = listaKlientow[i]->getImie();
			dataGridView1->Rows[i]->Cells[1]->Value = listaKlientow[i]->getNazwisko();
			dataGridView1->Rows[i]->Cells[2]->Value = listaKlientow[i]->getTelefon();
			dataGridView1->Rows[i]->Cells[3]->Value = listaKlientow[i]->getZysk();
		}
	}
	private: System::Void wylogujToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		logowanieForm->Show();
		this->Hide();
	}
private: System::Void wsteczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	form1->Show();
	this->Hide();
}
private: System::Void PokazZyskiKlientow_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	logowanieForm->Close();
}
private: System::Void jakObstawiacToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Info^ info = gcnew Info();
	info->ShowDialog();
}
};
}
