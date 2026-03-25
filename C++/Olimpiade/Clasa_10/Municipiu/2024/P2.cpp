#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    vector<bool> flag(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        flag[i] = false;
    }

    sort(a, a + n);

    int m;
    cin >> m;

    int b[m], max_diff = 0, ans1, ans2, ans3;
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(b, b + m);

    if(b[0] > a[0]){
        ans1 = b[0] - a[0];
    } else{
        ans1 = 0;
    }

    if(b[m] < a[n]){
        ans2 = a[n] - b[m];
    } else{
        ans2 = 0;
    }

    for(int i = 1; i < m; i++){
        max_diff = max(max_diff, (b[i] - b[i - 1]));
    }

    if(max_diff % 2 == 0){
        ans3 = max_diff / 2;
    } else{
        ans3 = (max_diff / 2) + 1;
    }

    cout << max(ans1, max(ans2, ans3));

    return 0;
}