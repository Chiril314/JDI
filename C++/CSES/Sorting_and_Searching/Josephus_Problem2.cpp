#include <iostream>
#include <queue>
#include <vector>
 
using namespace std;

struct Segment{
    int left;
    int right;
};

int n, k;
vector<Segment> segTree;

int query(int ind, int l, int r, int c) {
    if(l == r){
        segTree[ind] = {0, 0};
        return l;
    }

    int m = l + (r - l) / 2, answer;
    if(c <= segTree[ind].left){
        int leftChild = 2 * ind + 1;
        answer = query(leftChild, l, m, c);

        segTree[ind].left = segTree[leftChild].left + segTree[leftChild].right;
    } else{
        int rightChild = 2 * ind + 2;
        answer = query(rightChild, m + 1, r, c - segTree[ind].left);

        segTree[ind].right = segTree[rightChild].left + segTree[rightChild].right;
    }

    return answer;
}

void build(int ind, int l, int r){
    if(l == r){
        segTree[ind] = {1, 0};
        return;
    }

    int m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    segTree[ind].left = segTree[2 * ind + 1].left + segTree[2 * ind + 1].right;
    segTree[ind].right = segTree[2 * ind + 2].left + segTree[2 * ind + 2].right;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n >> k;
    segTree.resize(4 * n);

    int m = n, p;
    build(0, 0, n - 1);

    long long pos = 0;
    for (int i = n; i >= 1; i--){
        pos = (pos + k) % i;
        int ind = query(0, 0, n - 1, pos + 1);

        cout << ind + 1 << ' ';
    }

 
    return 0;
}