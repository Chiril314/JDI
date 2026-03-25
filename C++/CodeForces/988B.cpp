#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compareByLength(string a, string b){
    return a.size() < b.size();
}

bool isSubstring(string a, string b){
    int lenA = a.size();
    int lenB = b.size();

    for(int i = 0; i <= lenB - lenA; i++){
        int j = 0;
        while(j < lenA && b[i + j] == a[j])
            j++;

        if(j == lenA)
            return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);

    for(int i = 0; i < n; i++)
        cin >> strings[i];

    sort(strings.begin(), strings.end(), compareByLength);

    for(int i = 0; i < n - 1; i++)
        if(!isSubstring(strings[i], strings[i + 1])){
            cout << "NO" << endl;
            return 0;
        }

    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << strings[i] << endl;

    return 0;
}