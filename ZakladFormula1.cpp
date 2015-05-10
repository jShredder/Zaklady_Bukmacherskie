#include "stdafx.h"
#include "ZakladFormula1.h"

ZakladFormula1::ZakladFormula1()
{
}

ZakladFormula1::ZakladFormula1(ObiektZakladu^ obz1, ObiektZakladu^ obz2, ObiektZakladu^ obz3) : Zaklad(obz1), obiektZakladu2(obz2), obiektZakladu3(obz3){
	zakladId = 1;
}

Void ZakladFormula1::dodajNowyZaklad(){
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
	plik->WriteLine(this->obiektZakladu3->getNazwa1());
	plik->WriteLine(this->obiektZakladu3->getKurs1());
	plik->WriteLine("###########");

	plik->Close();
}

Single ZakladFormula1::sprWyniki(PostawionyZaklad^ postawiony){
	StreamReader^ plikDruzyny = gcnew StreamReader("BazaDanych\\druzyny.txt", System::Text::Encoding::Default);
	StreamReader^ plikWyniki = gcnew StreamReader("BazaDanych\\wyniki.txt", System::Text::Encoding::Default);
	Single kurs1, kurs2, kurs3, zysk;
	String^ wynik;
	String^ czyKoniec;

	while (!plikDruzyny->ReadLine()->Equals(postawiony->getID_zakladu())); //szukam id zakladu
	plikDruzyny->ReadLine();//typ zakladu
	plikDruzyny->ReadLine();//nazwa pierwszego zawodnika
	kurs1 = Single::Parse(plikDruzyny->ReadLine());
	plikDruzyny->ReadLine();//nazwa drugiego zawodnika
	kurs2 = Single::Parse(plikDruzyny->ReadLine());
	plikDruzyny->ReadLine();//nazwa trzeciego zawodnika
	kurs3 = Single::Parse(plikDruzyny->ReadLine());
	plikDruzyny->Close();

	//while (!(czyKoniec = plikWyniki->ReadLine())->Equals(postawiony->getID_zakladu()) && !String::IsNullOrEmpty(czyKoniec)); //szukam id zakladu

	do{
		czyKoniec = plikWyniki->ReadLine();
		if (postawiony->getID_zakladu()->Equals(czyKoniec))
			break;
	} while (!String::IsNullOrEmpty(czyKoniec));

	if (!String::IsNullOrEmpty(czyKoniec)){
		wynik = plikWyniki->ReadLine();

		if (postawiony->getWynik()->Equals(wynik)){
			if (wynik->Equals("1")){
				zysk = postawiony->getKwota()*kurs1;
				return zysk;
			}
			else if (wynik->Equals("2")){
				zysk = postawiony->getKwota()*kurs2;
				return zysk;
			}
			else if (wynik->Equals("3")){
				zysk = postawiony->getKwota()*kurs3;
				return zysk;
			}
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}