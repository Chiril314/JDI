#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m;
    cin >> m;
    
    vector<int> ans(m, 0);

    bool flag = false;
    while(!flag){
        for(int i = 0; i < m; i++)
            cout << ans[i];

        cout << endl;
        for(int i = m - 1; i >= 0; i--){
            if(ans[i] < 2){
                ans[i]++; 
                break;
            } else{
                ans[i] = 0; 
                if(i == 0) 
                    flag = true;
            }
        }
    }
    
    return 0;
}