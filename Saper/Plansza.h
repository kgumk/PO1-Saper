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

	int IleMinDookola(int w, int k);
	bool CzyMina(int w, int k);
};
