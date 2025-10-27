#include <iostream>

using namespace std;

int insert(char message[]){
    int value;
    cout << message;
    cin >> value;
    cout << endl;

    return value;
}

void show(char message[], int value){
    cout << message << value << endl;
    return;
}

int calc(int x, int y, int z){
    return x + y - z;
}

int main(){
    int a = insert("Enter a: ");
    int b = insert("Enter b: ");
    int c = insert("Enter c: ");

    show("a = ", a);
    show("b = ", b);
    show("c = ", c);

    int R = calc(a, b, c);

    show("R = a + b - c = ", R);

    return 0;
}