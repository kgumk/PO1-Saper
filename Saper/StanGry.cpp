#include "pch.h"
#include "Saper.h"

StanGry::StanGry(Plansza* plansza)
	: plansza(plansza)
{
	for (int i = 0; i < LiczbaWierszy(); i++)
		stan.push_back(string(LiczbaKolumn(), ' '));
	wybuch = false;
}

char StanGry::StanPola(int w, int k)
{
	return stan[w][k];
}

bool StanGry::Koniec()
{
	return wybuch;
}

void StanGry::Aktualizuj(Decyzja decyzja)
{
	if (decyzja.mina)
	{
		stan[decyzja.wiersz][decyzja.kolumna] = '*';
		return;
	}
	if (plansza->CzyMina(decyzja.wiersz, decyzja.kolumna))
	{
		stan[decyzja.wiersz][decyzja.kolumna] = '!';
		wybuch = true;
		return;
	}
	OdkryjPole(decyzja);
}

void StanGry::OdkryjPole(Decyzja decyzja)
{
	queue<Decyzja> kolejka;
	kolejka.push(decyzja);
	while (!kolejka.empty())
	{
		Decyzja d = kolejka.front();
		kolejka.pop();
		int ile = plansza->IleMinDookola(d.wiersz, d.kolumna);
		stan[d.wiersz][d.kolumna] = '0'+ile;
		if (ile == 0)
			for (int dw = -1; dw <= 1; dw++)
				for (int dk = -1; dk <= 1; dk++)
				{
					if (dw == 0 && dk == 0
						|| d.wiersz + dw < 0 || d.wiersz+dw >= LiczbaWierszy()
						|| d.kolumna + dk < 0 || d.kolumna + dk >= LiczbaKolumn()
						|| stan[d.wiersz+dw][d.kolumna+dk] != ' ')
						continue;
					kolejka.push(Decyzja(d.wiersz+dw, d.kolumna+dk));
					stan[d.wiersz + dw][d.kolumna + dk] = '@';
				}
	}
}
