#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        long long x;
        cin >> x;

        if(x % 3 == 0)
            cout << -1 << endl;
        else if(x == 1)
            cout << 0 << endl;
        else{
            vector<int> ans;
            while(x != 1){
                if(x % 2 == 1){
                    x += 3;
                    ans.push_back(2);
                } else{
                    while(x % 2 == 0){
                        x /= 2;
                        ans.push_back(1);
                    }
                }
            }

            reverse(ans.begin(), ans.end());

            cout << ans.size();
            for(int i = 0; i < ans.size(); i++)
                cout << ' ' << ans[i];

            cout << endl;
        }   
    }

    return 0;
}