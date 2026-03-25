#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<long long>());

        long long prefixSum = 0, answer = 0;
        for(int i = 0; i < n; i++){
            prefixSum += a[i];
            if(prefixSum >= (i + 1) * x)
                answer = i + 1;
            else
                break;
        }

        cout << answer << endl;
    }

    return 0;
}