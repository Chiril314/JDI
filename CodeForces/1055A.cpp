#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];

    if(!a[0] || (!a[s - 1] && !b[s - 1])){
        cout << "NO";
        return 0;
    }

    if(s == 1){
        cout << "YES";
        return 0;
    }

    if(a[s - 1]){
        cout << "YES";
        return 0;
    } else
        for(int i = s; i < n; i++)
            if(a[i] && b[i] && b[s - 1]){
                cout << "YES";
                return 0;
            }

    cout << "NO";

    return 0;
}