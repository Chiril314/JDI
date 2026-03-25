#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    bool flag = true;
    for(int i = 1; i < n; i++)
        if(a[i] != a[i - 1] + 1){
            flag = false;
            break;
        }

    if(flag){
        cout << "DA" << endl; 
        cout << a[n - 1];
    } else{
        cout << "NU" << endl;

        vector<int> s(1001, 0);
        for(int i = 0; i < n; i++)
            s[a[i]]++;

        for(int i = 0; i < n; i++)
            if(s[a[i]] == 1)
                cnt++;
        
        cout << cnt;
    }

    return 0;
}