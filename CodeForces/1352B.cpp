#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> ans;
        if(n == k){
            for(int i = 0; i < k; i++){
                ans.push_back(1);   
                n--;
            }
        } else if(n % 2 == 0 && k % 2 == 0){
            for(int i = 0; i < k - 1; i++){
                ans.push_back(1);
                n--;
            }
            ans.push_back(n);
            n = 0;
        } else if(n % 2 == 0){
            for(int i = 0; i < k - 1; i++){
                ans.push_back(2);
                n -= 2;
            }
            ans.push_back(n);
            n = 0;
        } else if(n % k == 0){
            for(int i = 0; i < k; i++){
                ans.push_back(n / k);
            }
            n = 0;
        } else if(n % 2 == 1){
            for(int i = 0; i < k - 1; i++){
                n -= 1;
                ans.push_back(1);
            }
            ans.push_back(n);
            n = 0;
        }

        int check1 = ans[0] % 2, check2 = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] % 2 == check1 && ans[i] > 0){
                check2++;
            }
        }

        if(check2 == ans.size()){
            cout << "YES" << endl;
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i] << ' ';
            }
            cout << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}