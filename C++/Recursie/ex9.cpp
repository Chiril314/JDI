#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray(vector<int> a, int i){
    if(i == 0)
        return {a[i]};

    vector<int> rest = reverseArray(a, i - 1);
    rest.insert(rest.begin(), a[i]);

    return rest;
}


int main(){
    string s;
    cin >> s;

    vector<int> a;
    int check = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-'){
            a.push_back(stoi(s.substr(check, i - check)));
            check = i + 1;
        } else if(i == s.size() - 1)
            a.push_back(stoi(s.substr(check, i - check + 1)));
    }

    vector<int> ans = reverseArray(a, a.size() - 1);

    for(int i = 0; i < ans.size(); i++){
        if(i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << '-';
    }

    return 0;
}