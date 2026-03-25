#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int toDecimal(string num, int base){
    int result = 0;
    for(int i = 0; i < num.size(); i++){
        result *= base;
        if(isdigit(num[i]))
            result += num[i] - '0';
        else
            result += num[i] - 'A' + 10;
    }

    return result;
}

int main(){
    string a;
    int z;
    cin >> a >> z;
    
    for(int b = 2; b < 17; b++)
        if(toDecimal(a, b) == z){
            cout << b;
            break;
        }
    
    return 0;
}