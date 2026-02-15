#include <iostream>
#include <exception>

using namespace std;

class INT{
    int a, b;

    public:
        INT(int x, int y){
            a = x;
            b = y;
        }

        double divide(){
            if(b == 0)
                throw exception(); 

            return (double)a / b;
        }
};

int main(){
    try{
        int a, b;

        cout << "Introdu a = ";
        cin >> a;

        cout << endl << "Introdu b = ";
        cin >> b;

        INT obj(a, b);
        cout << endl << "a / b = " << obj.divide() << endl;
    }

    catch (exception&){
        cout << "Eroare: impartire la zero!" << endl;
    }

    catch (...){
        cout << "Exceptie necunoscuta!" << endl;
    }

    return 0;
}