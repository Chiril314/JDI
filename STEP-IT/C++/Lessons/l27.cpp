#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Functii prietene - functia primeste acces la privatul clasei

// friend tip_date nume_functie();



// supraincarcarea operatorilor - functii care se apeleaza prin combinatie(nu are nume)
//      supraincarcarea extinde functionarul operatorilor cu clasele realizate

// tip_date operator OPERATOR(parametri){}

class INT{
    int value;
    
    public: 
        INT(int value = 0) : value(value){}
        INT(const INT &OBJECT) : value(OBJECT.value){} 

        ~INT(){}
        
        INT& set(char *message){
            cout << message;
            cin >> this->value;
            return *this;
        }

        INT& set(int value){ 
            this->value = value;
            return *this;
        }

        INT& set(const INT &OBJECT){
            this->value = OBJECT.value;
            return *this;
        }
        
        const int get()const{ 
            return this->value; 
        }
        
        INT& show(char *message){
            cout << message << this->value << endl;
            return *this;
        }

        friend int abc(INT &, INT &, INT &);
        friend int sum(INT [], int);

        friend ostream& operator << (ostream &, INT &);
        friend istream& operator >> (istream &, INT &);
};

/*
INT abc(INT &a, INT &b, INT &c){
    a.set(rand()%10).show("a = ");
    b.set(rand()%10).show("b = ");
    c.set(rand()%10).show("c = ");

    INT REZ;
    REZ.set(a.get() + b.get() - c.get()).show("a + b - c = ");

    return REZ.get();
}
*/

int abc(INT &a, INT &b, INT &c){
    int REZ;

    a.value = rand()%10;
    b.value = rand()%10;
    c.value = rand()%10;

    REZ = a.value + b.value - c.value;
    cout << a.value << " + " << b.value << " - " << c.value << " = " << REZ << endl;

    return REZ;
}

int sum(INT v[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += v[i].value;
    
    return sum;
}

ostream& operator << (ostream &OUT, INT &OBJECT){
    OUT << OBJECT.value;
    return OUT;
}

istream& operator >> (istream &IN, INT &OBJECT){
    IN >> OBJECT.value;
    return IN;
}

int main(){
    srand(time(0));

/*
    INT a, b, c;

    a.set(rand()%10).show("a = ");
    b.set(rand()%10).show("b = ");
    c.set(rand()%10).show("c = ");

    INT R;
    R.set(a.get() + b.get() - c.get()).show("a + b - c = ");
*/


/*
    INT a, b, c;

    INT R = abc(a, b, c);
*/


/*
    INT v[50];
    int n = rand()%49 + 1;

    for(int i = 0; i < n; i++)
        cout << v[i].set(rand()%10).get() << ' ';

    cout << endl << sum(v, n);
*/


    INT x, y;
    cout << "ENTER x: " << endl;
    cin >> x;
    cout << "X = " << x << endl << endl;

    cout << "ENTER y: " << endl;
    cin >> y;
    cout << "Y = " << y << endl;

    return 0;
}