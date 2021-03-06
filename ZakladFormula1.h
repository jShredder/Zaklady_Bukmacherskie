#pragma once
#include "ZakladKoszykarski.h"

ref class ZakladFormula1 : Zaklad
{
public:
	ZakladFormula1();
	ZakladFormula1(ObiektZakladu^ obz1, ObiektZakladu^ obz2, ObiektZakladu^ obz3);
	virtual Void dodajNowyZaklad() override;
	virtual Single sprWyniki(PostawionyZaklad^ postawiony) override;
private:
	ObiektZakladu^ obiektZakladu2;
	ObiektZakladu^ obiektZakladu3;
};

