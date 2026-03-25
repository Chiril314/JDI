#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a;
    char x;
    while(cin >> x)
        a.push_back(x - '0');
    
    int index = -1;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0 && a[a.size() - 1] > a[i]){
            int temp = a[i];
            a[i] = a[a.size() - 1];
            a[a.size() - 1] = temp;
            break;
        } else if(a[i] % 2 == 0 && a[a.size() - 1] < a[i])
            index = i;

        if(i == a.size() - 1 && index == -1){
            cout << -1;
            return 0;
        } else if(i == a.size() - 1 && index != -1){
            int temp = a[index];
            a[index] = a[a.size() - 1];
            a[a.size() - 1] = temp;
        }
    }

    for(int i = 0; i < a.size(); i++)
        cout << a[i];

    return 0;
}