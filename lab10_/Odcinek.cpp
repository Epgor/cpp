#include "stdafx.h"
#include "Odcinek.h"
#include <regex>

Odcinek::Odcinek() : a(), b()
{
}

Odcinek::Odcinek(PunktD2D &x, PunktD2D &y) : a(x), b(y)
{ 
}

PunktD2D Odcinek::GetA()
{
	return a;
}

PunktD2D Odcinek::GetB()
{
	return b;
}

double Odcinek::GetDlugosc()
{
	return a.LiczOdlegloscOdPunktu(b);
}
Odcinek::~Odcinek()
{
}

std::string Odcinek::Wypisz()
{
	std::stringstream ss;

	ss << "[" << a.Wypisz() << "-" << b.Wypisz() << "]";

	return ss.str();

}