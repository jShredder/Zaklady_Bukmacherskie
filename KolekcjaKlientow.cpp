#include "stdafx.h"
#include "KolekcjaKlientow.h"

KolekcjaKlientow::KolekcjaKlientow()
{

}

List<Klient^>^ KolekcjaKlientow::getKolekcja(){
	return listaKlientow;
}

Void KolekcjaKlientow::zapelnijListeKlientow(){
	StreamReader^ plik1 = gcnew StreamReader("BazaDanych\\klienci.txt", System::Text::Encoding::Default);
	String^ odczyt1; String^ czyKoniec;

	plik1->ReadLine();//id klienta


	do{
		Klient^ klient = gcnew Klient(plik1->ReadLine(), plik1->ReadLine(), plik1->ReadLine(), Single::Parse(plik1->ReadLine()));
		odczyt1 = plik1->ReadLine();
		do{
			klient->uzupelnijListeZakladow(gcnew PostawionyZaklad(odczyt1, plik1->ReadLine(), Int16::Parse(plik1->ReadLine())));
			odczyt1 = plik1->ReadLine();//id_zak³adu lub znak koñca odczytu
		} while (odczyt1 != "##########");

		listaKlientow->Add(klient);
		czyKoniec = plik1->ReadLine();
	} while (!String::IsNullOrEmpty(czyKoniec));
}