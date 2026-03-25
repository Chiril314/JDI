#include <iostream>
#include <vector>
#include <algorithm>

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

        vector<int> a(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];

        if(n == 1){
            cout << "T" << endl;
            continue;
        }

        while(true){
            sort(a.rbegin(), a.rend());
            if(a[0] == 0){
                cout << "HL" << endl;
                break;
            } else
                a[0]--;
            
            if(a[1] == 0){
                cout << "T" << endl;
                break;
            } else
                a[1]--;
        }    
    }

    return 0;
}