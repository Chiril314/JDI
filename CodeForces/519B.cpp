#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], sumA = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sumA += a[i];
    }

    int b[n - 1], sumB = 0;
    for(int i = 0; i < n - 1; i++){
        cin >> b[i];
        sumB += b[i];
    }

    int c[n - 2], sumC = 0;
    for(int i = 0; i < n - 2; i++){
        cin >> c[i];
        sumC += c[i];
    }

    cout << sumA - sumB << endl << sumB - sumC;


    return 0;
}