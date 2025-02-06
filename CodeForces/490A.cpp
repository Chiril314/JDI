#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> t(n);
    vector<int> programmers, mathematicians, athletes;

    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] == 1){
            programmers.push_back(i + 1);
        } else if(t[i] == 2){
            mathematicians.push_back(i + 1);
        } else if(t[i] == 3){
            athletes.push_back(i + 1);
        }
    }

    int x = min({programmers.size(), mathematicians.size(), athletes.size()});

    cout << x;
    for(int i = 0; i < x; i++){
        cout << endl << programmers[i] << " " << mathematicians[i] << " " << athletes[i];
    }

    return 0;
}