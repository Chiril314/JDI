#include <iostream>
 
using namespace std;
 
int main()
{
int x, n, t, h;
    
cin >> t;
    
for(int i = 0; i < t; i++){
    cin >> n >> x;
        if(n > 2){
            h = 1 + (n-2)/x;
            if( (n-2)%x != 0 ){
                cout << h + 1 << endl;
            }
            else{
                cout << h << endl;
            }
        }
        else{
            cout << "1" << endl;
        }
    }
    
    return 0;
}