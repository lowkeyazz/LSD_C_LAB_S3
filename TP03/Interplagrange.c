#include "header.h"


int InterpLagrange(float *X, float (*f)(float),int n, float x){
    float z  = 0;
    for(int i = 0 ; i < n ; i++){
        z += f(X[i])*PolyLagrange(X,x,n,i);
    }
    return z;
}
