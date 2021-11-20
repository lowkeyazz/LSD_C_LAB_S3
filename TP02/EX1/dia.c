#include "header.h"

float **dia_m(float **A, int n)
{
    float **R = (float **)malloc(2 * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        R[i] = (float *)malloc(n * sizeof(float));
        R[0][i] = A[i][i];
        R[1][i] = A[i][n - i - 1];
    }
    return R;
}
