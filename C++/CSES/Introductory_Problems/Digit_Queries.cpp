#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while(q--){
        long long k;
        cin >> k;

        long long digits = 1, cnt = 9, start = 1;
        while(k > cnt * digits){
            k -= cnt * digits;
            digits++;
            cnt *= 10;
            start *= 10;
        } 

        long long num = start + (k - 1) / digits;
        long long pos = (k - 1) % digits;

        cout << to_string(num)[pos] << "\n";
    }

    return 0;
}