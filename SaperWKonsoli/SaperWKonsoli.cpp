#include <iostream>
#include <Saper.h>
#include "GraczWKonsoli.h"
#include "WizualizatorWKonsoli.h"

int main()
{
    Plansza plansza(20, 100, 10);
    GraczWKonsoli gracz;
    WizualizatorWKonsoli wizualizator;
    Gra gra(&plansza, &gracz, &wizualizator);
    gra.Start();
}

