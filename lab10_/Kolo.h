#pragma once
#include "Figura.h"
#include "Punkt.h"
#include "Odcinek.h"
class Kolo :
	public Figura
{
public:
	Kolo();
	Kolo(PunktD2D&, PunktD2D&);
	Kolo(Odcinek&);
	virtual double ObliczPole() override;
	virtual double ObliczObwod() override;
	virtual std::string Wypisz() override;
	~Kolo();
};
