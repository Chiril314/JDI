#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;

    long long a[n],b[n];
    vector<long long> dif;
    long long sum = 0, check = 0, x;
    for(int i = 0;i<n;i++){
        cin >> a[i] >> b[i];
        x = a[i] - b[i];
        dif.push_back(x);
        sum += a[i];
        check += b[i];
    }

    if(check > m)
        cout << -1 << endl;
    else{
        if(sum <= m)
            cout << 0 << endl;
        else{
            sort(dif.rbegin(), dif.rend());

            long long ans = 0;
            for(int i = 0; i < dif.size(); i++){
                sum -= dif[i];

                ans++;
                if(sum <= m)
                    break;
            }

            cout << ans;
        }
    }

    return 0;
}