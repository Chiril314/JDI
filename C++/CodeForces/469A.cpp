#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int p;
    cin >> p;

    bool check[101] = {false};

    for(int i = 0; i < p; i++){
        int a;
        cin >> a;
        check[a] = true;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int d;
        cin >> d;
        check[d] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!check[i]){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}