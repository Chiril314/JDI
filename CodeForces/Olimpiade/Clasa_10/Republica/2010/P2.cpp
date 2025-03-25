#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1 || n == 2)
        cout << n;
    else{
        int a = 1, b = 1, sum = 2; 
        for(int i = 3; i <= n; i++){
            int next = a + b;
            sum += next;
            a = b;
            b = next;
        }

        cout << sum;
    }

    return 0;
}