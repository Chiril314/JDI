#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    vector<pair<string, string>> ans;
    for(int i = 0; i < t; i++){
        string Old, New;
        cin >> Old >> New;

        bool flag = false;
        for(int j = 0; j < ans.size(); j++)
            if(ans[j].second == Old){
                ans[j].second = New;
                flag = true;
                break;
            }

        if(!flag)
            ans.push_back({Old, New});
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;

    return 0;
}