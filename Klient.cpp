#include "stdafx.h"
#include "Klient.h"

Klient::Klient(String^ i, String^ n, String^ t) :imie(i), nazwisko(n), telefon(t){
	listaZakladow = gcnew List<PostawionyZaklad^>();
}

Klient::Klient(String^ i, String^ n, String^ t, Single z) :imie(i), nazwisko(n), telefon(t), zysk(z){
	listaZakladow = gcnew List<PostawionyZaklad^>();
}

Void Klient::aktualizujZysk(Single kwota){
	zysk += kwota;
}

Single Klient::getZysk(){
	return zysk;
}

String^ Klient::getImie(){
	return imie;
}

String^ Klient::getNazwisko(){
	return nazwisko;
}

String^ Klient::getTelefon(){
	return telefon;
}

PostawionyZaklad^ Klient::getListaZakladow(Int16 index){
	return listaZakladow[index];
}
Void Klient::uzupelnijListeZakladow(PostawionyZaklad^ postawionyZaklad){
	listaZakladow->Add(postawionyZaklad);
}

Int16 Klient::getListCount(){
	return listaZakladow->Count;
}