#pragma once

template<typename T,int DIM>
class Punkt
{
protected:
	T tab[DIM];
public:

	Punkt()
	{
		for (int i = 0; i < DIM; i++)
			tab[i] = 0;
	}

	virtual ~Punkt() {};

	Punkt(T* wartosci)
	{
		for (int i = 0; i < DIM; i++)
			tab[i] = wartosci[i];
	}

	T Get(int n)
	{
		if (n>=0 && n<DIM)
			return tab[n];
	}

	virtual std::string Wypisz()
	{
		std::stringstream ss;

		ss << "(";
		for (int i = 0; i < DIM; i++)
		{
			ss << tab[i];
			if (i != DIM - 1)
				ss << ",";
		}
		ss << ")";

		return ss.str();
	}

	virtual double LiczOdlegloscOdSrodka()
	{
		double sum = 0;
		for (int i = 0; i < DIM; i++)
			sum += tab[i] * tab[i];

		return std::sqrt(sum);
	}
	
	double LiczOdlegloscOdPunktu(Punkt& p)
	{
		double sum = 0;
		for (int i = 0; i < DIM; i++)
			sum += (tab[i] - p.tab[i]) * (tab[i] - p.tab[i]);
		
		return std::sqrt(sum);
	}
};

typedef Punkt<int, 2> PunktI2D;
typedef Punkt<double, 2> PunktD2D;

typedef Punkt<int, 3> PunktI3D;
typedef Punkt<double, 3> PunktD3D;
