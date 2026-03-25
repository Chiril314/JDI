#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, cnt = 0;
    cin >> n >> m;

    vector<int> s(m);
    for(int i = 0; i < m; i++)
        cin >> s[i];

    vector<int> a(m + 1);
    for(int i = 0; i < m + 1; i++)
        cin >> a[i];

    while(cnt < m){
        for(int i = 0; i < m + 1; i++){
            if(a[i] == -1)
                continue;
            
            for(int j = 0; j < m; j++)
                if(s[j] != -1 && s[j] == a[i]){
                        cnt++;
                        if(j == 0)
                            cout << i + 1 << ' ';
                        s[j] = -1;
                        a[i] = -1;
                    }
            
            if(a[i] != -1) 
                a[i]++;
            if(a[i] > n)
                a[i] = 1;
        }
    }

    for(int i = 0; i < m + 1; i++)
        if(a[i] != -1){
            cout << i + 1;
            break;
        }

    return 0;
}

// ./run Olimpiade/Clasa_10/P3_2016_Municipiu.cpp