#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> lightLevels;
    for(int i = 0; i < n; i++){
        int light;
        cin >> light;
        lightLevels.push_back({light, i + 1});
    }

    sort(lightLevels.rbegin(), lightLevels.rend());
    int minLightLevel = lightLevels[k - 1].first;
    cout << minLightLevel << endl;

    vector<int> selectedIndices;
    for(int i = 0; i < k; i++) 
        selectedIndices.push_back(lightLevels[i].second);

    sort(selectedIndices.begin(), selectedIndices.end());
    for(int i = 0; i < k; i++)
        cout << selectedIndices[i] << ' ';

    return 0;
}
