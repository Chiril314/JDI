#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n], b[n], check = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    b[0] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > k - b[i - 1])
            b[i] = a[i];
        else
            b[i] = k - b[i - 1];
    }

    for(int i = 0; i < n; i++)
        check += b[i] - a[i];

    cout << check << endl;
    for(int i = 0; i < n; i++)
        cout << b[i] << ' ';

    return 0;
}