#include "header.h"

float **sum_m(float **A, float **B, int n)
{
    float **R = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        R[i] = (float *)malloc(n * sizeof(float));
        for (int j = 0; j < n; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
    return R;
}
