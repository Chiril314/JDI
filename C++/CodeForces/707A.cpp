#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n * m; i++){
        string color;
        cin >> color;

        if(color == "C"){
            cout << "#Color";
            return 0;
        } else if(color == "M"){
            cout << "#Color";
            return 0;
        } else if(color == "Y"){
            cout << "#Color";
            return 0;
        }
    }

    cout << "#Black&White";

    return 0;
}