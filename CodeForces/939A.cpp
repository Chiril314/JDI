#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }

    vector<int> b(n);
    for(int i = 0; i < n; i++)
        b[i] = a[a[i]];

    for(int k = 0; k < 2; k++)
        for(int i = 0; i < n; i++)
            b[i] = a[b[i]];

    for(int i = 0; i < n; i++)
        if(b[i] == a[i]){
            cout << "YES";
            return 0;
        }
    
    cout << "NO";

    return 0;
}