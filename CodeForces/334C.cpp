#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, num = 1;
    cin >> n;

    for(int i = 0; i < 41; i++){
        if(n % num != 0){
            cout << (n + num - 1) / num;
            return 0;
        }

        num *= 3;
    }

    return 0;
}