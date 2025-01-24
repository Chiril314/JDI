#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string names[100000];
    int suffix[100000] = {0}; 
    int unique = 0; 

    for (int i = 0; i < n; i++){
        string name;
        cin >> name;

        bool found = false;

        for (int j = 0; j < unique; j++){
            if (names[j] == name){
                found = true;
                suffix[j]++; 
                cout << name << suffix[j] << endl; 
                break;
            }
        }

        if (!found){
            names[unique] = name;
            suffix[unique] = 0;
            unique++;
            cout << "OK" << endl;
        }
    }

    return 0;
}