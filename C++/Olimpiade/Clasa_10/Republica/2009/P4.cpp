#include <iostream>
#include <vector>

using namespace std;

vector<string> cities;
vector<string> ans;
vector<string> curr;
vector<vector<int>> graph(26);
vector<bool> visited;

void dfs(int index){
    char check = cities[index].back();
    curr.push_back(cities[index]);
    visited[index] = true;

    bool flag = false;
    for(int i = 0; i < graph[check - 'A'].size(); i++){ 
        int next = graph[check - 'A'][i];
        if(!visited[next]){
            flag = true;
            dfs(next);
        }
    }

    if(!flag && curr.size() > ans.size())
        ans = curr;

    visited[index] = false;
    curr.pop_back();
}

int main(){
    int n;
    cin >> n;

    cities.resize(n);
    visited.resize(n, false);

    for(int i = 0; i < n; i++){
        cin >> cities[i];

        char start = cities[i][0];
        graph[start - 'A'].push_back(i);
    }

    for(int i = 0; i < n; i++)
        dfs(i);

    cout << ans.size();
    for(int i = 0; i < ans.size(); i++) 
        cout << endl << ans[i];

    return 0;
}
