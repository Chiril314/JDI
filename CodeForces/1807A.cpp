#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, c, t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        
        if(c == a + b){
            cout << '+' << endl;
        }
        else if(c == a - b){
            cout << '-' << endl;
        }
    }
    
 
    return 0;
}