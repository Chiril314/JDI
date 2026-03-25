#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        int worms;
        cin >> worms;
        sum += worms;
        a[i] = sum;
    }

    int m;
    cin >> m;
    vector<int> q(m);
    
    for(int i = 0; i < m; i++){
        cin >> q[i];
    }

    for(int i = 0; i < m; i++){
        int check = q[i];

        int ans = lower_bound(a.begin(), a.end(), check) - a.begin();
        
        cout << (ans + 1) << endl;
    }

    return 0;
}