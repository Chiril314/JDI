#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t, dogsFood, catsFood, universalFood, dogs, cats;
	
	cin >> t;
	
	while(t--) {
		cin >> dogsFood >> catsFood >> universalFood >> dogs >> cats;
		
		dogs < dogsFood ? dogs = 0 : dogs -= dogsFood;
		cats < catsFood ? cats = 0 : cats -= catsFood;			
		cout << ((dogs + cats <= universalFood) ? "yes" : "no") << endl;
 
	}
	return 0;
}