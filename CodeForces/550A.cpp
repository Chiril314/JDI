#include <iostream>

using namespace std;

bool checkABBA(string s){
    int n = s.size();

    bool foundAB = false;
    for(int i = 0; i < n - 1; i++){
        if(!foundAB && s[i] == 'A' && s[i + 1] == 'B'){
            foundAB = true;
            i++;  
        } else if(foundAB && s[i] == 'B' && s[i + 1] == 'A'){
            return true; 
        }
    }

    bool foundBA = false;
    for(int i = 0; i < n - 1; i++){
        if(!foundBA && s[i] == 'B' && s[i + 1] == 'A'){
            foundBA = true;
            i++; 
        } else if(foundBA && s[i] == 'A' && s[i + 1] == 'B'){
            return true;  
        }
    }

    return false;
}

int main(){
    string s;
    cin >> s;

    if(checkABBA(s)){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}