#include "ObiektZakladu.h"

#pragma once
ref class Zaklad
{
public:
	Zaklad();
	Zaklad(ObiektZakladu^ obz1);
	virtual Void dodajNowyZaklad();
	virtual Void sprWyniki(Zaklad^ postawiony, Zaklad^ wynik);
protected:
	ObiektZakladu^ obiektZakladu1;
	Int16 zakladId;
};

