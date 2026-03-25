#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b, max_p[n];
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(i == 0){
            max_p[i] = b - a;
        } else{
            max_p[i] = max_p[i - 1] - a + b;
        } 
    }

    sort(max_p, max_p + n, greater<int>());

        cout << max_p[0];

    return 0;
}