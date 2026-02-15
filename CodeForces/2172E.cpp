#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a[] = {"12", "21"};
    string b[] = {"123", "132", "213", "231", "312", "321"}; 
    string c[] = {"1234", "1243", "1324", "1342", "1423", "1432", "2134", "2143", "2314", "2341", "2413", "2431", "3124", "3142", "3214", "3241", "3412", "3421", "4123", "4132", "4213", "4231", "4312", "4321"};

    int t;
    cin >> t;

    while(t--){
        string n, c1, c2;
        cin >> n;

        int j, k;
        cin >> j >> k;

        j--;
        k--;

        if(n == "12"){
            c1 = a[j];
            c2 = a[k];
        } else if(n == "123"){
            c1 = b[j];
            c2 = b[k];
        } else if(n == "1234"){
            c1 = c[j];
            c2 = c[k];
        }

        int cnt = 0;
        for(int i = 0; i < n.size(); i++)
            if(c1[i] == c2[i])
                cnt++;

        cout << cnt << 'A' << n.size() - cnt << 'B' << endl;
    }

    return 0;
}