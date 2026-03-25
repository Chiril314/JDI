#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double computeArea(vector<int> px, vector<int> py) {
    double sum = 0;
    for(int i = 0; i < 4; i++){
        int j = (i + 1) % 4;
        sum += px[i] * py[j] - px[j] * py[i];
    }

    return fabs(sum) / 2.0;
}

int main(){
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    double ans = 0.0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
                for(int l = k + 1; l < n; l++){
                    vector<int> px, py;
                    px.push_back(x[i]); 
                    py.push_back(y[i]);

                    px.push_back(x[j]); 
                    py.push_back(y[j]);

                    px.push_back(x[k]); 
                    py.push_back(y[k]);

                    px.push_back(x[l]); 
                    py.push_back(y[l]);

                    vector<int> idx = {0, 1, 2, 3};

                    bool flag = true;
                    while(flag || next_permutation(idx.begin(), idx.end())){
                        flag = false;

                        vector<int> cx(4), cy(4);
                        for(int m = 0; m < 4; m++){
                            cx[m] = px[idx[m]];
                            cy[m] = py[idx[m]];
                        }

                        double a = computeArea(cx, cy);
                        if(a > ans)
                            ans = a;
                    }
                }

    cout << ans;

    return 0;
}