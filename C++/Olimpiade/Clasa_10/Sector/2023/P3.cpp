#include <iostream>

using namespace std;

int main(){ 
    int a[3], r[3], n[3], arr[150], x = 0;

    for(int i = 0; i < 3; i++){
        cin >> a[i] >> r[i] >> n[i];
    }

    x = n[0] + n[1] + n[2];

    for(int i = 0; i < n[0]; i++){
        arr[i] = a[0] + r[0] * i;
    }

    for(int i = n[0]; i < n[0] + n[1]; i++){
        arr[i] = a[1] + r[1] * (i - n[0]);
    }

    for(int i = n[0] + n[1]; i < n[0] + n[1] + n[2]; i++){
        arr[i] = a[2] + r[2] * (i - n[0] - n[1]);
    }

    sort(arr, arr + n[0] + n[1] + n[2]);

    for(int i = 0; i < x; i++){
        if(arr[i] == arr[i + 1]){
            for(int j = i; j < x; j++){
                arr[j] = arr[j + 1];
            }
            x--;
        }
    }

    for(int i = 0; i < x; i++){
        if(arr[i] == arr[i + 1]){
            for(int j = i; j < x; j++){
                arr[j] = arr[j + 1];
            }
            x--;
        }
    }

    cout << x << endl;

    for(int i = 0; i < x; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}