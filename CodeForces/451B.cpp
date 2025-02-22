#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> check(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    check = a; 
    sort(check.begin(), check.end()); 

    if(check == a){
        cout << "yes" << endl << "1 1";

        return 0;
    }

    int left = 0, right = n - 1;
    while(a[left] == check[left]) 
        left++;
    while(a[right] == check[right]) 
        right--;

    reverse(a.begin() + left, a.begin() + right + 1);

    if(a == check)
        cout << "yes" << endl << left + 1 << " " << right + 1 << endl; 
    else
        cout << "no" << endl;

    return 0;
}