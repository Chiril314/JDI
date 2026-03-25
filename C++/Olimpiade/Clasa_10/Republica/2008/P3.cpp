#include <iostream>
#include <string>

using namespace std;

bool isMagic(long long num){
    int freq[10] = {0}; 

    string s = to_string(num);
    for(int i = 0; i < s.size(); i++)
        freq[s[i] - '0']++;

    int c = 0;
    for (int i = 0; i < 10; i++)
        if(freq[i] > 0){
            if(c == 0)
                c = freq[i]; 
            else if(freq[i] != c)
                return false; 
        }
    
    return true; 
}

int main(){
    long long n;
    cin >> n;

    while(!isMagic(n))
        n++;

    cout << n;

    return 0;
}