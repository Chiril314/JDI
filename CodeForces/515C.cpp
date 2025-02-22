#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    string a;

    cin >> n >> a;

    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(a[i] == '2')
            ans.push_back(2);
        else if(a[i] == '3')    
            ans.push_back(3);
        else if(a[i] == '4'){
            ans.push_back(3);
            ans.push_back(2);
            ans.push_back(2);
        } else if(a[i] == '5')
            ans.push_back(5);
        else if(a[i] == '6'){
            ans.push_back(5);
            ans.push_back(3);
        } else if(a[i] == '7')
            ans.push_back(7);
        else if(a[i] == '8'){
            ans.push_back(7);
            ans.push_back(2);
            ans.push_back(2);
            ans.push_back(2);
        } else if(a[i] == '9'){
            ans.push_back(7);
            ans.push_back(3);
            ans.push_back(3);
            ans.push_back(2);
        }
    }

    sort(ans.rbegin(), ans.rend());

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i];

    return 0;
}