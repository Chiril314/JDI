#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while(q--){
        int l, r;
        cin >> l >> r;

        char a, b;
        cin >> a >> b;

        l--;
        r--;

        for(int i = l; i < r + 1; i++)
            if(s[i] == a)
                s[i] = b;   
    }

    cout << s;

    return 0;
}