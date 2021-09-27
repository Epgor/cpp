#pragma once
class Zespolona
{
private:
	float re;
	float im;

public:
	Zespolona();
	Zespolona(float, float);
	Zespolona operator +(Zespolona&);
	Zespolona operator -(Zespolona&);
	Zespolona operator *(Zespolona&);
	Zespolona operator -();
	Zespolona operator *(float);

	std::string Wypisz();
	~Zespolona();

	friend Zespolona operator +(float, Zespolona&);
	friend Zespolona operator *(float, Zespolona&);
};

Zespolona operator +(float, Zespolona&);
Zespolona operator *(float, Zespolona&);
