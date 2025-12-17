#pragma once

#include "Saper.h"

class Gra
{
	Plansza* plansza;
	Gracz* gracz;
	Wizualizator* wizualizator;
	StanGry stan;

	bool Koniec();
	void Krok();
public:
	Gra(Plansza *plansza, Gracz *gracz, Wizualizator *wizualizator);
	void Start();
};

