#include "../include/matrix.h"

matrixClass::matrixClass(){}

void matrixClass::matrixClassC(int n, int m){
    this->matrixC.n = n;
    this->matrixC.m = m;
    this->matrixC.matrixs = new double*[n];
    for(int i = 0; i < n; i++){
        this->matrixC.matrixs[i] = new double[m];
    } 
}

matrixClass::~matrixClass(){

}

matrix matrixClass::getMatrix(){
    return this->matrixC;
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
    matrixClass aux2 = matrixClass();
    if(a.n == b.n && a.m == b.m){
        aux2.matrixClassC(a.n, a.m);
        for(int i=0; i < a.n; i++){
            for(int j = 0; j < a.m; j++){
                aux2.matrixC.matrixs[i][j] = a.matrixs[i][j] + b.matrixs[i][j];
            }
        }
    }
    return aux2.matrixC;
}

matrix matrixClass::prodMatrix(matrix a, matrix b){

}

matrix matrixClass::susMatrix(matrix a, matrix b){

}