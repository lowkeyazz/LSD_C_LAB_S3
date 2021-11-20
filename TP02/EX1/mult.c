#include "header.h"

float **mult_m(float **A, float **B, int n)
{
    float **R = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        R[i] = (float *)malloc(n * sizeof(float));
        for (int j = 0; j < n; j++)
        {
            R[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return R;
}
