#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << n << endl;
    for(int i = 0; i < n; i++){
        int mn = INT_MAX, index = i;
        for(int j = i; j < n; j++){
            if(mn > a[j]){
                mn = a[j];
                index = j;
            }
        }
        
        cout << i << ' ' << index << endl;
        swap(a[i], a[index]);
    }

    return 0;
}