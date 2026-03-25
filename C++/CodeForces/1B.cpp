#include <bits/stdc++.h>

using namespace std;


bool isCoordinate(string s){
    if (s[0] == 'R' && (int(s[1]) > 47 && int(s[1]) < 58)) {
        bool flag = false;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'C') {
                flag = true;
                break;
            }
        }
        return flag;
    } else {
        return false;
    }
}


int strToInt(string s) {
    int n = 0;
    for (int i=0; i<s.size(); i++) {
        n += (int(s[i])-48) * pow(10,s.size()-i-1);
    }
    return n;
}


int letToInt(string s) {
    int n = 0;
    for(int i=0; i<s.size(); i++){
        n += pow(26, s.size()-(i+1)) * (int(s[i])-64);
    }
    return n;
}


void toCoordinate(string s) {
    string col = "";
    string row = "";
    int pos;

    for (int i=0; i<s.size(); i++) {
        pos = int(s[i]);
        if (pos > 64 && pos < 91) { // Letter
            col += s[i];
        } else if (pos > 47 && pos < 58) { // Digit
            row += s[i];
        }
    }

    cout << "R" << row << "C" << letToInt(col) << endl;
    
    return;
}


string numberToColumn(int s) {
    string col3;

    while (s) {
        col3 = char('A' + (--s % 26)) + col3;
        s /= 26;
    }

    return col3;
}


void fromCoordinate(string s) {
    string col1 = "";
    string row1 = "";
    int pos1;

    bool isAfterC = false;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'C') {
            isAfterC = true;
            continue;
        }

        if (!isAfterC) {
            row1 += s[i];
        } else {
            col1 += s[i];
        }
    }
    int col2 = stoi(col1);

    cout << numberToColumn(col2) << row1 << endl;

    return;
}


int main() {
    int t;
    cin >> t;

    string p;
    while (t--) {
        cin >> p;
        if (isCoordinate(p)) {
            fromCoordinate(p);
        } else {
            toCoordinate(p);
        }
    }

    return 0;
}