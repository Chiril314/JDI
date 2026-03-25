#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<long long> cntL(26, 0);
    vector<long long> cntD(10, 0);

    for(long long i = 0; i < s.size(); i++)
        if(s[i] - '0' > 26)
            cntL[s[i] - 'a']++;
        else
            cntD[s[i] - '0']++;

    long long ans = 0;
    for(int i = 0; i < 26; i++)
        ans += (cntL[i] * cntL[i]);

    for(int i = 0; i < 10; i++)
        ans += (cntD[i] * cntD[i]);
    
    cout << ans;

    return 0;
}