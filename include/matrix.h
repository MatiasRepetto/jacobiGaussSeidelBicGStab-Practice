#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

class matrix{
    private:
        double* **arrMatrix;
    public:
        matrix();
        matrix(int, int);
        ~matrix();
        matrix* getMatrix();
        matrix* lowerDiag(matrix*);
        matrix* upperDiag(matrix*);
        matrix* matrixDiag(matrix*);

};


#endif