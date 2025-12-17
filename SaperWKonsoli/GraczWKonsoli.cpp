#include "pch.h"
#include "GraczWKonsoli.h"

struct Decyzja GraczWKonsoli::Decyzja()
{
	struct Decyzja decyzja(0, 0);
	char z; //'*' - mina, '-' - brak miny
	std::cin >> decyzja.wiersz >> decyzja.kolumna >> z;
	decyzja.mina = z == '*';
	return decyzja;
}
