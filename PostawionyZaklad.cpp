#include "stdafx.h"
#include "PostawionyZaklad.h"


PostawionyZaklad::PostawionyZaklad(String^ i, String^ w, Int16 k) :ID_zakladu(i), wynik(w), kwota(k)
{
}

PostawionyZaklad::PostawionyZaklad(){}

String^ PostawionyZaklad::getID_zakladu(){
	return ID_zakladu;
}

Int16 PostawionyZaklad::getKwota(){
	return kwota;
}

String^ PostawionyZaklad::getWynik(){
	return wynik;
}