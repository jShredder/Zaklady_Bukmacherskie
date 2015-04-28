#include "stdafx.h"
#include "ObiektZakladu.h"

ObiektZakladu::ObiektZakladu()
{
	nazwa1 = gcnew String("");
}


ObiektZakladu::ObiektZakladu(String^ n1, Single k1, Int16 t) : kurs1(k1), typ(t){
	nazwa1 = gcnew String(n1);
}

String^ ObiektZakladu::getNazwa1(){
	return nazwa1;
}

Single ObiektZakladu::getKurs1(){
	return kurs1;
}

Int16 ObiektZakladu::getTyp(){
	return typ;
}