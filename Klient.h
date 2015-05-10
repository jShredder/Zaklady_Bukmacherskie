#pragma once
#include "stdafx.h"
#include "ZakladFormula1.h"

ref class Klient
{
public:
	Klient(String^ i, String^ n, String^ t);
	Klient(String^ i, String^ n, String^ t, Single z);
	Void aktualizujZysk(Single kwota);
	PostawionyZaklad^ getListaZakladow(Int16 index);
	Void uzupelnijListeZakladow(PostawionyZaklad^ postawionyZaklad);
	Single getZysk();
	String^ getImie();
	String^ getNazwisko();
	String^ getTelefon();
	Int16 getListCount();
private:
	String^ imie;
	String^ nazwisko;
	String^ telefon;
	List<PostawionyZaklad^>^ listaZakladow;
	Single zysk;
};

