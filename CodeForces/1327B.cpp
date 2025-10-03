#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<bool> used(n, false);
        vector<int> v;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;

            vector<int> a(k);
            for(int j = 0; j < k; j++){
                cin >> a[j];
                a[j]--;
            }

            bool flag = false;
            for(int j = 0; j < k; j++){
                if(!used[a[j]]){
                    used[a[j]] = true;
                    flag = true;
                    break;
                }
            }

            if(!flag)
                v.push_back(i);
        }

        if(!v.size())
            cout << "OPTIMAL" << endl;
        else{
            cout << "IMPROVE" << endl;
            cout << v.back() + 1 << ' ';
            for(int i = 0; i < n; i++)
                if(!used[i]){
                    cout << i + 1 << endl;
                    break;
                }
        }
    }

    return 0;
}