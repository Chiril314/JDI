#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    bool sorted = true;
    for(int i = 1; i < n; i++)
        if(a[i] < a[i - 1]){
            sorted = false;
            break;
        }

    if(sorted){
        cout << 0;  
        return 0;
    }

    int pos = -1;
    for(int i = 1; i < n; i++)
        if(a[i] < a[i - 1]){
            pos = i;
            break;
        }

    for(int i = pos + 1; i < n; i++)
        if(a[i] < a[i - 1]){
            cout << -1; 
            return 0;
        }

    if(a[n - 1] > a[0])
        cout << -1;
    else
        cout << n - pos;
    return 0;
}