#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, poz1 = -1, poz2 = -1;
        cin >> n;

        string s;
        cin >> s;

        for(int i = 0; i < n; i++)
            if(s[i] == '1'){
                if(poz1 == -1)
                    poz1 = i;
                else
                    poz2 = i;
            }
        
        if(poz1 == -1){
            cout << n << endl;
            continue;
        }

        if(poz2 == -1){
            cout << max((1 + poz1) * 2, (n - poz1) * 2) << endl;
            continue;
        }

        cout << max((1 + poz2) * 2, (n - poz1) * 2) << endl;
    }
    
    return 0;
}