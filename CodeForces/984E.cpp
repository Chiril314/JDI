#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a, b;
int n, ans = 1e9;

void init(){
    a.resize(n);
    b.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
}

void solve(int t, int f, int index, vector<int> p, bool c1, bool c2, bool c3, bool c4){
    if(t >= ans)
        return;

    if(index == n && p.empty()){
        ans = min(ans, t);
        return;
    }

    if(c1){
        if(index < n && a[index] == f && p.size() < 4){
            p.push_back(b[index]);
            index++;
            t++;
        } else
            return;
    }

    if(c2){
        if(p.size() > 0){
            bool flag = false;
            for(int i = 0; i < p.size();){
                if(p[i] == f){
                    p.erase(p.begin() + i);
                    flag = true;
                    t++;
                } else
                    i++;
            }

            if(!flag)
                return;
        } else
            return;
    }

    if(c3){
        if(f < 9){
            f++;
            t++;
        } else
            return;
    }

    if(c4){
        if(f > 0){
            f--;
            t++;
        } else 
            return;
    }


    solve(t, f, index, p, true, false, false, false);
    solve(t, f, index, p, false, true, false, false);
    solve(t, f, index, p, false, false, true, false);
    solve(t, f, index, p, false, false, false, true);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    init();

    vector<int> c;
    solve(0, 1, 0, c, false, false, false, false);

    cout << ans;

    return 0;
}