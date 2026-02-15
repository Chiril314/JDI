#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// STL

// 1. Conteinere -  variabile
// 2. Iteratori  -  pointeri
// 3. Algoritmi

int main(){
    srand(time(0));

/*
    vector<int> v1, v2(3), v3(3, -1), v4 = {1, 2, 3, 4};
    vector<int> v5 = v4;

    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.max_size() = " << v1.max_size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl << endl;

    cout << "v2.size() = " << v2.size() << endl;
    cout << "v2.max_size() = " << v2.max_size() << endl;
    cout << "v2.capacity() = " << v2.capacity() << endl << endl;

    int t = 10;
    while(t--){
        v.push_back(rand()%10);
        cout << "v2.size() = " << v2.size() << endl;
        cout << "v2.capacity() = " << v2.capacity() << endl << endl;
    }
*/

    int n = rand()%7 + 3;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = rand()%10;
        cout << v[i] << ' ';
    }

    cout << endl;
    for(auto i = v.begin(); i != v.end(); i++){
        cout << *i << ' ';
    }

    return 0;
}