#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    vector<int> ans;
    for(int i = 0; i < n; i++){
        int check1 = 0, cnt = 0;
        
        vector<int> b;
        for(int j = 0; j < i; j++){
            b.push_back(t[j]);
            check1 += t[j];
        }
        
        sort(b.rbegin(), b.rend()); 

        int check2 = check1 + t[i] - m;
        if(check2 > 0){
            for(int j = 0; j < i; j++){
                check2 -= b[j];
                cnt++;
                if(check2 <= 0)
                    break;
            }
        }
        
        ans.push_back(cnt);
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    
    return 0;
}