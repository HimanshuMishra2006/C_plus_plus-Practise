#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/*
Given an array arr[] containing only 0s, 1s, 
and 2s. Sort the array in ascending order.

*/

void sort012(vector<int>& arr)
{
    int countZero=0,countOne=0,countTwo=0; 
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            countZero++;
        }

        //countOne=countZero;

        if(arr[i]==1)
        {
            countOne++;
        }

        //countTwo=countOne;

        if(arr[i]==2)
        {
            countTwo++;
        }
    }

    countOne+=countZero;
    countTwo+=countOne;
    
    for(int i=0;i<arr.size();i++)
    {
        if(i<countZero)
        {
            arr[i]=0;
        }
        else if(i>=countZero && i<countOne)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=2;
        }
    }
}

int main()
{
    vector<int>a;
    int x;

    cout<<"Enter Array elements with only 0's,1's and 2's (type ctrl+z to stop) : "<<endl;

    while(cin>>x)
    {
        a.push_back(x);
    }
    

    cout<<"Original Array : ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }    cout<<endl;
    
    sort012(a);
    cout<<"Sorted Array : ";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }    
}    