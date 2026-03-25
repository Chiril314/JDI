#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int l, ans = 0;

void q(int n){
    l = n;
}

void mex(vector<int> b){
    sort(b.begin(), b.end());

    int x = b.size();
    int check = 1;
    for(int i = 0; i < x; i++){
        if(b[i] == check)
            check++;
        else if(b[i] > check)
            break;
    }

    ans += check;
}   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    q(n);

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = i; j < n; j++){
            temp.push_back(a[j]);
            mex(temp);
        }
    }

    cout << ans;

    return 0;
}