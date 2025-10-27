#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if(n >= m)
        while(n > 0 || m > 0){
            if(n > 0){
                cout << "B";
                n--;
            }

            if(m > 0){
                cout << "G";
                m--;
            }
        }
    else
        while(n > 0 || m > 0){
            if(m > 0){
                cout << "G";
                m--;
            }

            if(n > 0){
                cout << "B";
                n--;
            }
        }

    return 0;
}