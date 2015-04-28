#pragma once
#include "Zaklad.h"

ref class ZakladPilkarski : public Zaklad
{
public:
	ZakladPilkarski();
	ZakladPilkarski(ObiektZakladu^ obz1, ObiektZakladu^ obz2);
	virtual Void dodajNowyZaklad() override;
	virtual Void sprWyniki(Zaklad^ postawiony, Zaklad^ wynik) override;
private:
	ObiektZakladu^ obiektZakladu2;
};

