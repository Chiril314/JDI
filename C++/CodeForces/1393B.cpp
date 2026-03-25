#include <iostream>

using namespace std;

int freq[100001], totalPairs = 0, totalQuads = 0;   

void update(int x, int d){
    int oldFreq = freq[x], newFreq = oldFreq + d;

    totalPairs -= oldFreq / 2;
    totalQuads -= oldFreq / 4;

    freq[x] = newFreq;

    totalPairs += newFreq / 2;
    totalQuads += newFreq / 4;
}

bool canBuild(){
    if(totalQuads >= 1 && totalPairs >= 4)
        return true;

    return false;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int o;
        cin >> o;
        update(o, 1);
    }

    int t;
    cin >> t;

    while(t--){
        char op;
        int x;
        cin >> op >> x;

        if(op == '+')
            update(x, 1);
        else
            update(x, -1);

        if(canBuild())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}