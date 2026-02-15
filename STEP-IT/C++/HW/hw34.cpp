#include <iostream>
#include <string>

using namespace std;

namespace STEP{
    int a = 123;
}

class STUDENT{
    protected:
        string nume;

    public:
        virtual void setNume(string n) = 0;
        virtual string getNume() const = 0;

        void show() const{
            cout << "Student STEP" << endl;
        }

        virtual ~STUDENT(){}
};

class STUD : public STUDENT{
    public:
        static string institutie;  

    STUD(){}

    STUD(string n){
        nume = n;
    }

    void setNume(string n) override{
        nume = n;
    }

    string getNume() const override{
        return nume;
    }

    static void setInstitutie(string value){
        institutie = value;
    }
};

string STUD::institutie = "STEP IT Academy";

template <class T>
class VAR{
    T value;

    public:
        VAR(){}
        VAR(T v){ 
            value = v; 
        }

        void set(T v){ 
            value = v; 
        }
        
        T get() const{ 
            return value; 
        }
};

template <typename T>
void showValue(string msg, T value){
    cout << msg << value << endl;
}

int main(){
    cout << "Namespace STEP::a = " << STEP::a << endl;

    STUD s1("Alex");
    STUD s2("Maria");

    STUD::setInstitutie("STEP 2025");

    cout << "Student 1: " << s1.getNume() << endl;
    cout << "Student 2: " << s2.getNume() << endl;
    cout << "Institutie: " << STUD::institutie << endl;

    s1.show();

    VAR<int> v1(100);
    VAR<double> v2(3.14);
    VAR<string> v3("Template C++");

    cout << v1.get() << endl;
    cout << v2.get() << endl;
    cout << v3.get() << endl;

    showValue("Int = ", 10);
    showValue("Double = ", 5.5);
    showValue("Text = ", string("STEP"));

    return 0;
}