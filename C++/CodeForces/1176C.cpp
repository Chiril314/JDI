#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int seq[6] = {4, 8, 15, 16, 23, 42};

    vector<int> dp(6, 0);
    for(int i = 0; i < n; i++){
        int num = a[i], pos = -1;
        for(int j = 0; j < 6; j++){
            if(seq[j] == num){
                pos = j;
                break;
            }
        }

        if(pos == 0){
            dp[0]++;
        } else{
            if(dp[pos - 1] > 0){
                dp[pos - 1]--;
                dp[pos]++;
            }
        }
    }

    cout << n - dp[5] * 6;

    return 0;
}