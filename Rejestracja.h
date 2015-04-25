#pragma once
using namespace System::IO;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class Rejestracja
{
public:
	Rejestracja(System::String^ log1, System::String^ has1);
	System::String^ getLogin();
	System::String^ getHaslo();
	System::Void setLogin(System::String^ log1);
	System::Void setHaslo(System::String^ has1);
	System::Void aktualizujDane(Label^% label4);
private:
	System::String^ login;
	System::String^ haslo;
};

