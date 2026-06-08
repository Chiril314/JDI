#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if(a + b > n){
            cout << "NO\n";
            continue;
        }


        vector<int> ans1, ans2;
        for(int i = 1; i <= (n - a - b); i++){
            ans1.push_back(i);
            ans2.push_back(i);
        }

        for(int i = n; i >= (n - a + 1); i--)
            ans1.push_back(i);

        for(int i = (n - b); i >= (n - a - b + 1); i--)
            ans2.push_back(i);

        for(int i = (n - a); i >= (n - a - b + 1); i--)
            ans1.push_back(i);

        for(int i = n; i >= (n - b + 1); i--)
            ans2.push_back(i);

        bool flag = false;
        for(int i = n - a - b; i < n - b; i++)
            if(ans1[i] <= ans2[i]){
                flag = true;
                break;
            }

        for(int i = n - b; i < n; i++)
            if(ans1[i] >= ans2[i]){
                flag = true;
                break;
            }

        if(flag){
            cout << "NO\n";
        } else{
            cout << "YES\n";
            for(int i = 0; i < n; i++)
                cout << ans1[i] << ' ';
            
            cout << "\n";
            for(int i = 0; i < n; i++)
                cout << ans2[i] << ' ';
            cout << "\n";
        }
    }

    return 0;
}