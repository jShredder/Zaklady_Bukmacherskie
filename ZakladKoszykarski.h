#pragma once
#include "ZakladPilkarski.h"

ref class ZakladKoszykarski : Zaklad
{

public:
	ZakladKoszykarski();
	ZakladKoszykarski(ObiektZakladu^ obz1, ObiektZakladu^ obz2);
	virtual Void dodajNowyZaklad() override;
	virtual Single sprWyniki(PostawionyZaklad^ postawiony) override;
private:
	ObiektZakladu^ obiektZakladu2;
};

