#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int getSingle(vector<int>& arr)
{
    int res=0;
    for(int x:arr)
    {
        res^=x;
    }
    
    return res;
}

int main()
{
    vector<int> arr;
    int x;
    cout<<"Enter array elements, leaving one,every element occurs even times:(ctrl+z to stop)"<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Odd Occuring element is : "<<getSingle(arr)<<endl;
}