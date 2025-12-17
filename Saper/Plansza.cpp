#include "pch.h"
#include "Plansza.h"

Plansza::Plansza(int wysokosc, int szerokosc, int ileMin)
	: wysokosc(wysokosc), szerokosc(szerokosc), ileMin(ileMin)
{
	plansza = new char*[wysokosc];
	for (int i = 0; i < wysokosc; i++)
		plansza[i] = new char[szerokosc];

	for (int i = 0; i < wysokosc; i++)
		for (int j = 0; j < wysokosc; j++)
			plansza[i][j] = ' ';

	//srand(time());
	srand(123); // dla debugowania
	for (int i = 0; i < ileMin; i++)
	{
		int x, y;
		do {
			x = rand() % wysokosc;
			y = rand() % szerokosc;
		} while (plansza[x][y] == '*');
		plansza[x][y] = '*';
	}
}

Plansza::~Plansza()
{
	for (int i = 0; i < wysokosc; i++)
		delete[] plansza[i];
	delete[] plansza;
}

int Plansza::IleMinDookola(int w, int k)
{
	int ile = 0;
	for (int dw = -1; dw <= 1; dw++)
		for (int dk = -1; dk <= 1; dk++)
		{
			if (dw == 0 && dk == 0
				|| w + dw < 0 || w + dw >= wysokosc
				|| k + dk < 0 || k + dk >= szerokosc)
				continue;
			if (plansza[w + dw][k + dk] == '*')
				ile++;
		}
	return ile;
}

bool Plansza::CzyMina(int w, int k)
{
	return plansza[w][k] == '*';
}
