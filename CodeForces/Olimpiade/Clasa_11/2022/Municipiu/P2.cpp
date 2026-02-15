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

    vector<int> a(n);
    vector<pair<string, string>> s(n);

    double m = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i].first >> s[i].second >> a[i];
        m += a[i];
    }
    
    bool flag = false;
    while(!flag){
        flag = true;
        for(int i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1]){
                int temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;

                pair<string, string> tmp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = tmp;

                flag = false;
            }
    }

    cout << m / n << endl;
    for(int i = 0; i < n; i++)
        cout << s[i].first << ' ' << s[i].second << ' ' << a[i] << endl;

    return 0;
}