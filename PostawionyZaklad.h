#pragma once
ref class PostawionyZaklad
{
public:
	PostawionyZaklad();
	PostawionyZaklad(String^ i, String^ w, Int16 k);
	String^ getID_zakladu();
	Int16 getKwota();
	String^ getWynik();
private:
	String^ ID_zakladu;
	Int16 kwota;
	String^ wynik;
};

