#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s, c = "";
        cin >> s;

        int ans = (s.size() - 1) * 9;
        while(c.size() < s.size())
            c += '1';
        
        int f = stoi(c), n = stoi(s);
        for(int i = 1; i <= 9; i++)
            if(i * f <= n)
                ans++;
            else
                break;
        
        cout << ans << endl;
    }

    return 0;
}