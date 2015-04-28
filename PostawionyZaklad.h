#include "Zaklad.h"

#pragma once
ref class PostawionyZaklad
{
public:
	PostawionyZaklad();
	PostawionyZaklad(String^ i, Single k, String^ w);
	String^ getID_zakladu();
	Single getKwota();
	String^ getWynik();
private:
	String^ ID_zakladu;
	Single kwota;
	String^ wynik;
};

