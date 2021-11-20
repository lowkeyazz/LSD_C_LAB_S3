#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Dichtomie(float (*f)(float), float a, float b, int n);
float newton(float (*f)(float), float (*g)(float), float alpha, int n);
float dichotomie2(float (*f)(float), float a, float b, float eps);
float f(float x);
float g(float x);



#endif
