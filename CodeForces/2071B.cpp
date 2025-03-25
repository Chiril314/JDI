#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
 
bool isPerfectSquare(long long x){
    long long r = (long long)floor(sqrt((long double)x));
    return r * r == x;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        long long total = n * (n + 1) / 2;
        if(n == 1 || isPerfectSquare(total)){
            cout << -1 << endl;
            continue;
        }
 
        vector<int> perm(n);
        if(n >= 2){
            perm[0] = 2;
            perm[1] = 1;
        }

        for(int i = 2; i < n; i++)
            perm[i] = i + 1;
 
        long long prefix = perm[0];
        for(int i = 1; i < n; i++)
            if(isPerfectSquare(prefix + perm[i])){
                if(i < n - 1){
                    swap(perm[i], perm[i+1]);
                    prefix += perm[i]; 
                } else
                    prefix += perm[i];
            }
            else
                prefix += perm[i];
 
        for(int i = 0; i < n; i++)
            cout << perm[i] << ' ';

        cout << endl;
    }
    return 0;
}