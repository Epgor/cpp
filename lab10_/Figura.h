#pragma once
#include "stdafx.h"
#include <vector>
#include "Odcinek.h"
#include "Narzedzia.h"

class Figura
{
private:
	friend int Narzedzia::IleOdcinkow(Figura &f);
protected:
	std::vector<Odcinek> odcinki;
public:
	Figura* elNast;
	Figura() { elNast = nullptr; }
	virtual double ObliczPole() = 0;
	virtual double ObliczObwod() = 0;
	virtual std::string Wypisz() = 0;
};

