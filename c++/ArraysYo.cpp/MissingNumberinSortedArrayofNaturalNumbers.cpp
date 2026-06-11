#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int missingNumber(vector<int>& arr) {

        int n=arr.size()+1;
        int sum = (n*(n+1))/2;
        int sumARR=0;
        
        for(int i=0;i<arr.size();i++)
        {
             sumARR+=arr[i];
        }
        
        return sum-sumARR;
}

int main()
{
    int n;
    cout<<"Enter a number 'n' : ";
    cin>>n;
    vector<int> arr;
    int x;
    cout<<"Enter array elements from 1-n leaving one number (ctrl+z to stop) :"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Missing element is : "<<missingNumber(arr)<<endl;
}