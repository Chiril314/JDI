#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];

	vector<int> b(n);
	for(int i = 0; i < n; i++)
		cin >> b[i];

	sort(a.begin(), a.end()); 
	sort(b.begin(), b.end());

	long long s1 = 0, s2 = 0, k = 0;
	while(a.size() > 0 || b.size() > 0){
		if(k % 2 == 0){
			if(b.size() == 0){
				s1 += a.back();
				a.pop_back();
				k++;
				continue;
			}
            
            if(b.back() > a.back() || a.size() == 0)
                b.pop_back();
            else{
                s1 += a.back();
                a.pop_back();
            }
		} else{
			if(a.size() == 0){
				s2 += b.back();
				b.pop_back();
				k++;
				continue;
			}

            if(a.back() > b.back() || b.size() == 0)
                a.pop_back();
            else{
                s2 += b.back();
                b.pop_back();
            }
		}

		k++;
	}

	cout << (s1 - s2);

    return 0;
}