#pragma once
#include "Figura.h"
#include <vector>

template<typename T>
class ListaFigur
{
private:
	typedef struct Element 
	{
		T* elObec = nullptr;
		Element* elNast = nullptr;
	} Element;

	Element* ElementByIndex(int index)
	/*
		Funkcja zwracaj¹ca element listy o podanym indexie
	*/
	{
		// Jeœli index jest poza list¹, zwróæ nullptr
		if (index<0 || index>Rozmiar() - 1)
			return nullptr;

		// Stwórz zmienn¹ element wskazuj¹c¹ na pierwszy element
		Element* element = elPierwszy;
		
		// Iteruj tak d³ugo, a¿ element bêdzie wskazywa³ na element listy o indexie "index"
		for (int i = 0; i < index; i++)
			element = element->elNast;

		// Zwróæ element listy
		return element;
	}
public:
	Element* elPierwszy;

	void Dodaj(T *f, int index = -1)
	{
		if (index<0 || index>Rozmiar()-1)
			index = Rozmiar()-1;

		if (elPierwszy->elObec == nullptr)
		{
			elPierwszy->elObec = f;
			return;
		}

		if (index == 0)
		{
			Element* next = new Element;
			next->elObec = f;
			next->elNast = elPierwszy;

			elPierwszy = next;
			return;
		}

		Element* element = ElementByIndex(index-1);
		

		Element* next = new Element;
		next->elObec = f;
		next->elNast = element->elNast;
		element->elNast = next;
	}

	void Usun(int index)
	{
		if ((index > Rozmiar() - 1) || index < 0)
		{
			std::cout << "Zly index" << std::endl;
			return;
		}

		if (index == 0)
		{
			Element* tmp = elPierwszy->elNast;
			delete elPierwszy->elObec;
			delete elPierwszy;
			elPierwszy = tmp;
			std::cout << "Usunieto " << index << " index" << std::endl;
			return;
		}

		Element* element = ElementByIndex(index-1);

		Element* tmp = element->elNast->elNast;
		delete element->elNast->elObec;
		delete element->elNast;
		element->elNast = tmp;
		std::cout << "Usunieto " << index << " index" << std::endl;
	}

	void WyczyscListe()
	{
		// Pêtla iteruj¹ca wywo³uj¹ca Usun na ka¿dym elemencie
		for (int i = 0; Rozmiar() != 0;)
			Usun(i);

		// Ustawiamy wskaŸnik na nullptr
		elPierwszy = nullptr;
	}
	
	int Rozmiar()
	{
		int counter = 0;
		Element* element = elPierwszy;
			
		while (element != nullptr)
		{
			element = element->elNast;
			counter++;
		}

		return counter;
	}
	
	void WyswietlListe()
	{
		Element* element = elPierwszy;
		for (int i=0; i<Rozmiar(); i++)
		{
			std::cout << "---------- Obiekt nr: " << i << " ----------" << std::endl;
			std::cout << element->elObec->Wypisz() << std::endl;

			element = element->elNast;
		}
		std::cout << std::endl;
	}

	ListaFigur()
	{
		elPierwszy = new Element;
	}

	~ListaFigur() {};
};

