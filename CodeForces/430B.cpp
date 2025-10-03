#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, d;
    cin >> n >> k >> d;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ansmx = 0;
    for(int i = 0; i < n; i++){
        int ans = 0;
        vector<int> v;
        for(int j = 0; j < i; j++)
            v.push_back(a[j]);

        v.push_back(d);
        for(int j = i + 1; j <= n; j++)
            v.push_back(a[j - 1]);

        bool flag = true;
        while(flag){
            flag = false;
            int mx = 1;
            for(int j = 1; j < v.size(); j++){
                if(v[j] == v[j - 1]){
                    mx++;
                } else if(mx >= 3){
                    v.erase(v.begin() + j - mx, v.begin() + j);
                    ans += mx;
                    mx = 1;
                    flag = true;
                    break;
                } else
                    mx = 1;
            }

            if(mx >= 3){
                v.erase(v.begin() + v.size() - mx, v.begin() + v.size() - 1);
                ans += mx;
                flag = true;
            }            
        }

        ansmx = max(ansmx, ans);
    }

    cout << max(0, ansmx - 1);

    return 0;
}