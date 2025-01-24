#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    bool flag = false;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= m; j++){
                cout << '#';
            }
        } else{
            if(!flag){
                for(int j = 1; j <= m - 1; j++){
                    cout << '.';
                }

                cout << '#';
                flag = true;
            } else{
                cout << '#';

                for(int j = 1; j <= m - 1; j++){
                    cout << '.';
                }

                flag = false;
            }
        }

        cout << endl;
    }

    return 0;
}