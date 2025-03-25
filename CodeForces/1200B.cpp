#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, m, k, x = 0;
        cin >> n >> m >> k;

        vector<long long> h(n);
        for(int i = 0; i < n; i++)
            cin >> h[i];

        bool win = true; 
        for(int i = 0; i < n - 1; i++){
            long long heightCheck = max(x, h[i + 1] - k);

            if(h[i] >= heightCheck)
                m += (h[i] - heightCheck);
            else{
                long long neededBlocks = heightCheck - h[i];
                if(m >= neededBlocks)
                    m -= neededBlocks;
                else{
                    win = false; 
                    break;
                }
            }
        }

        if(win)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}