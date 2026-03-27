#include<iostream>
using namespace std;
#include<map>
#include<vector>

/*Given an array of elements occurring in multiples of k,
except one element which doesn't occur in multiple of k. Return the unique element.*/

int findUnique(int k, vector<int>& arr) {
        // use a map;
        map<int,int> mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        
        for(int i=0;i<mpp.size();i++)
        {
            //check if freq of element is multiple of k;
            if(mpp[i]%k!=0)
            {
                return i;
            }
        }
}

int main()
{
    vector<int> arr;
    int x,k;
    int n;
    cout<<"Enter array size:";
    cin>>n;
    cout<<endl;

    cout<<"Enter k:";
    cin>>k;

    //input
    cout<<"Enter inputs(press ctrl+z and enter to terminate inputs):"<<endl;

    while(cin>>x && n>0)
    {
        arr.push_back(x);
        n--;
    }

    cout<<"Unique Element: "<<findUnique(k,arr);
}