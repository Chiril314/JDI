#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int s = 0, l = 0, r = n - 1;
    string ans = "";

    while(l <= r){
        if(a[l] <= s && a[r] <= s)
            break;

        if(a[l] == a[r]){
            int cnt1 = 0, cnt2 = 0, l1 = l, r1 = r, rs = s;
            while(a[l1] > s && l1 <= r){
                s = a[l1++];
                cnt1++;
            }

            s = rs;
            while(a[r1] > s && r1 >= l){
                s = a[r1--];
                cnt2++;
            }

            if(cnt1 >= cnt2){
                while(cnt1--)
                    ans += 'L';
            } else{
                while(cnt2--)
                    ans += 'R';
            }

            break;
        }

        if(a[l] <= s){
            s = a[r--];
            ans += 'R';
            continue;
        }   

        if(a[r] <= s){
            s = a[l++];
            ans += 'L';
            continue;
        }

        if(a[l] < a[r]){
            ans += 'L';
            s = a[l++];
        } else{
            ans += 'R';
            s = a[r--];
        }
    }
 
    cout << ans.size() << endl << ans;

    return 0;
}