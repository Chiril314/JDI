#include <iostream>
 
using namespace std;
 
int main()
{
    int M, B, b, n, t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        B =0; M = 0;
        for(int j = 0; j < n; j++){
            cin >> b;
            if (b % 2 == 1) B = B + b;
            else M = M + b;
        }
         if (M > B) cout << "YES" << endl;
         else cout << "NO" << endl;
    }
    
 
    return 0;
}