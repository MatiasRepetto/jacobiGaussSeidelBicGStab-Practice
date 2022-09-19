#include "../include/matrix.h"

matrix gaussSeidel(matrix A, matrix b, double error, int iters){
    int k = 1;
    matrix X_j = matrixClass::matrixConstruct(iters, A.m);
    double desvio = error + 1;
    double aux1 = 0;
    double aux2 = 0;
    while(desvio > error && k <= iters){
        for(int i = 0; i < b.n; i++){
            for(int j = 0; j <= i-1; j++){
                aux1 = aux1 + (b.matrixs[i][0]-A.matrixs[i][j]*X_j.matrixs[k+1][j]);
            }
            for(int f = i+1; f < b.n; f++){
                aux2 = aux2 + A.matrixs[i][f]*X_j.matrixs[k+1][f];
            }
            X_j.matrixs[k+1][i] =  (aux1-aux2)/A.matrixs[i][i];      
        }
        desvio = 0;
        for(int l = 0; l < b.n ; l++){
            desvio = desvio + (sqrt(X_j.matrixs[k+1][l]*X_j.matrixs[k+1][l])-sqrt(X_j.matrixs[k][l]*X_j.matrixs[k][l])); 
        }
        k++;
    }
}