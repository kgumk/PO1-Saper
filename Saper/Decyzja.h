#pragma once
struct Decyzja
{
	int wiersz;
	int kolumna;
	bool mina;

	Decyzja(int wiersz, int kolumna, bool mina = false)
		: wiersz(wiersz), kolumna(kolumna), mina(mina)
	{
	}
};

