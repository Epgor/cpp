#pragma once
#include "stdafx.h"
#include "Trojkat.h"

Trojkat::Trojkat()
{
	for (int i = 0; i < 3; i++)
		odcinki.push_back(Odcinek());
}

Trojkat::Trojkat(PunktD2D& x, PunktD2D& y, PunktD2D& z)
{
	odcinki.push_back(Odcinek(x,y));
	odcinki.push_back(Odcinek(y,z));
	odcinki.push_back(Odcinek(z,x));
}

Trojkat::Trojkat(Odcinek& a, Odcinek& b, Odcinek& c)
{
	odcinki.push_back(a);
	odcinki.push_back(b);
	odcinki.push_back(c);
}

double Trojkat::ObliczObwod()
{
	return odcinki[0].GetDlugosc() + odcinki[1].GetDlugosc() + odcinki[2].GetDlugosc();
}

double Trojkat::ObliczPole()
{
	double p = ObliczObwod()/2;
	double a = p - odcinki[0].GetDlugosc();
	double b = p - odcinki[1].GetDlugosc();
	double c = p - odcinki[2].GetDlugosc();

	return std::sqrt(p*a*b*c);
}

std::string Trojkat::Wypisz()
{
	std::stringstream ss;

	ss << "Trojkat ";
	
	for (int i = 0; i < odcinki.size(); i++)
		ss << odcinki[i].Wypisz() << " ";

	ss << std::endl;

	return ss.str();
}