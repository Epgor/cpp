#include "stdafx.h"
#include "Kolo.h"

#define M_PI 3.14159265358979323846

Kolo::Kolo()
{
	odcinki.push_back(Odcinek());
}

Kolo::Kolo(PunktD2D& x, PunktD2D& y)
{
	odcinki.push_back(Odcinek(x,y));
}

Kolo::Kolo(Odcinek& odc)
{
	odcinki.push_back(odc);
}

double Kolo::ObliczObwod()
{
	return 2 * M_PI * odcinki.front().GetDlugosc();
}

double Kolo::ObliczPole()
{
	double r = odcinki.front().GetDlugosc();

	return M_PI * r * r;
}

std::string Kolo::Wypisz()
{
	std::stringstream ss;

	ss << "Kolo " << odcinki.front().Wypisz() << std::endl;

	return ss.str();
}


Kolo::~Kolo()
{
}
