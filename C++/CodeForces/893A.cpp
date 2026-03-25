#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    pair<int, int> p = {1, 2}; 
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a == 1){
            if(p.first == 1 || p.second == 1){
                if(p.first == 2)
                    p.first = 3;
                else if(p.first == 3)
                    p.first = 2;

                if(p.second == 2)
                    p.second = 3;
                else if(p.second == 3)
                    p.second = 2;
            } else{
                cout << "NO";
                return 0;
            }
        } else if(a == 2){
            if(p.first == 2 || p.second == 2){
                if(p.first == 1)
                    p.first = 3;
                else if(p.first == 3)
                    p.first = 1;

                if(p.second == 1)
                    p.second = 3;
                else if(p.second == 3)
                    p.second = 1;
            } else{
                cout << "NO";
                return 0;
            }
        } else if(a == 3){
            if(p.first == 3 || p.second == 3){
                if(p.first == 1)
                    p.first = 2;
                else if(p.first == 2)
                    p.first = 1;

                if(p.second == 1)
                    p.second = 2;
                else if(p.second == 2)
                    p.second = 1;
            } else{
                cout << "NO";
                return 0;
            }            
        }
    }

    cout << "YES";

    return 0;
}