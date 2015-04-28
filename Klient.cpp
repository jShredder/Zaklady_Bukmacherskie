#include "stdafx.h"
#include "Klient.h"


Klient::Klient(String^ i, String^ n, String^ t) :imie(i), nazwisko(n), telefon(t), zysk(0){
}

Void Klient::aktualizujZysk(Int16 kwota){

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
	listaZakladow.Add(postawionyZaklad);
}

Int16 Klient::getListCount(){
	return listaZakladow.Count;
}