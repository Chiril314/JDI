#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int l[n];
    char c[n];
    for(int i = 0; i < n; i++){
        cin >> l[i] >> c[i];
    }

    int cnt = 1, maxHeight = 0, check = l[0];
    for(int i = 1; i < n; i++){
        if(c[i - 1] != c[i] && l[i - 1] > l[i]){
            check += l[i];
            maxHeight = max(maxHeight, check);
        } else{
            cnt++;
            check = 0;
        }
    }

    cout << cnt << ' ' << maxHeight;

    return 0;
}