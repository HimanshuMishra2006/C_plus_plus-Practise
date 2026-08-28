#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

  vector<int> findEvenOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for (int x : arr) freq[x]++;   // count frequency

        vector<int> result;
        for (int x : arr) {
            if (freq[x] % 2 == 0) {
                result.push_back(x);
                freq[x] = -1; // mark so we don’t add duplicates again
            }
        }

        if (result.empty()) return {-1};
        return result;
}

int main()
{
    vector<int>arr;
    cout<<"Enter Array Elements:"<<endl;

    vector<int> result;

    int x;

    while(cin>>x)
    {
        arr.push_back(x);
    }

    result=findEvenOccurrences(arr);

    cout<<"Even times occuring elements : ";
    for(int i:result)
    {
        cout<<i<<" ";
    }
    return 0;
}   
