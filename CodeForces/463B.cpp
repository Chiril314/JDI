#include <iostream>

using namespace std;

int main(){ 
    long long n;
    cin >> n;

    long long h[n];
    for(int i = 0; i < n; i++)
        cin >> h[i];

    long long energy = 0, ans = 0, height = 0;

    for(int i = 0; i < n; i++){
        energy += height - h[i]; 
        if(energy < 0){ 
            ans += -energy;
            energy = 0;
        }

        height = h[i];
    }

    cout << ans;

    return 0;
}