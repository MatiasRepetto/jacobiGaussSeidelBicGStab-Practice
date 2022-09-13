#include "../include/matrix.h"

matrix::matrix(){}

matrix::matrix(int n, int m){
    this->arrMatrix = new double*[n];
    for(int i = 0; i < n; i++){
        this->arrMatrix[i] = new double[m];
    } 
}

matrix::~matrix(){

}

matrix* matrix::getMatrix(){

}

matrix* matrix::lowerDiag(matrix*){

}

matrix* matrix::upperDiag(matrix*){

}

matrix* matrix::matrixDiag(matrix*){

}