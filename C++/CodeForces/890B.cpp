#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(200001, -1);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]] = i;  
    }

    long long check = n, ans = -1;
    for(long long i = 0; i < 200001; i++){ 
        if(b[i] != -1 && b[i] < check){
            check = b[i];
            ans = i;
        }
    }

    cout << ans;

    return 0;
}