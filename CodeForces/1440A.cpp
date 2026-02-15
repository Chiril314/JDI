#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, c, d, b, cnt0 = 0, cnt1 = 0;
        cin >> n >> c >> d >> b;

        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                cnt1++;
            else
                cnt0++;
        }

        int ans1 = cnt0 * c + cnt1 * d, ans2 = n * c + cnt1 * b, ans3 = n * d + cnt0 * b;
        cout << min({ans1, ans2, ans3}) << endl;
    }

    return 0;
}