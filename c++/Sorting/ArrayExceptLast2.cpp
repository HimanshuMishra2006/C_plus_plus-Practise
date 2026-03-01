#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<int> findElements(vector<int> arr) {
        // Your code goes here
        int n=arr.size();
        vector<int>res(n-2,0);
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {
            res[i]=arr[i];
        }
        
        return res;
        
    }

int main()
{
    vector<int> arr={8,3,5,7,1,2,6,4,9,0};
    int size=arr.size();
    vector<int> res=findElements(arr);
    for(int i=0;i<size-2;i++)
    {
        cout<<res[i]<<" ";
    }

    

}