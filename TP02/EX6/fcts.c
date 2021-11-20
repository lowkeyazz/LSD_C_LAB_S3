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
float newton(float (*f)(float), float (*g)(float), float alpha, int n)
{
    for (int i = 0; i < n; i++)
    {
        alpha = alpha - (f(alpha) / g(alpha));
    }
    return alpha;
}
float dichotomie2(float (*f)(float), float a, float b, float eps)
{
    int n = (int)log((b - a) / eps) / log(2);
    return Dichtomie(f, a, b, n);
}

float f(float x)
{
    return pow(x, 3) - x - 3;
}
