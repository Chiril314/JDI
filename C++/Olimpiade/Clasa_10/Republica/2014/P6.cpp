#include <iostream>
#include <vector>

using namespace std;

int main(){
    int p, q, n;
    cin >> p >> q >> n;
    
    vector<int> a(q, 0);

    a[0] = p; 
    for(int i = 0; i < n; i++){
        long long New = 0;
        for(int j = 1; j < q; j++)
            New += a[j];
        
        for(int j = q - 1; j > 0; j--)
            a[j] = a[j - 1];
        
        a[0] = New;
    }
    
    long long ans = 0;
    for(int i = 0; i < q; i++)
        ans += a[i];
    
    cout << ans;

    return 0;
}