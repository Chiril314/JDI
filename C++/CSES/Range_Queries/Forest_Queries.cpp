#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<string> s(n);
    vector<int> a(n * n);
    for(int i = 0, ind = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < n; j++){
            if(i == 0){
                if(j != 0)
                    a[ind] = a[ind - 1];

                if(s[i][j] == '*')
                    a[ind]++;
            } else{
                a[ind] = a[ind - n];
                if(j != 0){
                    a[ind] += a[ind - 1];
                    a[ind] -= a[ind - 1 - n];
                }

                if(s[i][j] == '*')
                    a[ind]++;
            }

            ind++;
        }
    }

    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1--;
        y1--;
        x2--;
        y2--;

        int ans = a[n * x2 + y2];

        bool flag = false;
        if(y1 > 0){
            ans -= a[n * x2 + y1 - 1];
            flag = true;
        }

        if(x1 > 0){
            ans -= a[n * (x1 - 1) + y2];
            if(flag)
                ans += a[n * (x1 - 1) + y1 - 1];
        }

        cout << ans << endl;
    }

    return 0;
}