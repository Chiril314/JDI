#include <iostream>

using namespace std;

int main(){
    int k[3];
    cin >> k[0] >> k[1] >> k[2];

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
	for(int i = 0; i < 3; i++){
		if(k[i] == 1)
			cnt1++;
		else if(k[i] == 2)
			cnt2++;
		else if(k[i] == 3)
			cnt3++;
		else if(k[i] == 4)
			cnt4++;
	}

	if(cnt1 > 0 || cnt2 > 1 || cnt3 == 3){
		cout << "YES";
		return 0;
	}

    if(cnt2 == 1 && cnt4 == 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}