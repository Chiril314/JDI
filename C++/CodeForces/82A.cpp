#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int round_size = 5;
    while(n > round_size){
        n -= round_size;
        round_size *= 2; 
    }

    int person_index = (n - 1) / (round_size / 5); 

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[person_index];

    return 0;
}