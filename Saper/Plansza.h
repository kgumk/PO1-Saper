#pragma once
class Plansza
{
	int wysokosc;
	int szerokosc;
	int ileMin;
	char **plansza;

public:
	Plansza(int wysokosc, int szerokosc, int ileMin);
	~Plansza();

	int LiczbaWierszy() { return wysokosc; }
	int LiczbaKolumn() { return szerokosc; }
};
