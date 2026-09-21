#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>

vector<int> findMissing(vector<int>& a, vector<int>& b) {
        
        unordered_set<int> setB;
        
        vector<int> res;
        
        for(int y : b)
        {
            setB.insert(y);
        }
        
        for(auto it : a)
        {
            if(setB.find(it) == setB.end())
            {
                res.push_back(it);
            }
        }
        
        return res;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 4, 6};

    vector<int> missing = findMissing(a, b);

    cout << "Elements in A but not in B: ";
    for (int val : missing) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}