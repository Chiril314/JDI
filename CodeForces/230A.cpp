#include <iostream>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;

    int x[n], y[n];
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;

                temp = y[j];
                y[j] = y[j + 1];
                y[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(s > x[i]){
            s += y[i];
        } else{
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}