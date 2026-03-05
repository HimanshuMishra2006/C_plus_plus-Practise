#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        sort(arr.begin(),arr.end(),greater<int>());
         vector<int> kLargestElem(k);
         
        for(int i=0;i<k;i++)
        {
            kLargestElem[i]=arr[i];
        }
        return kLargestElem;
    }

int main()
{
    vector<int> arr={1, 12, 5, 111, 200, 1000, 10};
    int K=2;
    
    cout<<K<<" Largest element in the given array = ";
    vector<int> result=kLargest(arr,K);

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

}