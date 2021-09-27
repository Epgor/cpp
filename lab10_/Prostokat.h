#pragma once
#include "Figura.h"
#include "Punkt.h"
#include "Odcinek.h"

class Prostokat :
	public Figura
{
public:
	Prostokat();
	Prostokat(PunktD2D&, PunktD2D&, PunktD2D&, PunktD2D&);
	Prostokat(Odcinek&, Odcinek&, Odcinek&, Odcinek&);
	~Prostokat();
	virtual double ObliczPole() override;
	virtual double ObliczObwod() override;
	virtual std::string Wypisz() override;
};
