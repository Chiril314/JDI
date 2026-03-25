#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    string new_s = "";

    new_s += s[0];
    new_s += s[2];
    new_s += s[4];
    new_s += s[3];
    new_s += s[1];

	long long l = stoi(new_s), ans = 1;
    for(int i = 1; i <= 5; i++)
        ans = (ans*l) % 100000;

	if(ans != 0){
        cout << ans;
	    return 0;
	}

	cout << "00000";

    return 0;
}