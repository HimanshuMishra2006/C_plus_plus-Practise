#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int>& arr) {
    unordered_set<int> unique;
    vector<int> res;

    for (int x : arr) {
        if (unique.find(x) == unique.end()) {  // not seen before
            res.push_back(x);
            unique.insert(x);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 1, 5};
    vector<int> res = removeDuplicate(arr);

    for (int x : res) cout << x << " ";
    return 0;
}
