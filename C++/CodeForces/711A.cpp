#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> seats(n);
    for(int i = 0; i < n; i++){
        cin >> seats[i];
    }

    bool flag = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            if(seats[i][j] == 'O' && seats[i][j + 1] == 'O'){
                seats[i][j] = '+';
                seats[i][j + 1] = '+';
                flag = true;
                break;  
            }
        }
        if(flag){
            break;
        }
    }

    if(flag){
        cout << "YES";
        for(int i = 0; i < n; i++){
            cout << endl << seats[i];
        }
    } else{
        cout << "NO";
    }

    return 0;
}