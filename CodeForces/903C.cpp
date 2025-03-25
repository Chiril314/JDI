#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 1, check = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i - 1])
            check++;
        else{
            ans = max(ans, check);
            check = 1;
        }
    }

    ans = max(ans, check);

    cout << ans;

    return 0;
}