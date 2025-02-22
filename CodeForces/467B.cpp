#include <iostream>

using namespace std;

int Cnt(int a, int b) {
    int diff = a ^ b; 
    int cnt = 0;
    
    while (diff > 0) {  
        cnt += (diff % 2); 
        diff /= 2;      
    }
    
    return cnt;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    int x[m + 1]; 
    for(int i = 0; i <= m; i++)
        cin >> x[i];

    int check = x[m]; 
    int ans = 0;

    for(int i = 0; i < m; i++)
        if(Cnt(check, x[i]) <= k) 
            ans++;

    cout << ans;

    return 0;
}