#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0;i < n; i++)
            cin >> a[i];

        vector<int> v(2);
        for(int i = 1; i < n; i++)
            if(abs(a[i] - a[i - 1]) >= 2){
                v[0] = i;
                v[1] = i + 1;
                break;
            } else if(abs(a[i] - a[i + 1]) >= 2 && i != n - 1){
                v[0] = i + 1;
                v[1] = i + 2;
                break;
            }

        if(v[0] != v[1])
			cout << "YES" << endl << v[0] << ' ' << v[1] << endl;
		else
			cout << "NO" << endl;
    }

    return 0;
}