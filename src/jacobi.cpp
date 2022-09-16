#include "../include/matrix.h"
#include <cmath>

matrix jacobi(matrix A, matrix b, double error, int iters){
    int k = 1;
    matrix X_j = matrixClass::matrixConstruct(iters, A.m);
    double desvio = error + 1;
    while(desvio > error && k <= iters){
        for(int i = 0; i < b.n; i++){
            for(int j = 0; j < A.m; j++){
               X_j.matrixs[k+1][i] =  X_j.matrixs[k][i] + ((b.matrixs[i][0]-A.matrixs[i][j]*X_j.matrixs[k][j])/A.matrixs[i][i]);
            }
        }
        desvio = 0;
        for(int l = 0; l < b.n ; l++){
            desvio = desvio + (sqrt(X_j.matrixs[k+1][l]*X_j.matrixs[k+1][l])-sqrt(X_j.matrixs[k][l]*X_j.matrixs[k][l])); 
        }
        k++;
    }
}