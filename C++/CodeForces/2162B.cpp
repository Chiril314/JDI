#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;

        if(cnt0 > 0){
            cout << cnt1 << endl;
            for(int i = 0; i < n; i++)
                if(s[i] == '1')
                    cout << i + 1 << ' ';
            cout << endl;
        } else{
            cout << cnt0 << endl;
            for(int i = 0; i < n; i++)
                if(s[i] == '0')
                    cout << i + 1 << ' ';
            cout << endl;
        }
    }

    return 0;
}