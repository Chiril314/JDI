#include <iostream>

using namespace std;

int recursie(string n, int i){
    if(i == n.size() - 1)
        return (n[i] - '0');

    int x = n[i] - '0';
    i++;
    return x + recursie(n, i);
}


int main(){
    string n;
    cin >> n;

    cout << recursie(n, 0);

    return 0;
}