#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1){
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";

    return 0;
}