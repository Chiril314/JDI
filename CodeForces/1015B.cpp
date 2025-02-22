#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    string sortedS = s, sortedT = t;
    sort(sortedS.begin(), sortedS.end());
    sort(sortedT.begin(), sortedT.end());

    if(sortedS != sortedT){
        cout << -1;
        return 0;
    }

    vector<int> moves;
    for(int i = 0; i < n; i++)
        if(s[i] != t[i]){
            int pos = i;
            for(int j = i + 1; j < n; j++)
                if(s[j] == t[i]){
                    pos = j;
                    break;
                }

            for(int j = pos; j > i; j--){
                swap(s[j], s[j - 1]);
                moves.push_back(j);
            }
        }

    cout << moves.size() << endl;
    for(int i = 0; i < moves.size(); i++)
        cout << moves[i] << ' ';
        
    return 0;
}