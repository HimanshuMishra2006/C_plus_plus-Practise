#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsRange(vector<int>& arr, int start, int end) {
    unordered_set<int> s(arr.begin(), arr.end()); // store elements in a set
    
    for (int i = start; i <= end; i++) {
        if (s.find(i) == s.end()) {
            return false; // missing element
        }
    }
    return true; // all elements found
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    int start = 2, end = 6;
    
    if (containsRange(arr, start, end))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}
