#pragma once
#include "stdafx.h"
#include "PostawionyZaklad.h"

ref class Klient
{
public:
	Klient(String^ i, String^ n, String^ t);
	Void aktualizujZysk(Zaklad zaklad);
	Void postawWynik(String^ postawionyWynik, Single kwota);
	ArrayList^ getObstawioneZakladyList();
	Single getZysk();
private:
	String^ imie;
	String^ nazwisko;
	String^ telefon;
	ArrayList^ obstawioneZaklady;
	Single zysk;
};

