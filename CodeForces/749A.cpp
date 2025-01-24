#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int k = n / 2, ans[k];

    for(int i = 0; i < k; i++){
        if(n == 3){
            ans[i] = 3;
            n -= 3;
        } else if(n >= 2 && n != 3){
            ans[i] = 2;
            n -= 2;
        }
    }

    cout << k << endl;
    for(int i = 0; i < k; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}