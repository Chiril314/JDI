#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int minimumCost = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '1' && b[i] == '0' && a[i + 1] == '0' && b[i + 1] == '1' && i < n - 1){
            minimumCost++;
            a[i] = '0';
            a[i + 1] = '1';
            i++;
        } else if(a[i] == '0' && b[i] == '1' && a[i + 1] == '1' && b[i + 1] == '0' && i < n - 1){
            minimumCost++;
            a[i] = '1';
            a[i + 1] = '0';
            i++;
        } else if(a[i] != b[i])
            minimumCost++;
    }

    cout << minimumCost;

    return 0;
}