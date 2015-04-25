#include "stdafx.h"
#include "Logowanie.h"

Logowanie::Logowanie(System::String^ log1, System::String^ has1) : Rejestracja(log1, has1)
{
}

System::Boolean Logowanie::weryfikujDane(){
	StreamReader^ sr1 = gcnew StreamReader("BazaDanych\\logowanie.txt", System::Text::Encoding::Default);
	ZakladBukmacherski2::Form2^ form2;
	System::String^ str;
	System::Boolean isCorrect = false;

	while ((str = sr1->ReadLine()) != nullptr){
		if (str->Equals(getLogin())){
			str = sr1->ReadLine();
			if (str->Equals(getHaslo())){
				form2 = gcnew ZakladBukmacherski2::Form2(getLogin());
				form2->Show();
				isCorrect = true;
			}
		}
	}
	sr1->Close();
	return isCorrect;
}
