#pragma once
#include "stdafx.h"
#include "PostawionyZaklad.h"

ref class Klient
{
public:
	Klient(String^ i, String^ n, String^ t);
	Void aktualizujZysk(Int16 kwota);
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
	List<PostawionyZaklad^> listaZakladow;
	Single zysk;
};

