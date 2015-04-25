#include "stdafx.h"
#include "Klient.h"


Klient::Klient(String^ i, String^ n, String^ t) :imie(i), nazwisko(n), telefon(t), zysk(0){}

Void Klient::aktualizujZysk(Zaklad zaklad){

}

Void Klient::postawWynik(String^ postawionyWynik, Single kwota){

}

ArrayList^ Klient::getObstawioneZakladyList(){
	return obstawioneZaklady;
}

Single Klient::getZysk(){
	return zysk;
}