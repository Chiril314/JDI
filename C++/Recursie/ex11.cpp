#include <iostream>
#include <vector>

using namespace std;

int recursie(const vector<int>& a, int size, int check, int index = 0){
    if(index == size) 
        return 0;

    if(a[index] == check)
        return 1 + recursie(a, size, check, index + 1);
    else    
        return recursie(a, size, check, index + 1);
}

int main(){
    vector<int> a;
    int x, check;

    while(cin >> x)
        a.push_back(x);

    check = a.back();
    a.pop_back(); 

    cout << recursie(a, a.size(), check);

    return 0;
}