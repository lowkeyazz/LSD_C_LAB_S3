#include "header.h"

float **trans_m(float **A, int n)
{
    float **R = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        R[i] = (float *)malloc(n * sizeof(float));
        for (int j = 0; j < n; j++)
        {
            R[i][j] = A[j][i];
        }
    }
    return R;
}
