#include <iostream>
#include <string>

using namespace std;

class AUTO{
    protected:
        string MARCA;
        int ANI;

    public:
        AUTO(string MARCA = "\0", int ANI = 0) : MARCA(MARCA), ANI(ANI){}
        virtual ~AUTO(){}

    virtual void SHOW(){
        cout << "MARCA = " << MARCA << endl << "  ANI = " << ANI << endl;
    }
};

class ELECTRIC : public AUTO{
    protected:
        int AUTONOMIE;  

    public:
        ELECTRIC(string MARCA = "\0", int ANI = 0, int AUTONOMIE = 0) : AUTO(MARCA, ANI), AUTONOMIE(AUTONOMIE){}

        void SHOW() override{
            cout << "=== AUTO ELECTRIC ===" << endl;
            AUTO::SHOW();
            cout << "AUTONOMIE = " << AUTONOMIE << " km" << endl;
        }
};

class BENZINA : public AUTO{
    protected:
        double LITRI;

    public:
        BENZINA(string MARCA = "\0", int ANI = 0, double LITRI = 0) : AUTO(MARCA, ANI), LITRI(LITRI){}

        void SHOW() override{
            cout << "=== AUTO BENZINA ===" << endl;
            AUTO::SHOW();
            cout << "REZERVOR = " << LITRI << " litri" << endl;
        }
};

class DISEL : public AUTO{
    protected:
        double CONSUM;

    public:
        DISEL(string MARCA = "\0", int ANI = 0, double CONSUM = 0) : AUTO(MARCA, ANI), CONSUM(CONSUM){}

        void SHOW() override{
            cout << "=== AUTO DISEL ===" << endl;
            AUTO::SHOW();
            cout << "CONSUM = " << CONSUM << " L/100km" << endl;
        }
};

int main(){
    AUTO* PARC[1000];

    string MARCA;
    int i = 0, ANI, autonomie;
    double litri, consum;

    while(true){
        system("cls");
        cout << "\n\n\t   MENIU AUTOMOBILE\n";
        cout << "\t1. Adauga Electric\n";
        cout << "\t2. Adauga Benzina\n";
        cout << "\t3. Adauga Disel\n";
        cout << "\t4. Afiseaza toate AUTO\n";
        cout << "\tESC. Exit\n";

        switch (_getch()){
            case 27: 
                exit(0);

            case '1':
                cout << "MARCA = "; 
                cin >> MARCA;
                cout << "ANI = "; 
                cin >> ANI;
                cout << "AUTONOMIE = "; 
                cin >> autonomie;

                PARC[i] = new ELECTRIC(MARCA, ANI, autonomie);
                i++;
                break;

            case '2':
                cout << "MARCA = "; 
                cin >> MARCA;
                cout << "ANI = "; 
                cin >> ANI;
                cout << "LITRI REZERVOR = "; 
                cin >> litri;

                PARC[i] = new BENZINA(MARCA, ANI, litri);
                i++;
                break;

            case '3':
                cout << "MARCA = "; 
                cin >> MARCA;
                cout << "ANI = "; 
                cin >> ANI;
                cout << "CONSUM (L/100km) = "; 
                cin >> consum;

                PARC[i] = new DISEL(MARCA, ANI, consum);
                i++;
                break;

            case '4':
                for (int x = 0; x < i; x++){
                    cout << "\nAUTO[" << x+1 << "]\n";
                    PARC[x]->SHOW(); 
                    cout << endl;
                }
                
                system("pause");
                break;
        }
    }

    return 0;
}