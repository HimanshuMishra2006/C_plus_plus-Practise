#include<iostream>
using namespace std;
#include<vector>

int findClosest(vector<int>& arr, int k) {
        // Complete the function
        int size=arr.size(),closest=INT16_MAX;
        for(int i=0;i<size;i++)
        {
                closest=min(abs(arr[i]-k),closest);
                if(abs(arr[i+1]-k)>closest)
                {
                    return arr[i];
                }
        }
    
}

int main()
{
    vector<int> a={2,5,4,9,7,6,8,5,2,1};
    int k;
    cout<<"Enter a number:";
    cin>>k;

    cout<<"Closest number near to "<<k<<" is : "<<findClosest(a,k);
}