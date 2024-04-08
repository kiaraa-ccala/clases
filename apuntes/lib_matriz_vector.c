// emulare la forma de multiplicacion que hice en python
void matriz_vector(double *A, double *x, double *b, int N){
    double temp;
    for(int i = 0; i<N ; i++){
        temp = 0.0;
        for (int j = 0; j<N; j++){
            temp = temp + A[i*N+j]*x[j];
        }
        b[i] = temp;
    }
}
