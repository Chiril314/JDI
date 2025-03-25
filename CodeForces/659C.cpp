#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int check = 1, k = 0, j = 0;
    vector<int> ans;

    while(m >= check){
        while(j < n && a[j] < check)
            j++;
        
        if(j < n && a[j] == check){
            check++;
            continue;
        }
        
        if(m >= check){
            k++;
            ans.push_back(check);
            m -= check; 
        } else
            break;

        check++;
    }

    cout << k << endl;
    for(int i = 0; i < k; i++)
        cout << ans[i] << ' ';

    return 0;
}