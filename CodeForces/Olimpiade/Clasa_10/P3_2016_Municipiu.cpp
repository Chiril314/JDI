#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> scaune(m);
    vector<bool> scaunOcupat(m, false);
    int primMinistru;
    int candidatRamas;
    for(int i = 0; i < m; i++)
        cin >> scaune[i];

    vector<int> candidati(m + 1);
    vector<bool> candidatAles(m + 1, false);
    for(int i = 0; i < m + 1; i++)
        cin >> candidati[i];

    while(true){
        for(int i = 0; i < m + 1; i++){
            if(candidatAles[i])
                continue;
            
            for(int j = 0; j < m; j++)
                if(!scaunOcupat[j] && scaune[j] == candidati[i]){
                    scaunOcupat[j] = true;
                    candidatAles[i] = true;
                    if(j == 0)
                        primMinistru = i + 1;
                }
        }

        int cnt = 0;
        for(int i = 0; i < m + 1; i++)
            if(candidatAles[i])
                cnt++;

        if(cnt == m){
            for(int i = 0; i < m + 1; i++)
                if(!candidatAles[i]){
                    candidatRamas = i + 1;
                    break;
                }

            break;
        }
        
        for(int i = 0; i < m + 1; i++){
            if(!candidatAles[i]){
                if(candidati[i] == n)
                    candidati[i] = 1;
                else
                    candidati[i]++;
            }
        }
    }

    cout << primMinistru << ' ' << candidatRamas;

    return 0;
}

// ./run Olimpiade/Clasa_10/P3_2016_Municipiu.cpp