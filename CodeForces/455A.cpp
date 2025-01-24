#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], check[n], maxN = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        check[i] = a[i];
        maxN = max(maxN, a[i]);
    }

    int ans[maxN + 1];

    for(int i = 1; i <= maxN; i++){
        for(int j = 0; j < n; j++){
            if(check[j] == i){
                ans[i] += i;
            }
        }
    }

    int ANS = 0;
    for(int i = 1; i < maxN; i++){
        ANS = max(ans[i], ANS);
    }

    cout << ans;
    

    return 0;
}