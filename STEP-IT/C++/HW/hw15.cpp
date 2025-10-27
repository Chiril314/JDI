#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int *n1 = new int(rand()%10 + 10), *n2 = new int(rand()%10 + 10);
    int *v1 = new int[*n1], *v2 = new int[*n2];

    cout << "v1[" << *n1 << "]: ";
    for(int i = 0; i < *n1; i++){
        v1[i] = rand()%5;
        cout << v1[i] << ' ';
    }
    
    cout << endl <<"v2[" << *n2 << "]: ";
    for(int i = 0; i < *n2; i++){
        v2[i] = rand()%5;
        cout << v2[i] << ' ';  
    }   

    int *N = new int;
    if(*n1 < *n2)
        *N = *n1;
    else 
        *N = *n2;

    int *vy = nullptr, *ny = new int(0);
    for(int i = 0; i < *N; i++){
        if(v1[i] == v2[i]){
            *ny += 1;
            int *temp = new int[*ny];
            for(int j = 0; j < *ny - 1; j++)
                temp[j] = vy[j];

            temp[*ny - 1] = v1[i];
            delete[] vy;
            vy = temp;
        }
    }

    delete N, delete[]v2, delete[]v1, delete n1, delete n2;
    
    cout << endl <<"vy[" << *ny << "]: ";
    for(int i = 0; i < *ny; i++)
        cout << vy[i] << ' ';

    delete[]vy, delete ny;

    return 0;
}