#pragma once
#include <vector>
#include <string>
struct Decyzja;

class StanGry
{
	Plansza* plansza;
	std::vector<std::string> stan;
	bool wybuch;

	void OdkryjPole(Decyzja decyzja);

public:
	StanGry(Plansza* plansza);
	int LiczbaWierszy() { return plansza->LiczbaWierszy(); }
	int LiczbaKolumn() { return plansza->LiczbaKolumn(); }
	char StanPola(int w, int k);
	bool Koniec();
	void Aktualizuj(Decyzja decyzja);
};

