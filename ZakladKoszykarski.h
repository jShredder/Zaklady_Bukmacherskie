#pragma once
#include "ZakladPilkarski.h"

ref class ZakladKoszykarski : Zaklad
{

public:
	ZakladKoszykarski();
	ZakladKoszykarski(ObiektZakladu^ obz1, ObiektZakladu^ obz2);
	virtual Void dodajNowyZaklad() override;
	virtual Void sprWyniki(Zaklad^ postawiony, Zaklad^ wynik) override;
private:
	ObiektZakladu^ obiektZakladu2;
};

