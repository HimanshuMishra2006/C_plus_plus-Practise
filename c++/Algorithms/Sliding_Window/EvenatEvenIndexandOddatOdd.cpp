#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<int> reArrange(vector<int>& arr) {
        // code here
        int n=arr.size();
        int i=0,j=1;
        while (i < n && j < n) {
        if (arr[i] % 2 == 0) {
            i += 2; // correct placement, move ahead
        } else if (arr[j] % 2 == 1) {
            j += 2; // correct placement, move ahead
        } else {
            // arr[i] is odd, arr[j] is even → swap
            swap(arr[i], arr[j]);
            i += 2;
            j += 2;
        }
    }
    return arr;
}

int main()
{
    vector<int>arr;
    int x;

    cout<<"Enter values of the array(stop using ctrl+z):"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
    vector<int>result = reArrange(arr);

    for(int i=0;i<result.size();i++)
    {
        cout<<i<<" : "<<result[i];
        cout<<endl;
    }
    return 0;
}