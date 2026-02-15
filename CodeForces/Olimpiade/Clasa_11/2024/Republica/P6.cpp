#include <iostream>
#include <vector>
using namespace std;

vector<int> tree[200005];
int n, farNode, maxDist;

void dfsFind(int node, int parent, int depth){
    if(depth > maxDist){
        maxDist = depth;
        farNode = node;
    }

    for(int i = 0; i < tree[node].size(); i++){
        int neighbor = tree[node][i];
        if(neighbor != parent)
            dfsFind(neighbor, node, depth + 1);
    }
}

void dfsDist(int node, int parent, int depth, vector<int>& dist){
    dist[node] = depth;
    for(int i = 0; i < tree[node].size(); i++){
        int neighbor = tree[node][i];
        if(neighbor != parent)
            dfsDist(neighbor, node, depth + 1, dist);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 1; i < n; i++){
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    maxDist = -1;
    dfsFind(1, -1, 0);
    int u = farNode;

    maxDist = -1;
    dfsFind(u, -1, 0);
    int v = farNode, diameter = maxDist;

    vector<int> distU(n + 1), distV(n + 1);
    dfsDist(u, -1, 0, distU);
    dfsDist(v, -1, 0, distV);

    vector<int> depthCnt(n + 1, 0);
    for(int i = 1; i <= n; i++)
        if(distU[i] + distV[i] == diameter)
            depthCnt[distU[i]]++;

    long long cnt = 0;
    for(int i = 0; i <= diameter; i++)
        cnt += depthCnt[i] * depthCnt[diameter - i];

    if(diameter % 2 == 0){
        int c = depthCnt[diameter / 2];
        cnt -= c * (c - 1);
    }

    cout << diameter + 1 << ' ' << cnt / 2;

    return 0;
}
