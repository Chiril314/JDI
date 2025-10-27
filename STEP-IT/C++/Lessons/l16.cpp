#include <iostream>

using namespace std;

void f(string s, int n = 2001){
    cout << s << n << endl;
    return;
}

int main(){
    f("STEP", 2025);
    f("ITSTEP");

    return 0;
}