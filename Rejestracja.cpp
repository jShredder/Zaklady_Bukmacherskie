#include "stdafx.h"
#include "Rejestracja.h"

Rejestracja::Rejestracja(System::String^ log1, System::String^ has1)
{
	login = log1;
	haslo = has1;
}

System::String^ Rejestracja::getLogin(){
	return login;
}

System::String^ Rejestracja::getHaslo(){
	return haslo;
}

System::Void Rejestracja::setLogin(System::String^ log1){
	login = log1;
}

System::Void Rejestracja::setHaslo(System::String^ has1){
	haslo = has1;
}

System::Void Rejestracja::aktualizujDane(Label^% label4){
	StreamReader^ sr1 = gcnew StreamReader("BazaDanych\\logowanie.txt", System::Text::Encoding::Default);
	System::String^ spr = sr1->ReadToEnd();
	sr1->Close();

	StreamWriter^ sw1 = gcnew StreamWriter("BazaDanych\\logowanie.txt", true, System::Text::Encoding::Default);
	if (!spr->Contains(login)){
		sw1->WriteLine(login);
		sw1->WriteLine(haslo);
	}
	else{
		label4->Visible = true;
	}
	sw1->Close();
}
