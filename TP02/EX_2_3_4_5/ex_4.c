#include "header.h"

float dichotomie2(float (*f)(float), float a, float b, float eps)
{
    int n = (int)log((b - a) / eps) / log(2) + 1;
    return Dichtomie(f, a, b, n);
}
