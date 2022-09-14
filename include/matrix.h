#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

struct matrixStruct{
    int n,m;
    double** matrixs;
}
typedef matrixStruct matrix;

class matrixClass{
    private:
        matrix matrixC;
    public:
        matrixClass();
        matrixClass(int, int);
        ~matrixClass();
        matrix getMatrix();
        matrix lowerDiag(matrix);
        matrix upperDiag(matrix);
        matrix matrixDiag(matrix);

};


#endif