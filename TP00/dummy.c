#include <stdlib.h>
#include <stdio.h>

int **dummy(int **x, int n)
{
    int **y;
    int i;
    int j;
    i = 0;
    y = (int **)malloc(sizeof(int *) * (n + 1));
    while (i < n)
    {
        y[i] = (int *)malloc(sizeof(int) * n);
        j = 0;
        while (j < n)
        {
            y[i][j] = j;
            j++;
        }
        i++;
    }
    y[n] = x[0];
    return (y);
}

int main()
{
    int n;
    int **x;
    int i;
    int j;
    int **y;
    n = 10;
    i = 0;
    y = (int **)malloc(sizeof(int *) * n);
    while (i < n)
    {
        y[i] = (int *)malloc(sizeof(int) * n);
        j = 0;
        while (j < n)
        {
            y[i][j] = j;
            j++;
        }
        i++;
    }
    x = dummy(y, n);
    i = 0;
    while (i < n + 1)
    {
        j = 0;
        while (j < n)
        {
            printf("%d ", x[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    i = 0;
    while (i < n + 1)
    {
        free(x[i]);
        i++;
    }
    j = 1;
    while (j < n)
    {
        free(y[j]);
        j++;
    }
    free(x);
    free(y);
}
