#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[k-1];
        
    }

 int main()
{
    vector<int> arr={1, 12, 5, 111, 200, 1000, 10};
    int K=2;
    
    cout<<K<<"th Smallest element in the given array = ";
     cout<<kthSmallest(arr,K);
   

}