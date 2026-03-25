#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<long long> neededMoves;

        for(long long i = 0; i < n; i++){
            cin >> a[i];

            long long r = a[i] % k;
            if(r != 0)
                neededMoves.push_back(k - r);
        }

        if(neededMoves.empty()){
            cout << 0 << endl;
            continue;
        }

        sort(neededMoves.begin(), neededMoves.end());

        long long ans = 0;
        long long currentCnt = 0;

        for(int i = 0; i < neededMoves.size(); i++){
            if (i > 0 && neededMoves[i] == neededMoves[i - 1])
                currentCnt++;
            else
                currentCnt = 0;

            long long moves = currentCnt * k + neededMoves[i] + 1;
            if(moves > ans)
                ans = moves;
        }

        cout << ans << endl; 
    }

    return 0;
}