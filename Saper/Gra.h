#pragma once

#include "Saper.h"

class Gra
{
	Plansza plansza;
	StanGry stan;

	Gracz* gracz;
	Wizualizator* wizualizator;

	bool Koniec();
	void Krok();
public:
	Gra(int wysokosc, int szerokosc, int ileMin, 
		Gracz *gracz, Wizualizator *wizualizator);
	void Start();
};

