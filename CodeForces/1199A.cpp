#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = i - 1; j >= max(0, i - x); j--)
            if(a[i] > a[j])
                flag = false;

        for(int j = i + 1; j < min(n, i + y + 1); j++)
            if(a[i] > a[j])
                flag = false;
            
        if(flag){
            cout << i + 1;
            return 0;
        }
    }

    return 0;
}