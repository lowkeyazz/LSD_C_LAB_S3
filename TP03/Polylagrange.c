#include "header.h"

int PolyLagrange(int *X, int x, int n, int i){
    int z = 1;
    for(int j = 0; j < n; j++){
        if(j != i)
            z = z * ((x - X[j]) / (X[i] - X[j]));
    }
    return z;
}
