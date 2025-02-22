#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arraySum(vector<int> a){
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        ans += a[i];
    }

    return ans;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a;
        vector<int> b;
        bool flag = false;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            b.push_back(x);
        }

        while(k--){
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            
            if(a[0] > b[n - 1]){
                cout << arraySum(a) << endl;
                flag = true;
                break;
            } else{
                int temp = b[n - 1];
                b[n - 1] = a[0];
                a[0] = temp;
            }
        }

        if(!flag){
            cout << arraySum(a) << endl;
        }
    }

    return 0;
}