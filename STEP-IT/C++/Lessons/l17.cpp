#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int insert(char message[]){
    int value;
    cout << message;
    cin >> value;
    cout << endl;

    return value;
}

void insertVector(int v[], int n){
    for(int i = 0; i < n; i++)
        v[i] = rand()%10;
}

void showVector(char message[], int v[], int n){
    cout << message;
    for(int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << endl;
}

void sumaVector(char message[], int v[], int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s += v[i];

    cout << message << s << endl;
}

void insertMatrix(int M[100][100], int n, int m){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            M[i][j] = rand()%10;
}

void showMatrix(char message[], int M[100][100], int n, int m){
    cout << message << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << M[i][j] << ' ';
        cout << endl;
    }
}

void insertP(char message[], int *p){
    cout << message;
    cin >> *p;
    cout << endl;
}

template <typename T>
void showP(char message[], T *p){
    cout << message << *p << endl;
    return;
}

template <typename T1, typename T2, typename T3, typename T4>
void calcP(T1 *a, T2 *b, T3 *c, T4 *R){
    *R = *a + *b - *c;
    return;
}

int **insertMatrixP(int *n, int *m){
    int **M = new int*[*n];
    for(int i = 0; i < *n; i++)
        M[i] = new int[*m];

    for(int i = 0; i < *n; i++)
        for(int j = 0; j < *m; j++)
            M[i][j] = rand()%10;

    return M;
}

void showMatrixP(char message[], int **M, int *n, int *m){
    cout << message << "[" << *n << "][" << *m << "]:" << endl;
    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++)
            cout << M[i][j] << ' ';
        cout << endl;
    }

    return;
}

void insertN(char message[], int *n){
    cout << message;
    cin >> *n;
    cout << endl;
}

void insertN(char message[], double *n){
    cout << message;
    cin >> *n;
    cout << endl;
}

void calcN(int *a, int *b, int *c, int *r){
    *r = *a + *b - *c;
    return;
}

void calcN(double *a, double *b, double *c, double *r){
    *r = *a + *b - *c;
    return;
}

void showN(char message[], int *r){
    cout << message << *r << endl;
    return;
}

void showN(char message[], double *r){
    cout << message << *r << endl;
    return;
}

int main(){
    srand(time(0));

/*
    int v[100], n = insert("Enter n = ");

    insertVector(v, n);
    showVector("v = ", v, n);
    sumaVector("Suma = ", v, n);
*/

/*
    int M[100][100], n = insert("Enter nr. linii = "), m = insert("Enter nr. coloane = ");
    insertMatrix(M, n, m);
    showMatrix("M: ", M, n, m);
*/

/*
    int *a = new int;
    insertP("Enter a = ", a);

    int *b = new int;
    insertP("Enter b = ", b);

    int *c = new int;
    insertP("Enter c = ", c);

    showP("a = ", a);
    showP("b = ", b);
    showP("c = ", c);

    int *R = new int;
    calcP(a, b, c, R);
    showP("R = a + b - c = ", R);
*/

/*
    int *n = new int(rand()%7 + 3), *m = new int(rand()%7 + 3), **M;
    M = insertMatrixP(n, m);
    showMatrixP("Matrix", M, n, m);

    for(int i = 0; i < *n; i++)
        delete[] M[i];

    delete[] M, delete n, delete m;
*/

/*
    int *a1 = new int;
    insertN("Enter a = ", a1);

    int *b1 = new int;
    insertN("Enter b = ", b1);

    int *c1 = new int;
    insertN("Enter c = ", c1);

    int *r1 = new int;
    calcN(a1, b1, c1, r1);

    showN("R = a + b - c = ", r1);

    double *a2 = new double;
    insertN("Enter a = ", a2);

    double *b2 = new double;
    insertN("Enter b = ", b2);

    double *c2 = new double;
    insertN("Enter c = ", c2);

    double *r2 = new double;
    calcN(a2, b2, c2, r2);

    showN("R = a + b - c = ", r2);
*/

    int *a = new int(123);
    double *b = new double(123.456);
    bool *c = new bool(true);
    char *d = new char('$');

    showP("int    = ", a);
    showP("double = ", b);
    showP("bool   = ", c);
    showP("char   = ", d);

    double r;
    calcP(a, b, c, &r);
    showP("R = a + b - c = ", &r);

    return 0;
}