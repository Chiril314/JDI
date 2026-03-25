#include <iostream>
#include <vector>

using namespace std;


vector<int> a(12), sum(4), cnt(4);       
vector<bool> used(13);    

bool flag = false;
vector<int> b[12] = {{0,3},{0},{0},{0,1},{1},{1},{1,2},{2},{2},{2,3},{3},{3}};

void f(int pos){
    if(flag) 
        return;

    if(pos == 12){
        for(int i = 0; i < 4; i++)
            if(sum[i] != 30) 
                return;

        flag = true;
        return;
    }

    if(a[pos] != 0){
        f(pos + 1);
        return;
    }

    for(int i = 1; i <= 12; i++){
        if(used[i]) 
            continue;

        bool flg = true;
        for(int j : b[pos])
            if(sum[j] + i > 30){
                flg = false;
                break;
            }
        
        if(!flg) 
            continue;

        a[pos] = i;
        used[i] = true;
        for(int s : b[pos]){
            sum[s] += i;
            cnt[s]++;
        }

        for(int j : b[pos])
            if(cnt[j] == 4 && sum[j] != 30)
                flg = false;

        if(flg)
            f(pos + 1);

        if(flag) 
            return;

        for(int j : b[pos]){
            sum[j] -= i;
            cnt[j]--;
        }

        used[i] = false;
        a[pos] = 0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for(int i = 0; i < 12; i++){
        cin >> a[i];
        if(a[i] != 0)
            used[a[i]] = true;
    }

    for(int i = 0; i < 12; i++)
        if(a[i] != 0)
            for(int s : b[i]){
                sum[s] += a[i];
                cnt[s]++;
            }

    f(0);

    for(int i = 0; i < 12; i++)
        cout << a[i] << ' ';

    return 0;
}
\