#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a, b, c, x, t;
    
    cin >> n;
    
    for( int i=1; n>=i; n--) {
        cin >> a >> b >> c;
        x = c/2;
        t = 2*x;
        if(c == t + 1){
            if (a == b){
                cout << "First" << endl;
            }
            else if (a > b){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
        else{
            if(a == b){
                cout << "Second" << endl;
            }
            else if(a > b){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
    }
 
    return 0;
}