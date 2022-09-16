#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

struct matrixStruct{
    int n,m;
    double** matrixs;
};
typedef matrixStruct matrix;

class matrixClass{
    private:
    public:
        matrixClass(); 
        static matrix matrixConstruct(int, int);
        ~matrixClass();
        static matrix lowerDiag(matrix);
        static matrix upperDiag(matrix);
        static matrix matrixDiag(matrix);
        static matrix sumMatrix(matrix, matrix);
        static matrix hadamadProdMatrix(matrix, matrix);
        static matrix prodMatrix(matrix, matrix);
        static matrix susMatrix(matrix, matrix);
};


#endif