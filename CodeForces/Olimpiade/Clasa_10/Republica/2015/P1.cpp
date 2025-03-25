#include <iostream> 
#include <vector>

using namespace std;

int main(){
    int m;
    cin >> m;

    int grid[m][m];
    vector<int> SPLength1(m + 1, 0);
    vector<int> SPLength2(m + 1, 0);
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < m; i++){
        bool check1 = false, check2 = false;
        int cnt1 = 0, cnt2 = 0;
        for(int j = 0; j < m; j++){
            if(check1 == false && grid[i][j] == 1){
                check1 = true;
                cnt1++;
            } else if(grid[i][j] == 1 && check1 == true)
                cnt1++;
            else if(check1 == true && grid[i][j] == 0){
                check1 = false;
                SPLength1[cnt1 - 1]++;
                ans1++;
                cnt1 = 0;
            } if(j == m - 1 && cnt1 > 0){
                SPLength1[cnt1 - 1]++;
                ans1++;
            }

            if(check2 == false && grid[j][i] == 1){
                check2 = true;
                cnt2++;
            } else if(grid[j][i] == 1 && check2 == true)
                cnt2++;
            else if(check2 == true && grid[j][i] == 0){
                check2 = false;
                SPLength2[cnt2 - 1]++;
                ans2++;
                cnt2 = 0;
            } if(j == m - 1 && cnt2 > 0){
                SPLength2[cnt2 - 1]++;
                ans2++;
            }
        }
    }

    if(ans1 < ans2){
        cout << ans1 << endl;
        for(int i = 0; i < m; i++)  
            if(SPLength1[i] > 0)
                cout << i + 1 << ' ' << SPLength1[i] << endl;
    } else{
        cout << ans2 << endl;
        for(int i = 0; i < m; i++)
            if(SPLength2[i] > 0)
                cout << i + 1 << ' ' << SPLength2[i] << endl;
    }

    return 0;
}