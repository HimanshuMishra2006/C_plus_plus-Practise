#include<iostream>
using namespace std;
#include<vector>

int sumExceptFirstLast(vector<int>& arr) {
        
        int sum=0;
        for(int x:arr)
        {
            sum+=x;
        }
        
        return sum-arr[0]-arr[arr.size()-1];
}

int main()
{
    vector<int>arr;
    cout<<"Enter Array Elements:"<<endl;

    int x;

    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"sum except first and last element is : "<<sumExceptFirstLast(arr);
    return 0;
}