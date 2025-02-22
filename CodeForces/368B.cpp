#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1); 
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    vector<int> l(m);
    for(int i = 0; i < m; i++){
        cin >> l[i];
    }

    vector<int> distinct(n + 1, 0);
    vector<bool> seen(100005, false); 

    int cnt = 0;

    for(int i = n; i >= 1; i--){
        if(!seen[a[i]]){ 
            seen[a[i]] = true;
            cnt++;
        }
        distinct[i] = cnt;
    }

    for(int i = 0; i < m; i++){
        cout << distinct[l[i]] << endl;
    }

    return 0;
}