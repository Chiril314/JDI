#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int nDigits(int n){
    int cnt = 0, temp = n;
    while(temp != 0){
        temp /= 10;
        cnt++;
    }

    return cnt;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int x = nDigits(n);
        vector<int> ans;
        for(int i = 1; i <= x; i++){
            int y = int(n / pow(10, x - i)) % 10;
            if(y != 0){  
                ans.push_back(y * pow(10, x - i));
                n -= y * pow(10, x - i);
            }
        }

        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}