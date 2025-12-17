#include "pch.h"
#include "Saper.h"

Gra::Gra(Plansza *plansza, Gracz *gracz, Wizualizator *wizualizator)
	: plansza(plansza), gracz(gracz), wizualizator(wizualizator),
	stan(plansza)
{
}

void Gra::Start()
{
	while (!Koniec())
		Krok();
}

bool Gra::Koniec()
{
	return stan.Koniec();
}

void Gra::Krok()
{
	Decyzja decyzja = gracz->Decyzja();
	stan.Aktualizuj(decyzja);
	wizualizator->Aktualizuj(&stan);
}
