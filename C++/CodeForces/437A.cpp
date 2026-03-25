#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b, c, d;
    cin >> a >> b >> c >> d;

    int na = a.size() - 2, nb = b.size() - 2, nc = c.size() - 2, nd = d.size() - 2, cw;
    bool flaga = 0, flagb = 0, flagc = 0, flagd = 0;
    if(na * 2 <= nb && na * 2 <= nc && na * 2 <= nd)
        flaga = 1;
    if(na >= nb * 2 && na >= nc * 2 && na >= nd * 2)
        flaga = 1;

    if(nb * 2 <= na && nb * 2 <= nc && nb * 2 <= nd)
        flagb = 1;
    if(nb >= na * 2 && nb >= nc * 2 && nb >= nd * 2)
        flagb = 1;
    
    if(nc * 2 <= na && nc * 2 <= nb && nc * 2 <= nd)    
        flagc = 1;
    if(nc >= na * 2 && nc >= nb * 2 && nc >= nd * 2)
        flagc = 1;
    
    if(nd * 2 <= na && nd * 2 <= nb && nd * 2 <= nc)
        flagd = 1;
    if(nd >= na * 2 && nd >= nb * 2 && nd >= nc * 2)
        flagd = 1;

    
    cw = flaga + flagb + flagc + flagd;
    if(cw == 1){
        if(na * 2 <= nb && na * 2 <= nc && na * 2 <= nd){
            cout << 'A';
            return 0;
        }
        if(na >= nb * 2 && na >= nc * 2 && na >= nd * 2){
            cout << 'A';
            return 0;
        }

        if(nb * 2 <= na && nb * 2 <= nc && nb * 2 <= nd){
            cout << 'B';
            return 0;
        }
        if(nb >= na * 2 && nb >= nc * 2 && nb >= nd * 2){
            cout << 'B';
            return 0;
        }
        
        if(nd * 2 <= na && nd * 2 <= nb && nd * 2 <= nc){
            cout << 'D';
            return 0;
        }
        if(nd >= na * 2 && nd >= nb * 2 && nd >= nc * 2){
            cout << 'D';
            return 0;
        }
    }

    cout << 'C';

    return 0;
}