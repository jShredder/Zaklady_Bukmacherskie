#include "ObiektZakladu.h"
#include "PostawionyZaklad.h"

#pragma once
ref class Zaklad
{
public:
	Zaklad();
	Zaklad(ObiektZakladu^ obz1);
	virtual Void dodajNowyZaklad();
	virtual Single sprWyniki(PostawionyZaklad^ postawiony);
protected:
	ObiektZakladu^ obiektZakladu1;
	Int16 zakladId;
};

