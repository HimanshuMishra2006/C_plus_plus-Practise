#include<iostream>
using namespace std;
#include<vector>

void swapElements(vector<int> &arr) {
        
        if(arr.size()<3) return;
        
        for(int i=0;i<arr.size()-2;i++)
        {
            swap(arr[i],arr[i+2]);
        }
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7};

    cout<<"Original Array : ";
    
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    swapElements(arr);

    cout<<"Swapped Array : ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    return 0;

}