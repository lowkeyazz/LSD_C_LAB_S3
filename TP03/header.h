#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int PolyLagrange(int *X, int x, int n, int i);
int InterpLagrange(float *X, float (*f)(float),int n, float x);
float fct(float x);

#endif
