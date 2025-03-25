#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    string nume[n], prenume[n];

    for(int i = 0; i < n; i++){
        cin >> nume[i] >> prenume[i] >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                string tmp = nume[j];
                nume[j] = nume[j + 1];
                nume[j + 1] = tmp;

                tmp = prenume[j];
                prenume[j] = prenume[j + 1];
                prenume[j + 1] = tmp;
            }
        }
    }

    double ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i];
    }

    cout << round((ans / n) * 100) / 100 << endl;

    cout << nume[n - 1] << ' ' << prenume[n - 1] << ' ' << a[n - 1] << endl;
    cout << nume[0] << ' ' << prenume[0] << ' ' << a[0];

    return 0;
}