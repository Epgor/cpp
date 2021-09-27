#pragma once
#include "stdafx.h"
#include <list>

class Figura;

class Narzedzia
{
public:
	static int iloscWygenerowanychFigur;
	std::list<Figura*>GenerujFigury(int ilosc); 

	static int intGetIlosc();

	int IleOdcinkow(Figura& f);

	Narzedzia();
	~Narzedzia();
};

