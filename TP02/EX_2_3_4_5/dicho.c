#include "header.h"

float Dichtomie(float (*f)(float), float a, float b, int n)
{
    float c;
    for (int i = 0; i < n; i++)
    {
        c = (a + b) / 2;
        if (f(c) == 0)
            return c;
        if (f(c) > 0)
            b = c;
        if (f(c) < 0)
            a = c;
    }
    return c;
}
