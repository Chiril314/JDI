#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h[n];
    for(int i = 0; i < n; i++)
        cin >> h[i];

    int maxAns = 0;
    for(int i = 0; i < n; i++){
        int maxCheck = h[i], check = h[i];
        for(int j = i + 1; j < n; j++){
            if(check <= h[j])
                maxCheck += check;
            
            if(check > h[j] || j == n - 1){
                maxAns = max(maxAns, maxCheck);
                break;
            }
        }
    }

    int x = 0;
    for(int i = n - 1; i >= 0; i--){
        int maxCheck = h[i], check = h[i];
        for(int j = i - 1; j >= 0; j--){
            if(check <= h[j])
                maxCheck += check;

            if(check > h[j] || j == 0){
                x = max(x, maxCheck);
                break;
            }
        }
    }

    cout << max(maxAns, x);

    return 0;
}