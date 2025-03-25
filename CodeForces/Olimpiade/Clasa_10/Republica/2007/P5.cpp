#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> c;
string seq;
int mem[201];
int n;

bool matches(int pos, string word){
    if(pos + word.length() > seq.length()) 
        return false;

    for(int i = 0; i < word.length(); i++)
        if(seq[pos + i] != word[i]) 
            return false;
    
    return true;
}

int dfs(int pos){
    if(pos == seq.length()) 
        return 0;

    if(mem[pos] != -1) 
        return mem[pos];

    int Min = 201; 
    for(int i = 0; i < n; i++)
        if(matches(pos, c[i])){
            int ans = dfs(pos + c[i].length());
            if(ans + 1 < Min)
                Min = ans + 1;
        }

    mem[pos] = Min;

    return Min;
}

int main(){
    cin >> n;

    c.resize(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    cin >> seq;

    for(int i = 0; i <= seq.length(); i++)
        mem[i] = -1;

    int ans = dfs(0);
    cout << ans;

    return 0;
}
