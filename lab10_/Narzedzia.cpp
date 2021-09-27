#include "stdafx.h"
#include "Narzedzia.h"
#include <random>
#include <ctime>
#include "Kolo.h"
#include "Prostokat.h"
#include "Trojkat.h"

int Narzedzia::iloscWygenerowanychFigur = 0;

std::list<Figura*> Narzedzia::GenerujFigury(int ilosc)
{
	iloscWygenerowanychFigur += ilosc;

	srand(time(NULL));

	std::list<Figura*> lista;
	
	for (int i = 0; i < ilosc; i++)
	{
		const int kolo = 0;
		const int trojkat = 1;
		const int prostokat = 2;

		int rodzaj = rand() % 3;

		if (rodzaj == kolo) {
			double tmp[2];

			for (int i = 0; i < 2; i++)
				tmp[i] = rand() % 20;

			PunktD2D a(tmp);

			for (int i=0; i<2; i++)
				tmp[i] = rand() % 20;

			PunktD2D b(tmp);

			lista.push_back(new Kolo(a, b));
		}
		else if (rodzaj == trojkat) {
			double tmp[3];

			for (int i = 0; i < 3; i++)
				tmp[i] = rand() % 20;
			PunktD2D a(tmp);

			for (int i = 0; i < 3; i++)
				tmp[i] = rand() % 20;
			PunktD2D b(tmp);

			for (int i = 0; i < 3; i++)
				tmp[i] = rand() % 20;
			PunktD2D c(tmp);

			
			lista.push_back(new Trojkat(a, b, c));
		}

		else if (rodzaj == prostokat) {
			double tmp[4];

			for (int i = 0; i < 4; i++)
				tmp[i] = rand() % 20;
			PunktD2D a(tmp);

			for (int i = 0; i < 4; i++)
				tmp[i] = rand() % 20;
			PunktD2D b(tmp);

			for (int i = 0; i < 4; i++)
				tmp[i] = rand() % 20;
			PunktD2D c(tmp);

			for (int i = 0; i < 4; i++)
				tmp[i] = rand() % 20;
			PunktD2D d(tmp);


			lista.push_back(new Prostokat(a, b, c, d));
		}
	}

	return lista;
}

int Narzedzia::intGetIlosc()
{
	return iloscWygenerowanychFigur;
}

Narzedzia::Narzedzia()
{
}


Narzedzia::~Narzedzia()
{
}

int Narzedzia::IleOdcinkow(Figura& f)
{
	return f.odcinki.size();
}