#include "../include/matrix.h"

matrixClass::matrixClass(){}

matrixClass::matrixClass(int n, int m){
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
        for(int j = i; j < ma.m; i++){
            ma.matrixs[i][j] = 0;
        }
    }
    return ma;
}

matrix matrixClass::upperDiag(matrix ma){
    for(int i = 0; i < ma.n; i++){
        for(int j = 0; j < i; i++){
            ma.matrixs[i][j] = 0;
        }
    }
    return ma;
}

matrix matrixClass::matrixDiag(matrix ma){
    for(int i = 0; i < ma.n; i++){
        for(int j = 0; j < ma.n; i++){
            if(i != j){
                ma.matrixs[i][j] = 0;
            }
        }
    }
    return ma;
}