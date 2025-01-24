#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int check1[7] = {0}, check2[7] = {0};

    int d1[n], d2[n], cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> d1[i] >> d2[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(d1[i] == d1[j]){
                check1[d1[i]]++;
            }
            if(d2[i] == d2[j]){
                check2[d2[i]]++;
            }
        }
    }

    for(int i = 0; i < 7; i++){
        if(check1[i] >= 1){
            cnt++;
        }

        if(check2[i] >= 1){
            cnt++;
        }
    }

    cout << cnt + 1;

    return 0;
}