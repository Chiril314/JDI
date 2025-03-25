#include <iostream>
#include <vector>
#include <cmath>  // Include for pow function

using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    
    vector<int> a(n);

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    if(sum < 2 * p){
        cout << 0;
        return 0;
    }
    
    int ans = 0, k = pow(2, n); 
    for(int i = 1; i < k; i++){
        int check1 = 0, temp = i;

        for(int j = 0; j < n; j++){
            if(temp % 2 == 1)
                check1 += a[j];

            temp /= 2;
        }
        
        int check2 = sum - check1;
        if(check1 >= p && check2 >= p)
            ans++;
    }
    
    cout << ans;

    return 0;
}