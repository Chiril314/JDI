#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long b[n], a[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
 
    long long Max = 0;
    a[0] = b[0] + Max;
    Max = a[0];
    
    for(int i = 1; i < n; i++){
        a[i] = b[i] + max(Max, a[i - 1]);
        Max = max(Max, a[i]);
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    
    return 0;
}