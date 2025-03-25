#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
vector<int> ls;
vector<int> cs;
vector<int> ld;
vector<int> cd;
vector<bool> flag;

int visible(int x, int y) {
    for(int i = n - 1; i >= 0; i--)
        if(flag[i] && ls[i] <= x && x <= ld[i] && cs[i] <= y && y <= cd[i])
            return i;
    
    return 0;
}

void removeWindow(int i){
    if(!flag[i])
        return;
        
    int check1 = ls[i], check2 = cd[i]; 
    while(visible(check1, check2) != i){
        int blocker = visible(check1, check2);
        removeWindow(blocker);
    }

    flag[i] = false;
    ans++;
}
 
int main(){
    cin >> n;

    ls.resize(n);
    cs.resize(n);
    ld.resize(n);
    cd.resize(n);
    flag.resize(n, true);

    for(int i = 0; i < n; i++)
        cin >> ls[i] >> cs[i] >> ld[i] >> cd[i];

    removeWindow(0);

    cout << ans;

    return 0;
}