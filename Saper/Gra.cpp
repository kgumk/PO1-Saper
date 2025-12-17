#include "pch.h"
#include "Saper.h"

Gra::Gra(int wysokosc, int szerokosc, int ileMin, 
		Gracz *gracz, Wizualizator *wizualizator)
	: plansza(wysokosc, szerokosc, ileMin), stan(&plansza),
	  gracz(gracz), wizualizator(wizualizator)
{
}

void Gra::Start()
{
	wizualizator->Pokaz(&stan);
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
	wizualizator->Pokaz(&stan);
}
