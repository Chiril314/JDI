#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    b = a;
    sort(b.begin(), b.end());

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[i] != b[i])
            cnt++;

    if(cnt % 2 == 0 && cnt <= 2)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}