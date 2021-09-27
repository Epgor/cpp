#include "stdafx.h"
#include "Zespolona.h"


Zespolona::Zespolona() : re(0), im(0)
{}

Zespolona::Zespolona(float x, float y) : re(x), im(y)
{}

Zespolona Zespolona::operator+(Zespolona & b)
{
	// Dodaj do siebie czêœæ rzeczywist¹ i urojon¹, a nastêpnie zwróæ liczbê
	return Zespolona(re + b.re, im + b.im);
}

Zespolona Zespolona::operator-(Zespolona & b)
{
	// Odejmij od siebie czêœæ rzeczywist¹ i urojon¹, a nastêpnie zwróæ liczbê
	return Zespolona(re - b.re, im - b.im);
}

Zespolona Zespolona::operator*(Zespolona & b)
{
	return Zespolona(re*b.re - im*b.im, re*b.im + im*b.re);
}

Zespolona Zespolona::operator-()
{
	return Zespolona(-re, -im);
}

Zespolona Zespolona::operator*(float f)
{
	return Zespolona(f*re, f*im);
}


Zespolona::~Zespolona()
{
}

Zespolona operator*(float f, Zespolona & b)
{
	return Zespolona(f*b.re, f*b.im);
}

Zespolona operator+(float f, Zespolona & b)
{
	return Zespolona(f+b.re, b.im);
}

std::string Zespolona::Wypisz()
{
	std::stringstream ss;

	ss << "Wartosc rzeczywista: " << re << " Wartosc urojona: " << im;

	return ss.str();
}