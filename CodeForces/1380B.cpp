#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
		cin >> s;

		int n = s.size();
		int r = 0, p = 0, sc = 0;
		for(int i = 0; i < n; i++){
			r += (s[i] == 'R');
			sc += (s[i] == 'S');
			p += (s[i] == 'P');
		}

		if(r >= p && r >= sc)
			while(n--)
				cout << "P";
	    else if(p >= r && p >= sc)
			while(n--)
				cout << "S";
		else
			while(n--)
				cout << "R";

		cout << endl;
    }

    return 0;
}