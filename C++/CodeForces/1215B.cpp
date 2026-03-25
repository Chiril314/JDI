#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long x = 0, y = 0, z = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(x % 2 == 1)
            z++;
        else
            y++;
        
        if(a[i] < 0)    
            x++;

        if(x % 2 == 1)
            r += z; 
        else
            r += y;
    }

    cout << n * (n + 1) / 2 - r << ' ' << r;

    return 0;
}