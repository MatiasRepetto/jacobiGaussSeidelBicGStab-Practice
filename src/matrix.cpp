#include "../include/matrix.h"

matrixClass::matrixClass(){}

matrix matrixClass::matrixConstruct(int n, int m){
    matrix a;
    a.n = n;
    a.m = m;
    a.matrixs = new double*[n];
    for(int i = 0; i < n; i++){
        a.matrixs[i] = new double[m];
    }
    return a;
}

matrixClass::~matrixClass(){

}

matrix matrixClass::lowerDiag(matrix ma){
    for(int i = 0; i < ma.n; i++){
        for(int j = i; j < ma.m; j++){
            ma.matrixs[i][j] = 0;
        }
    }
    return ma;
}

matrix matrixClass::upperDiag(matrix ma){
    for(int i = 0; i < ma.n; i++){
        for(int j = 0; j < i; j++){
            ma.matrixs[i][j] = 0;
        }
    }
    return ma;
}

matrix matrixClass::matrixDiag(matrix ma){
    for(int i = 0; i < ma.n; i++){
        for(int j = 0; j < ma.n; j++){
            if(i != j){
                ma.matrixs[i][j] = 0;
            }
        }
    }
    return ma;
}

matrix matrixClass::sumMatrix(matrix a, matrix b){
    matrix aux = matrixClass::matrixConstruct(a.n, a.m);
    if(a.n == b.n && a.m == b.m){
        for(int i=0; i < a.n; i++){
            for(int j = 0; j < a.m; j++){
                aux.matrixs[i][j] = a.matrixs[i][j] + b.matrixs[i][j];
            }
        }
    }
    return aux;
}

matrix matrixClass::prodMatrix(matrix a, matrix b){

}

matrix matrixClass::susMatrix(matrix a, matrix b){

}