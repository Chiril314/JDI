#include <iostream>

using namespace std;

int main(){
    int n, m, maxSteps, minSteps;
    cin >> n >> m;

    if(n % 2 == 0){
        minSteps = n / 2;
    } else{
        minSteps = (n / 2) + 1;
    }

    maxSteps = n;

    int cnt = 1, ans;
    bool flag = false;
    while(!flag){
        if(m * cnt >= minSteps && m * cnt <= maxSteps){
            ans = m * cnt;
            flag = true;
        } else{
            if(m * cnt > maxSteps){
                ans = -1;
                flag = true;
            }
        }
        cnt++;
    }

    cout << ans;

    return 0;
}