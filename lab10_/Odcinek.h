#pragma once
#include "Punkt.h"

class Odcinek
{
private:
	PunktD2D a;
	PunktD2D b;
public:
	Odcinek();
	Odcinek(PunktD2D&, PunktD2D&);
	PunktD2D GetA();
	PunktD2D GetB();
	double GetDlugosc();
	std::string Wypisz();
	~Odcinek();
};

