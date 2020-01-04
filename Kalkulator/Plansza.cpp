#include "Plansza.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	// Uaktywnienie wizualnego trybu aplikacji
	Application::EnableVisualStyles();

	// Ustawienie że aplikacja nie będzie korzystała z www
	Application::SetCompatibleTextRenderingDefault(false);

	// Uruchomienie aplikacji
	Kalkulator::Plansza formularz;
	Application::Run(%formularz);

	return 0;
}

