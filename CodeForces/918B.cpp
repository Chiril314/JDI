#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<string, string>> server(n);
    for(int i = 0; i < n; i++)
        cin >> server[i].first >> server[i].second;

    for(int i = 0; i < m; i++){
        string name, ip;
        cin >> name >> ip;

        ip.erase(ip.size() - 1);
        for(int j = 0; j < n; j++){
            if(ip == server[j].second){
                cout << name << ' ' << ip << "; #" << server[j].first << endl;
                break;
            }
        }
    }

    return 0;
}