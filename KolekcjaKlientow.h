#pragma once
#include "Klient.h"

ref class KolekcjaKlientow
{
	List<Klient^>^ listaKlientow = gcnew List<Klient^>();
public:
	KolekcjaKlientow();
	List<Klient^>^ getKolekcja();
	Void zapelnijListeKlientow();
};

