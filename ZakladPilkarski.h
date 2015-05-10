#pragma once
#include "Zaklad.h"

ref class ZakladPilkarski : public Zaklad
{
public:
	ZakladPilkarski();
	ZakladPilkarski(ObiektZakladu^ obz1, ObiektZakladu^ obz2);
	virtual Void dodajNowyZaklad() override;
	virtual Single sprWyniki(PostawionyZaklad^ postawiony) override;
private:
	ObiektZakladu^ obiektZakladu2;
};

