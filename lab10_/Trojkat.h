#pragma once
#include "stdafx.h"
#include "Figura.h"
#include "Punkt.h"
#include "Odcinek.h"

class Trojkat : public Figura
{
public:
	Trojkat();
	Trojkat(PunktD2D&, PunktD2D&, PunktD2D&);
	Trojkat(Odcinek&, Odcinek&, Odcinek&);
	virtual double ObliczPole() override;
	virtual double ObliczObwod() override;
	virtual std::string Wypisz() override;
};
