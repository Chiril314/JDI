#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool mCheck(vector<int> a){
    for(int i = 0; i < a.size() - 1; i++)   
        if(a[i] + 1 != a[i + 1])
            return false;

    return true;
}

int distinctCnt(vector<int> a){
    for(int i = 0; i < a.size() - 1; i++){
        bool flag = false;
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] == a[j]){
                flag = true;
                a.erase(a.begin() + j);
                j--;
            }
        }

        if(flag){
            a.erase(a.begin() + i);
            i--;
        }
    }

    return a.size();
}

int mMax(vector<int> a){
    int ans = 0;
    for(int i = 0; i < a.size(); i++)
        ans = max(ans, a[i]);

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> m(n);
    for(int i = 0; i < n; i++)
        cin >> m[i];

    vector<int> check;

    int ans = 0;
    for(int i = 1; i < n; i++){
        if(i == 1)
            check.push_back(m[0]);

        check.push_back(m[i]);
        sort(check.begin(), check.end());

        if(mCheck(check))
            ans = max(ans, mMax(check));
    }

    if(ans == 0)
        cout << "NU" << endl << distinctCnt(m);
    else
        cout << "DA" << endl << ans;    

    return 0;
}