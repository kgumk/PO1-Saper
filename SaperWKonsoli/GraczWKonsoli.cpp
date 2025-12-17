#include "pch.h"
#include "GraczWKonsoli.h"

struct Decyzja GraczWKonsoli::Decyzja()
{
	struct Decyzja decyzja;
	char z; //'*' - mina, '-' - brak miny
	std::cin >> decyzja.wiersz >> decyzja.kolumna >> z;
	decyzja.mina = z == '*';
	return decyzja;
}
