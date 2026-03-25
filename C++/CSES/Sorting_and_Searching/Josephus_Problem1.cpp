#include <iostream>
#include <queue>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n;
    cin >> n;
 
    queue<int> q;
    for(int i = 0; i < n; i++)
        q.push(i + 1);
    
    bool flag = false;
    while(!q.empty()){
        if(!flag){
            int x = q.front();
            q.pop();
            q.push(x);
            flag = true;
        } else{
            int x = q.front();
            q.pop();
 
            cout << x << ' ';
 
            flag = false;
        }
    }
 
    return 0;
}