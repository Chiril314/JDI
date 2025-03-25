#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n < 3)   
        cout << "No";
    else{
        vector<int> S1;
        vector<int> S2;

        for(int i = 1; i <= n; i++)
            if(i % 2 == 0)
                S1.push_back(i);
            else
                S2.push_back(i);

        cout << "Yes" << endl;

        cout << S1.size() << ' ';
        for(int i = 0; i < S1.size(); i++)
            cout << S1[i] << ' ';

        cout << endl << S2.size() << ' ';
        for(int i = 0; i < S2.size(); i++)
            cout << S2[i] << ' ';
    }

    return 0;
}