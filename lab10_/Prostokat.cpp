#include "stdafx.h"
#include "Prostokat.h"


Prostokat::Prostokat()
{
	for (int i = 0; i < 4; i++)
	{
		odcinki.push_back(Odcinek());
	}
}

Prostokat::Prostokat(PunktD2D& q, PunktD2D& w, PunktD2D& e, PunktD2D& r)
{
	odcinki.push_back(Odcinek(q,w));
	odcinki.push_back(Odcinek(w,e));
	odcinki.push_back(Odcinek(e,r));
	odcinki.push_back(Odcinek(r,q));
}

Prostokat::Prostokat(Odcinek& a, Odcinek& b, Odcinek& c, Odcinek& d)
{
	odcinki.push_back(a);
	odcinki.push_back(b);
	odcinki.push_back(c);
	odcinki.push_back(d);
}

double Prostokat::ObliczObwod()
{
	return 2 * odcinki[0].GetDlugosc() + 2 * odcinki[1].GetDlugosc();
}

double Prostokat::ObliczPole()
{
	return odcinki[0].GetDlugosc() * odcinki[1].GetDlugosc();
}

std::string Prostokat::Wypisz()
{
	std::stringstream ss;
	
	ss << "Prostokat ";

	for (int i = 0; i < odcinki.size(); i++)
		ss << odcinki[i].Wypisz() << " ";
	ss << std::endl;

	return ss.str();
}

Prostokat::~Prostokat()
{
}
