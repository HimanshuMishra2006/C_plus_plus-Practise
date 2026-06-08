#include<iostream>
using namespace std;
#include<vector>

int findUnique(vector<int> &arr){
        
    int res=0;

    for(int i=0;i<arr.size();i++)
    {
        res=res^arr[i];
    }
    
    return res;
}

int main()
{
    vector<int> arr={1,3,2,5,2,3,1};
    cout<<"Original Array : ";

    for(int x:arr)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    cout<<"Unique Element : "<<findUnique(arr);

    return 0;
}