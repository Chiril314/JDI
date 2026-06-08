#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, curr = 0;
    cin >> n;

    int mask = (1 << (n - 1)) - 1;
    string ans(n, '0');

    vector<bool> used(1 << n);
    used[0] = true;

    for(int i = 0; i < (1 << n) - 1; i++){
        int check = (curr << 1) | 1;
        if(!used[check])
            ans += '1';
        else{
            check = (curr << 1);
            ans += '0';
        }

        used[check] = true;
        curr = check & mask;
    }

    cout << ans;

    return 0;
}