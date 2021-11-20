#include "header.h"

int main()
{
    int n;
    printf("Enter matrix length: ");
    scanf("%d", &n);
    float **A = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        A[i] = (float *)malloc(n * sizeof(float));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f \t", A[i][j]);
        }
        printf("\n");
    }
    /*
    float **B = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
    {
        B[i] = (float *)malloc(n * sizeof(float));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &B[i][j]);
        }
    }*/
    printf("\n \n");
    /*float **C = trans_m(A, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f \t", C[i][j]);
        }
        printf("\n");
    }*/
    float **C = dia_m(A, n);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f \n", C[i][j]);
        }
        printf("\n");
    }
    free(A);
    //free(B);
    free(C);
}
