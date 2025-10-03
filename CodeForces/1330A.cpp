#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x, a;
        cin >> n >> x;

        vector<bool> flag(1000, false);
        for(int i = 0; i < n; i++){
            cin >> a;
            flag[a] = true;
        }

        int ans = 1;
        for(int i = 1; i < 1000; i++)
            if(!flag[i]){
                if(x){
                    x--;
                    flag[i] = true;
                } else{
                    ans = i;
                    break;
                }
            }

        cout << ans - 1 << endl;
    }   


    return 0;
}