#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    struct abc{
        int a;
        int b;
        int c;
        int r;
    };

    struct student{
        char nume[100] = "";
        char grupa[100];
        int ani;
        bool gen;
        double media;
    };

/*
    abc w;
    w.a = 3;
    w.b = 2;
    w.c = 1;

    w.r = w.a + w.b - w.c;
    cout << w.a << " + " << w.b << " - " << w.c << " = " << w.r;
*/

/*
    abc v[100];
    for(int i = 0; i < 100; i++){
        v[i].a = rand()%10;
        v[i].b = rand()%10;
        v[i].c = rand()%10;
        v[i].r = v[i].a + v[i].b + v[i].c;

        cout << i + 1 << " din 100: " << v[i].a << " + ";
        cout << v[i].b << " - " << v[i].c << " = " << v[i].r << endl;
    }
*/

/*
    abc *x = new abc;
    x->a = 3;
    x->b = 2;
    x->c = 1;

    x->r = x->a + x->b - x->c;
    cout << x->a << " + " << x->b << " - " << x->c << " = " << x->r;
    delete x;
*/

/*
    abc *v;

    int *n = new int(rand()%10 + 10);
    v = new abc[*n];
    for(int i = 0; i < *n; i++){
        v[i].a = rand()%10;
        (v + i)->b = rand()%10;
        v[i].c = rand()%10;

        v[i].r = v[i].a + v[i].b - v[i].c;

        cout << i + 1 << " din " << *n << ": " << v[i].a << " + ";
        cout << v[i].b << " - " << v[i].c << " = " << v[i].r << endl;
    }
*/

/*
    student s[100];
    int n = rand()%4 + 1;
    for(int i = 0; i < n; i++){
        cout << endl << "Student[" << i + 1 << " din " << n << "]" << endl;
        cout << "Nume = ";
        cin >> s[i].nume;
        cout << endl << "Ani = ";
        cin >> s[i].ani;
        cout << endl << "Gen = ";
        cin >> s[i].gen;
        cout << endl << "Media = ";
        cin >> s[i].media;
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        cout << endl << "Student[" << i + 1 << " din " << n << "]" << endl;
        cout << "Nume = " << s[i].nume;
        cout << endl << "Ani = " << s[i].ani;
        cout << endl << "Gen = " << s[i].gen;
        cout << endl << "Media = " << s[i].media;
        cout << endl;
    }
*/

    student s[100];
    int n = rand()%10 + 1;

    for(int i = 0; i < n; i++){
        s[i].nume[0] = 'a' + rand()%26;
        s[i].ani = rand()%50 + 15;
        s[i].gen = rand()%2;
        s[i].media = double(rand()%91 + 10) / 10;
    }

    for(int i = 0; i < n; i++){
        cout << endl << "Student[" << i + 1 << " din " << n << "]" << endl;
        cout << "Nume = " << s[i].nume;
        cout << endl << "Ani = " << s[i].ani;
        cout << endl << "Gen = " << s[i].gen;
        cout << endl << "Media = " << s[i].media << endl;
    }

    struct contor{
        int cm = 0;
        int cf = 0;
    };

    contor c;
    for(int i = 0; i < n; i++)
        if(s[i].gen == 1)
            c.cm++;
        else
            c.cf++;

    cout << endl << c.cm << " persoane de genul masculin";
    cout << endl << c.cf << " persoane de genul feminin";

    return 0;
}