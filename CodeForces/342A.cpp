#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt6 = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a == 1)
            cnt1++;
        else if(a == 2)
            cnt2++;
        else if(a == 3)
            cnt3++;
        else if(a == 4)
            cnt4++;
        else if(a == 6)
            cnt6++;
    }

    int cnt = cnt1 + cnt2 + cnt3 + cnt4 + cnt6;
    if(n != cnt){
        cout << -1;
        return 0;
    }

    vector<int> ans1, ans2, ans3;
    bool flag = true;
    while(true){
        if(cnt1 >= 1 && cnt2 >= 1 && cnt4 >= 1){
            cnt1--;
            cnt2--;
            cnt4--;
            ans1.push_back(1);
            ans2.push_back(2);  
            ans3.push_back(4);
            cnt -= 3;
        } else if(cnt1 >= 1 && cnt2 >= 1 && cnt6 >= 1){
            cnt1--;
            cnt2--;
            cnt6--;
            ans1.push_back(1);
            ans2.push_back(2);
            ans3.push_back(6);
            cnt -= 3;
        } else if(cnt1 >= 1 && cnt3 >= 1 && cnt6 >= 1){
            cnt1--;
            cnt3--;
            cnt6--;
            ans1.push_back(1);
            ans2.push_back(3);
            ans3.push_back(6);
            cnt -= 3;
        } else if(cnt == 0)
            break;
        else{
            flag = false;
            break;
        }
    }

    if(!flag)
        cout << -1;
    else
        for(int i = 0; i < ans1.size(); i++)
            cout << ans1[i] << ' ' << ans2[i] << ' ' << ans3[i] << endl;

    return 0;
}