#include <iostream>

using namespace std;

int main(){
    int t; 
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool found = false;
        for(int a = 2; a * a * a <= n; ++a){ 
            if(n % a == 0){
                int remaining = n / a;
                for(int b = a + 1; b * b <= remaining; ++b){
                    if(remaining % b == 0){ 
                        int c = remaining / b;
                        if(c > b){
                            cout << "YES" << endl;
                            cout << a << " " << b << " " << c << endl;
                            found = true;
                            break;
                        }
                    }
                }
            }
            if(found){
                break;
            }
        }

        if(!found){
            cout << "NO" << endl;
        }
    }

    return 0;
}