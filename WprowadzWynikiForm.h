#pragma once
#include "PokazZyskiKlientow.h"

namespace ZakladBukmacherski2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WprowadzWynikiForm
	/// </summary>
	public ref class WprowadzWynikiForm : public System::Windows::Forms::Form
	{
	public:
		WprowadzWynikiForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		WprowadzWynikiForm(String^ login)
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
		~WprowadzWynikiForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ userLogin;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;












	private: System::Windows::Forms::Button^  zatwierdz;
	private: System::Windows::Forms::Label^  label3;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->zatwierdz = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(135, 85);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 231);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->RowCount = 100;
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
			this->Column3->HeaderText = L"Zespó³ 1";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Zespó³ 2";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Zespó³ 3";
			this->Column5->Name = L"Column5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(168, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(470, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Kliknij ID meczu i wprowadŸ wynik zgodny z przyjêtym standardem";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(346, 352);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Wynik:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(404, 349);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// zatwierdz
			// 
			this->zatwierdz->Location = System::Drawing::Point(364, 392);
			this->zatwierdz->Name = L"zatwierdz";
			this->zatwierdz->Size = System::Drawing::Size(75, 23);
			this->zatwierdz->TabIndex = 11;
			this->zatwierdz->Text = L"ZatwierdŸ";
			this->zatwierdz->UseVisualStyleBackColor = true;
			this->zatwierdz->Click += gcnew System::EventHandler(this, &WprowadzWynikiForm::zatwierdz_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(624, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Zalogowany jako: ";
			// 
			// WprowadzWynikiForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 562);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->zatwierdz);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"WprowadzWynikiForm";
			this->Text = L"WprowadzWynikiForm";
			this->Load += gcnew System::EventHandler(this, &WprowadzWynikiForm::WprowadzWynikiForm_Load);
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
	private: System::Void WprowadzWynikiForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Rectangle ekran = System::Windows::Forms::Screen::GetBounds(this);
		this->Top = (ekran.Height / 2) - (this->Height / 2);
		this->Left = (ekran.Width / 2) - (this->Width / 2);
		wczytajDatagrid1();
		label3->Text += userLogin;
	}
private: System::Void zatwierdz_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ plik = gcnew StreamWriter("BazaDanych\\wyniki.txt", true, System::Text::Encoding::Default);
	String^ idZak;
	for each(DataGridViewCell^ dgc in dataGridView1->SelectedCells){
		idZak = dgc->Value->ToString();
	}
	plik->WriteLine(idZak);
	plik->WriteLine(textBox1->Text);
	plik->Close();
}
};
}
