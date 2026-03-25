#include <iostream>
#include <string>

using namespace std;

void permutari(string s, int left, int right){
    if(left == right){
        cout << s << endl;
        return;
    }

    for(int i = left; i <= right; i++){
        swap(s[left], s[i]);
        permutari(s, left + 1, right);
        swap(s[left], s[i]);
    }
}

int main(){
    string s;
    cin >> s;

    permutari(s, 0, s.size() - 1);

    return 0;
}