#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> x;

    char k;
    while(cin >> k)
        x.push_back(k - '0');

    for(int i = 0; i < x.size(); i++){
        if(i == 0 && x[i] == 9)
            continue;
        else if(9 - x[i] < x[i])
            x[i] = 9 - x[i];
    }

    for(int i = 0; i < x.size(); i++)
        cout << x[i];
            

    return 0;
}