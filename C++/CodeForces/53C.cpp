#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    int check = 0;
    for(int i = 0; i < n; i++)
        if(i % 2 == 0)
            cout << check + 1 << ' ';
        else{
            cout << n - check << ' ';
            check++;
        }

    return 0;
}