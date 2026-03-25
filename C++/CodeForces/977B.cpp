#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;


    vector<string> check(n - 1);
    for(int i = 0; i < n - 1; i++){
        string temp = s.substr(i, 2);
        check[i] = temp;
    }

    vector<string> distinct;
    vector<int> cntDistinct;
    for(int i = 0; i < n - 1; i++){
        bool flag = false;
        for(int j = 0; j < distinct.size(); j++){
            if(check[i] == distinct[j]){
                flag = true;
                break;
            }
        }

        if(!flag){
            distinct.push_back(check[i]);
            cntDistinct.push_back(0);
        }
    }

    for(int i = 0; i < distinct.size(); i++){
        for(int j = 0; j < check.size(); j++){
            if(distinct[i] == check[j]){
                cntDistinct[i]++;
            }
        }
    }

    string ans;
    int check1 = 0;
    for(int i = 0; i < distinct.size(); i++){
        if(cntDistinct[i] > check1){
            check1 = cntDistinct[i];
            ans = distinct[i];
        }
    }

   cout << ans;

    return 0;
}