// 15Marzec.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "Punkt.h"
#include <list>
#include "Narzedzia.h"
#include "Figura.h"
#include "ListaFigur.h"
#include "Trojkat.h"
#include "Kolo.h"
#include "Prostokat.h"
#include "Zespolona.h"

#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  


int _tmain(int argc, _TCHAR* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	ListaFigur<Figura> lista;

	double z[2] = { 0,0 };
	double j[2] = { 1,1 };
	double d[2] = { 2,2 };
	double t[2] = { 3,3 };
	double c[2] = { 4,4 };
	double o[2] = { 8,8 };

	double l1[2] = { 25,52 };
	double l2[2] = { 62,12 };
	double l3[2] = { 10,0 };

	PunktD2D zero(z);
	PunktD2D jeden(j);
	PunktD2D dwa(d);
	PunktD2D trzy(t);
	PunktD2D cztery(c);
	PunktD2D osiem(o);

	PunktD2D los1(l1);
	PunktD2D los2(l2);
	PunktD2D los3(l3);

	Figura* tro = new Trojkat(los1, los2, los3);
	lista.Dodaj(tro);
	
	lista.Dodaj(new Kolo(zero, zero));
	lista.Dodaj(new Kolo(zero, jeden));
	lista.Dodaj(new Kolo(zero, dwa));
	lista.Dodaj(new Kolo(zero, trzy));
	lista.Dodaj(new Kolo(zero, cztery));	
	
	std::cout << "Rozmiar: " << lista.Rozmiar() << std::endl;
	lista.WyswietlListe();

	lista.Usun(1);
	lista.Usun(2);
	std::cout << "Rozmiar: " << lista.Rozmiar() << std::endl;
	lista.WyswietlListe();


	ListaFigur<PunktD2D> lista_punktow;

	lista_punktow.Dodaj(new PunktD2D(j));
	lista_punktow.Dodaj(new PunktD2D(d));
	lista_punktow.Dodaj(new PunktD2D(t));
	lista_punktow.Dodaj(new PunktD2D(c));
	lista_punktow.Dodaj(new PunktD2D(o));
	lista_punktow.Dodaj(new PunktD2D(l1));
	lista_punktow.Dodaj(new PunktD2D(l2));
	lista_punktow.Dodaj(new PunktD2D(l3));
	lista_punktow.Dodaj(new PunktD2D(z));

	std::cout << "Rozmiar: " <<  lista_punktow.Rozmiar() << std::endl;
	lista_punktow.WyswietlListe();

	lista_punktow.Usun(0);
	lista_punktow.Usun(3);
	std::cout << "Rozmiar: " << lista_punktow.Rozmiar() << std::endl;
	lista_punktow.WyswietlListe();

	lista.WyczyscListe();
	lista_punktow.WyczyscListe();
	return 0;
}

