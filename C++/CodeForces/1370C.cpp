#include <iostream>

using namespace std;

bool isPowerOfTwo(int n){
    if(n <= 0) 
        return false; 

    while(n % 2 == 0)
        n /= 2;

    return n == 1;
}

bool isPrime(int n){
    if(n < 2) 
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0) 
        return false;
    for(int i = 3; i * i <= n; i += 2) 
        if(n % i == 0) 
            return false;

    return true;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        if(n == 1)
            cout << "FastestFinger" << endl;
        else if(n == 2)
            cout << "Ashishgup" << endl;
        else if(n % 2 == 1)
            cout << "Ashishgup" << endl;
        else
            if(isPowerOfTwo(n))
                cout << "FastestFinger" << endl;
            else
                if(isPrime(n / 2))
                    cout << "FastestFinger" << endl;
                else
                    cout << "Ashishgup" << endl;
    }

    return 0;
}