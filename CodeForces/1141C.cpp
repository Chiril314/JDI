#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n - 1), ans(n);
    for(int i = 0; i < n - 1; i++){
        cin >> a[i];
        if(a[i] == 0){
            cout << -1;
            return 0;
        }
    }



    return 0;
}