#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    // Input description
    vector<int> in1_type(m), in1_idx(m);
    vector<int> in2_type(m), in2_idx(m);

    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;

        if (a[0] == 'x') {
            in1_type[i] = 0;
            in1_idx[i] = stoi(a.substr(1)) - 1;
        } else {
            in1_type[i] = 1;
            in1_idx[i] = stoi(a.substr(1)) - 1;
        }

        if (b[0] == 'x') {
            in2_type[i] = 0;
            in2_idx[i] = stoi(b.substr(1)) - 1;
        } else {
            in2_type[i] = 1;
            in2_idx[i] = stoi(b.substr(1)) - 1;
        }
    }

    // possible values: [canBe0, canBe1]
    vector<array<bool,2>> wire(n), gate(m);

    for (int i = 0; i < n; i++)
        wire[i][0] = wire[i][1] = true;

    for (int i = 0; i < m; i++)
        gate[i][0] = gate[i][1] = true;

    // apply measurements
    for (int i = 0; i < m; i++) {
        if (s[i] == '0') gate[i][1] = false;
        if (s[i] == '1') gate[i][0] = false;
    }

    // propagate constraints forward
    for (int i = 0; i < m; i++) {

        // CASE 1: output is FORCED to 0
        if (gate[i][0] && !gate[i][1]) {
            if (in1_type[i] == 0)
                wire[in1_idx[i]][1] = false;
            else
                gate[in1_idx[i]][1] = false;

            if (in2_type[i] == 0)
                wire[in2_idx[i]][1] = false;
            else
                gate[in2_idx[i]][1] = false;
        }

        // CASE 2: output is FORCED to 1
        if (!gate[i][0] && gate[i][1]) {

            bool in1_can1, in2_can1;

            if (in1_type[i] == 0)
                in1_can1 = wire[in1_idx[i]][1];
            else
                in1_can1 = gate[in1_idx[i]][1];

            if (in2_type[i] == 0)
                in2_can1 = wire[in2_idx[i]][1];
            else
                in2_can1 = gate[in2_idx[i]][1];

            if (!in1_can1) {
                if (in2_type[i] == 0)
                    wire[in2_idx[i]][0] = false;
                else
                    gate[in2_idx[i]][0] = false;
            }

            if (!in2_can1) {
                if (in1_type[i] == 0)
                    wire[in1_idx[i]][0] = false;
                else
                    gate[in1_idx[i]][0] = false;
            }
        }
    }

    // output
    for (int i = 0; i < m; i++) {
        if (gate[i][1] && !gate[i][0])
            cout << '1';
        else if (gate[i][0] && !gate[i][1])
            cout << '0';
        else
            cout << '?';
    }

    return 0;
}