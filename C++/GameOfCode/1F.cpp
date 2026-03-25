#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt = 0, mx = -1, posLast = 0;
        for(int i = 0; i < s.size(); i++)
            if(i < k){
                if(s[i] == 'A')
                    cnt++;
            } else{
                mx = max(mx, cnt);
                if(s[i] == 'A')
                    cnt++;

                if(s[posLast] == 'A')
                    cnt--;
                
                posLast++;
            }
        
        mx = max(mx, cnt);
        cout << k - mx << endl;
    }

    return 0;
}