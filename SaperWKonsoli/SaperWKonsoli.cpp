#include <iostream>
#include <Saper.h>
#include "GraczWKonsoli.h"
#include "WizualizatorWKonsoli.h"

int main()
{
    GraczWKonsoli gracz;
    WizualizatorWKonsoli wizualizator;
    Gra gra(10, 30, 50, &gracz, &wizualizator);
    gra.Start();
}

