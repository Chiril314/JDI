#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        vector<int> ans(n, 0);
        vector<bool> check(n, false);

        for(int i = 0; i < n; i++){
            cin >> p[i];
            p[i]--;
        }

        for(int i = 0; i < n; i++){
            if(!check[i]){
                vector<int> cycle;
                int index = i, cycleSize = 0;

                while(!check[index]){
                    check[index] = true;
                    cycle.push_back(index);
                    index = p[index];
                    cycleSize++;
                }

                for(int j = 0; j < cycle.size(); j++)
                    ans[cycle[j]] = cycleSize;
            }
        }

        for(int i = 0; i < n; i++)
            cout << ans[i] << ' ';

        cout << endl;
    }

    return 0;
}