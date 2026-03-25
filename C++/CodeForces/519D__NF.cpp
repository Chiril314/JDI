#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> x(26);
    string s;

    for(int i = 0; i < 26; i++){
        cin >> x[i];
    }
    cin >> s;

    int n = s.size();
    vector<int> positions[26]; 
    vector<int> prefixSum(n + 1, 0); 

    for(int i = 0; i < n; i++){
        prefixSum[i + 1] = prefixSum[i] + x[s[i] - 'a'];
        positions[s[i] - 'a'].push_back(i);
    }

    int ans = 0;

    for(int c = 0; c < 26; c++){
        if(positions[c].size() > 1){
            for(int i = 0; i < positions[c].size(); i++){
                for(int j = i + 1; j < positions[c].size(); j++){
                    int start = positions[c][i];
                    int end = positions[c][j];

                    int check = prefixSum[end] - prefixSum[start + 1];

                    if(check == 0){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}