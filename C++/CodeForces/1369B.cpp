#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
        string s;
		cin >> n >> s;

		int poz1 = n, poz2 = 0;
		bool ans = 1;
		if(n == 1)
			cout << s[0] << endl;
		else{
		    for(int i = 0; i < n; i++){
			    if(s[i] == '1'){
				    if(ans){
					    poz1 = i;
					    ans = 0;
				    }
			    } else
				    poz2 = i;
		    }

            for(int i = 0; i < poz1; i++)
                cout << s[i];

            for(int i = poz2; i < n; i++)
                if(i >= poz1)
                    cout << s[i];

            cout << endl;
		}
	}

	return 0;
}