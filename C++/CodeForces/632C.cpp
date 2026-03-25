#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool check(string a, string b){
    if(a + b < b + a)
        return true;
    
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<string> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), check);

    for(int i = 0; i < n; i++)
        cout << a[i];

    return 0;
}