#include <iostream>

using namespace std;

int main(){
    int n, ansx = 0, ansy = 0, ansz = 0;
    cin >> n;

    int x, y, z;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        ansx += x;
        ansy += y;
        ansz += z;
    }

    if(ansx == 0 && ansy == 0 && ansz == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}