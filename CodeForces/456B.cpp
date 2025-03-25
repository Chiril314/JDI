#include <iostream>

using namespace std;

int main(){
    string n;
    cin >> n;

    if(n.size() < 2)
        if(stoi(n) % 4 == 0)
            cout << 4;
        else
            cout << 0;
    else{
        string s = "";
        s += n[n.size() - 2]; 
        s += n[n.size() - 1];

        if(stoi(s) % 4 == 0)
            cout << 4;
        else    
            cout << 0;
    }

    return 0;
}