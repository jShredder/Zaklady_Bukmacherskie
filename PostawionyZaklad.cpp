#include "stdafx.h"
#include "PostawionyZaklad.h"


PostawionyZaklad::PostawionyZaklad(String^ i, Single k, String^ w) :ID_zakladu(i), kwota(k), wynik(w)
{
}

PostawionyZaklad::PostawionyZaklad(){}

String^ PostawionyZaklad::getID_zakladu(){
	return ID_zakladu;
}

Single PostawionyZaklad::getKwota(){
	return kwota;
}

String^ PostawionyZaklad::getWynik(){
	return wynik;
}