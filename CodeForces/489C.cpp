#include <iostream>

using namespace std;

int main(){
    int m, s;
    cin >> m >> s;

    if((s == 0 && m > 1) || s > 9 * m){
        cout << -1 << ' ' << -1;
        return 0;
    }

    int minNumber[m], maxNumber[m];

    for(int i = 0; i < m; i++){
        minNumber[i] = 0;
        maxNumber[i] = 0;
    }

    int sum = s;
    for(int i = m - 1; i >= 0; i--){
        if(sum > 9){
            minNumber[i] = 9;
            sum -= 9;
        } else{
            minNumber[i] = sum;
            sum = 0;
        }
    }

    if(minNumber[0] == 0 && m > 1){
        minNumber[0] = 1;
        for(int i = 1; i < m; i++){
            if(minNumber[i] > 0){
                minNumber[i]--;
                break;
            }
        }
    }

    sum = s;
    for(int i = 0; i < m; i++){
        if(sum > 9){
            maxNumber[i] = 9;
            sum -= 9;
        } else{
            maxNumber[i] = sum;
            sum = 0;
        }
    }

    for(int i = 0; i < m; i++){
        cout << minNumber[i];
    }

    cout << ' ';

    for(int i = 0; i < m; i++){
        cout << maxNumber[i];
    }

    return 0;
}