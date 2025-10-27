#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void insert(int *v, int *n){
    for(int *i = new int(0); *i < *n; *i += 1)
        v[*i] = rand()%10;

    return;
}

void insert(double *v, int *n){
    for(int *i = new int(0); *i < *n; *i += 1)
        v[*i] = rand()%10 * 1.15;

    return;
}

void insert(char *v, int *n){
    for(int *i = new int(0); *i < *n; *i += 1)
        v[*i] = '!' + rand()%90;

    return;
}

template<typename T>
void show(char message[], T *v, int *n){
    cout << message;
    for(int i = 0; i < *n; i++)
        cout << v[i] << ' ';
    cout << endl;

        return;
}

int main(){
    srand(time(0));

    int *n1 = new int(rand()%10 + 10);
    int *v1 = new int[*n1]();

    insert(v1, n1);
    show("int v :: ", v1, n1);


    int *n2 = new int(rand()%10 + 10);
    double *v2 = new double[*n2]();

    insert(v2, n2);
    show("double v :: ", v2, n2);


    int *n3 = new int(rand()%10 + 10);
    char *v3 = new char[*n3]();

    insert(v3, n3);
    show("char v :: ", v3, n3);

    return 0;
}