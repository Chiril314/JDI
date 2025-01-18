#include <iostream>
#include <cmath>
using namespace std;


bool isRight(double l1, double l2, double l3){
    return abs(pow(l1, 2) + pow(l2, 2) - pow(l3, 2)) < 1e-6 ||
           abs(pow(l2, 2) + pow(l3, 2) - pow(l1, 2)) < 1e-6 ||
           abs(pow(l3, 2) + pow(l1, 2) - pow(l2, 2)) < 1e-6;
}


bool isValid(double l1, double l2, double l3){
    return l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2;
}


int main(){
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double l1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double l2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double l3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (isRight(l1, l2, l3)){
        cout << "RIGHT";
        return 0;
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int i = 0; i < 4; i++){
        double l1_new = sqrt(pow(x1 + dx[i] - x2, 2) + pow(y1 + dy[i] - y2, 2));
        double l2_new = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        double l3_new = sqrt(pow(x3 - (x1 + dx[i]), 2) + pow(y3 - (y1 + dy[i]), 2));

        if (isValid(l1_new, l2_new, l3_new) && isRight(l1_new, l2_new, l3_new)){
            cout << "ALMOST";
            return 0;
        }

        l1_new = sqrt(pow(x1 - (x2 + dx[i]), 2) + pow(y1 - (y2 + dy[i]), 2));
        l2_new = sqrt(pow(x2 + dx[i] - x3, 2) + pow(y2 + dy[i] - y3, 2));
        l3_new = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

        if (isValid(l1_new, l2_new, l3_new) && isRight(l1_new, l2_new, l3_new)){
            cout << "ALMOST";
            return 0;
        }

        l1_new = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        l2_new = sqrt(pow(x2 - (x3 + dx[i]), 2) + pow(y2 - (y3 + dy[i]), 2));
        l3_new = sqrt(pow((x3 + dx[i]) - x1, 2) + pow((y3 + dy[i]) - y1, 2));

        if (isValid(l1_new, l2_new, l3_new) && isRight(l1_new, l2_new, l3_new)){
            cout << "ALMOST";
            return 0;
        }
    }

    cout << "NEITHER";
    return 0;
}