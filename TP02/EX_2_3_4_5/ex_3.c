#include "header.h"

float newton(float (*f)(float), float (*g)(float), float alpha, int n)
{
    for (int i = 0; i < n; i++)
    {
        alpha = alpha - (f(alpha) / g(alpha));
    }
    return alpha;
}
