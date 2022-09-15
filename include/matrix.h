#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

struct matrixStruct{
    int n,m;
    double** matrixs;
};
typedef matrixStruct matrix;

class matrixClass{
    private:
        matrix matrixC;
    public:
        matrixClass();
        void matrixClassC(int, int);
        ~matrixClass();
        matrix getMatrix();
        matrix lowerDiag(matrix);
        matrix upperDiag(matrix);
        matrix matrixDiag(matrix);
        matrix sumMatrix(matrix, matrix);
        matrix prodMatrix(matrix, matrix);
        matrix susMatrix(matrix, matrix);

};


#endif