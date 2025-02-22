#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, s;
    cin >> n >> s;

    if(s < 2 * n){
        cout << "NO";
        return 0;
    }

    vector<int> arr(n, 2); 
    arr[n - 1] = s - 2 * (n - 1); 

    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl << 1;

    return 0;
}