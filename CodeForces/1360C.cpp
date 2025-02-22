#include <iostream>
#include <algorithm>

using namespace std;

bool pairCheck(int a[], int n) {
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) 
            cnt2++;
        else 
            cnt1++;
    }

    if(cnt2 % 2 == 0 && cnt1 % 2 == 0) 
        return true;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(abs(a[i] - a[j]) == 1)
                return true;

    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        if(pairCheck(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}