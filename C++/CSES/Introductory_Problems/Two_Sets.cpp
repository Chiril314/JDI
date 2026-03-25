#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n % 4 != 3 && n % 4 != 0)
        cout << "NO";
    else if(n % 4 == 3){
        cout << "YES" << endl;
        cout << (n / 2) + 1 << endl;
        int k;
        for(int i = 0; i < (n / 2 + 1); i++){
            if(i == 0 || i == 1)
                cout << i + 1 << ' ';
            else if(i == 2){
                cout << 4 << ' ';
                k = 4;
            } else if(i % 2 == 1){
                cout << k + 3 << ' ';
                k += 3;
            } else{
                cout << k + 1 << ' ';
                k++;
            }
        }

        cout << endl << (n / 2) << endl;
        for(int i = 0; i < (n / 2); i++){
            if(i == 0)
                cout << 3 << ' ';
            else if(i == 1){
                cout << 5 << ' ';
                k = 5;
            } else if(i % 2 == 0){
                cout << k + 1 << ' ';
                k++;
            } else{
                cout << k + 3 << ' ';
                k += 3;
            }
        }
    } else if(n % 4 == 0){
        cout << "YES" << endl;
        cout << (n / 2) << endl;

        int k; 
        for(int i = 0; i < (n / 2); i++){
            if(i == 0){
                cout << 1 << ' ';
                k = 1;
            } else if(i % 2 == 1){
                cout << k + 3 << ' ';
                k += 3;
            } else{
                cout << k + 1 << ' ';
                k++;
            }
        }

        cout << endl << (n / 2) << endl;
        for(int i = 0; i < (n / 2); i++){
            if(i == 0){
                cout << 2 << ' ';
                k = 2;
            } else if(i % 2 == 1){
                cout << k + 1 << ' ';
                k++;
            } else{
                cout << k + 3 << ' ';
                k += 3;
            }
        }
    }

    return 0;
}