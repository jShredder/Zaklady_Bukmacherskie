#pragma once

ref class ObiektZakladu
{
public:
	ObiektZakladu();
	ObiektZakladu(String^ n1, Single k1, Int16 t);
	String^ getNazwa1();
	Single getKurs1();
	Int16 getTyp();
private:
	String^ nazwa1;
	Single kurs1;
	Int16 typ;
};

