#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> Sort(vector<string> s, int n){
    for(int i = 1; i < n; i++){ 
        string temp = s[i]; 

        int j = i - 1; 
        while(j >= 0 && temp.length() < s[j].length()){ 
            s[j + 1] = s[j]; 
            j--; 
        } 
        s[j + 1] = temp; 
    } 

    return s; 
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];

    string a;
    cin >> a;

    s = Sort(s, n); 

    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt++;
        if(s[i].size() == a.size()) 
            break; 
    }

    int Max = cnt;
    while(Max < n && s[Max].size() == a.size())
        Max++;

    int ans1 = ((cnt - 1) / k) * 5 + cnt;
    int ans2 = ((Max - 1) / k) * 5 + Max;

    cout << ans1 << ' ' << ans2;

    return 0;
}