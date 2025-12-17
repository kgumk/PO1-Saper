#include "pch.h"
#include "WizualizatorWKonsoli.h"

void WizualizatorWKonsoli::Pokaz(StanGry* stan)
{
	int ileW = stan->LiczbaWierszy();
	int ileK = stan->LiczbaKolumn();
	
	std::cout << std::endl;
	for (int i = 0; i < ileW; i++)
	{
		std::cout << '#';
		for (int j = 0; j < ileK; j++)
			std::cout << stan->StanPola(i, j);
		std::cout << '#' << std::endl;
	}
}
