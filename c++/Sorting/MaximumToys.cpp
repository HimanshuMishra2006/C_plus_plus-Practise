#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int toyCount(int N, int K, vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        int sum=0,i=0;
        
        while(sum<=K && i<N)
        {
            sum+=arr[i];
            if(sum<=K)i++;
            
        }
        
        return i;
    }


int main()
{
    vector<int> arr={1, 12, 5, 111, 200, 1000, 10};
    int N=arr.size(), K= 50;
    
    cout<<"Maximum no. of toys bought = ";
    cout<< toyCount( N,  K,  arr);

}