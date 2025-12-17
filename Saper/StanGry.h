#pragma once
class StanGry
{
	Plansza* plansza;

public:
	StanGry(Plansza* plansza);
	int LiczbaWierszy() { return plansza->LiczbaWierszy(); }
	int LiczbaKolumn() { return plansza->LiczbaKolumn(); }
	char StanPola(int w, int k);
	bool Koniec();
	void Aktualizuj(Decyzja decyzja);
};

