#include <iostream>
#include <vector>

using namespace std;

int findMax(vector<int> a, int start, int end){
    if(start == end)
        return a[start];

    int mid = (start + end) / 2;
    int max1 = findMax(a, start, mid);
    int max2 = findMax(a, mid + 1, end);

    if(max1 > max2)
        return max1;

    return max2;
}


int findMin(vector<int>a, int start, int end){
    if(start == end)
        return a[start];

    int mid = (start + end) / 2;
    int min1 = findMin(a, start, mid);
    int min2 = findMin(a, mid + 1, end);

    if(min1 < min2)
        return min1;

    return min2;
}


int main(){
    vector<int> a;
    
    int x;
    while(cin >> x)
        a.push_back(x);

    cout << "MAX: " << findMax(a, 0, a.size() - 1) << endl;
    cout << "MIN: " << findMin(a, 0, a.size() - 1);

 
    return 0;
}