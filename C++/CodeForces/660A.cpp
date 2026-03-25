#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(!b)
        return a;
    
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n), v;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n - 1; i++){
        v.push_back(a[i]);
        if(gcd(a[i], a[i + 1]) > 1)
            v.push_back(1);
    }

    v.push_back(a[n - 1]);

    cout << v.size() - n << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';

    return 0;   
}