#include <iostream>

using namespace std;

bool check(int arr[], int start, int end){
	int l = start, r = end, rem = 0, cnt = 0;
	while(l < r){
			if(rem <= arr[l] && arr[l] <= arr[r]){
				rem = arr[l];
				l++;
				cnt++;
			} else if(rem <= arr[r] && arr[l] > arr[r]){
				rem = arr[r];
				r--;
				cnt++;
			} else
				return false;
	}
	
	return true;
}

int main(){
    int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		int l = 0, r = n - 1, ans;
		while(l <= r){
			int mid = l + (r - l) / 2;
			if(check(a, mid, n - 1)){
				ans = mid;
				r = mid - 1;
			} else
				l = mid + 1;
		}

		cout << ans << endl;
	}

    return 0;
}