#include "stdafx.h"
#include "ZakladKoszykarski.h"

ZakladKoszykarski::ZakladKoszykarski()
{
}

ZakladKoszykarski::ZakladKoszykarski(ObiektZakladu^ obz1, ObiektZakladu^ obz2) : Zaklad(obz1), obiektZakladu2(obz2){
	zakladId = 0;
}

Void ZakladKoszykarski::dodajNowyZaklad(){
	System::String^ tekst;
	Int16 id;
	StreamWriter^ plik = gcnew StreamWriter("BazaDanych\\druzyny.txt", true, System::Text::Encoding::Default);
	StreamReader^ plikId = gcnew StreamReader("BazaDanych\\zakladID.txt", System::Text::Encoding::Default);

	tekst = plikId->ReadToEnd()->Trim();
	id = (Int16::Parse(tekst));
	id++;

	zakladId = id;
	plikId->Close();

	StreamWriter^ plik2 = gcnew StreamWriter("BazaDanych\\zakladID.txt", false, System::Text::Encoding::Default);
	plik2->Write(id.ToString());
	plik2->Close();

	plik->WriteLine("ID=" + this->zakladId);
	plik->WriteLine(this->obiektZakladu1->getTyp());
	plik->WriteLine(this->obiektZakladu1->getNazwa1());
	plik->WriteLine(this->obiektZakladu1->getKurs1());
	plik->WriteLine(this->obiektZakladu2->getNazwa1());
	plik->WriteLine(this->obiektZakladu2->getKurs1());
	plik->WriteLine("###########");

	plik->Close();
}

Void ZakladKoszykarski::sprWyniki(Zaklad^ postawiony, Zaklad^ wynik){

}