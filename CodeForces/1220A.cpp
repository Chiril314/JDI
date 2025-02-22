#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string s;

    vector<int> check(26, 0);

    cin >> n >> s;

    for(int i = 0; i < n; i++){
        int x = s[i] - 'a';
        check[x]++;
    }

    int q = min({check[14], check[13], check[4]});

    check[14] -= q;
    check[13] -= q;
    check[4] -= q;

    int p = min({check[25], check[17], check[14], check[4]});

    for(int i = 0; i < q; i++){
        cout << "1 ";
    }

    for(int i = 0; i < p; i++){
        cout << "0 ";
    }

    return 0;
}