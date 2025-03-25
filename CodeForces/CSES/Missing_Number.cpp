#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    n--;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    
    n++;
    for(int i = 1; i <= n; i++)
        if(i != a[i - 1]){
            cout << i;
            return 0;
        }

   return 0;
}