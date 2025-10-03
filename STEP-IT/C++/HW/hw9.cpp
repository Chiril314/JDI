#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int a[50], n = rand()%48 + 1;

    cout << "v["<< n << "] este: ";
    for(int i = 0; i < n; i++){
        a[i] = rand()%20;
        cout << a[i] << ' ';
    }

    int min = a[0], max = a[0], pmin = 0, pmax = 0;
    for(int i = 1; i < n; i++)
        if(a[i] < min){
            min = a[i];
            pmin = i;
        } else if(a[i] > max){
            max = a[i];
            pmax = i;
        }

    string s;
    cout << endl << "Sortare crescator sau descrescator: ";
    do{
        cin >> s;
    } while(s != "crescator" && s != "descrescator");
    cout << endl << endl << "Numarul minim " << min << " se afla pe pozitia " << pmin + 1;
    cout << endl << "Numarul maxim " << max << " se afla pe pozitia " << pmax + 1;

    if(pmin > pmax){
        int temp = pmin;
        pmin = pmax;
        pmax = temp;
    }


    bool flag = true;
    if(s == "crescator"){
        while(flag){
            flag = false;
            for(int i = pmin, temp; i < pmax - 1; i++){
                if(a[i] > a[i + 1]){
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    flag = true;
                }
            }
        }
    } else{
        while(flag){
            flag = false;
            for(int i = pmin, temp; i < pmax - 1; i++){
                if(a[i] < a[i + 1]){
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    flag = true;
                }
            }
        }
    }


    cout << endl << "v[" << n << "] modificat este: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}