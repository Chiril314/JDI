#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k;
    cin >> k;

    string base = "codeforces";
    int n = base.size();
    
    vector<int> freq(n, 1);
    
    long long product = 1;
    for(int i = 0; product < k; i = (i + 1) % n){
        product /= freq[i];  
        freq[i]++;          
        product *= freq[i]; 
    }

    for(int i = 0; i < n; i++)
        cout << string(freq[i], base[i]);

    return 0;
}