#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    int init = 0;
    for(int i = 0; i < n; i++)
        if (t[i] == 1)
            init += a[i];

    int Max = 0, curr = 0;
    for(int i = 0; i < k; i++)
        if(t[i] == 0)
            curr += a[i];

    Max = curr;
    for(int i = k; i < n; i++){
        if(t[i] == 0) 
            curr += a[i];
        if(t[i - k] == 0)
            curr -= a[i - k];

        Max = max(Max, curr);
    }

    cout << init + Max;

    return 0;
}