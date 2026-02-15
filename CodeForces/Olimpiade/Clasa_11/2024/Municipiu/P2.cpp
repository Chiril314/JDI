#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<string> ans(n, "");
    int cnt = n, step = 1, poz = n - 1; 
    for(int i = 0; i < s.size(); i++){
        ans[poz] += s[i];
        if(step == 1 && cnt != 1)
            poz--;
        else if(step == 2 && cnt != 1)
            poz++;
        else if(step == 3 && cnt != 1)
            poz--;
        else if(step == 4 && cnt != 1)
            poz++;
        
        cnt--;
        if(cnt == 0){
            if(step == 1){
                step = 2;
                cnt = n - 2;
                poz++;
            } else if(step == 2){
                if(n == 3){
                    step = 4;
                    cnt = n;
                    poz--;
                } else{
                    step = 3;
                    cnt = n - 3;
                    poz--;
                }
            } else if(step == 3){
                step = 4;
                cnt = n;
                poz--;
            } else{
                step = 1;
                cnt = n;
            }
        }        
    }

    for(int i = 0; i < n; i++)
        cout << ans[i];

    return 0;
}