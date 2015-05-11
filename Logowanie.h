#include "Rejestracja.h"
#include "Form2.h"

#pragma once

ref class Logowanie : public Rejestracja
{
public:
	Logowanie(System::String^ log1, System::String^ has1);
	System::Boolean weryfikujDane(Form^ form1);
};


