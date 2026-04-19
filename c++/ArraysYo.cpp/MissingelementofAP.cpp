#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
/*Given a sorted array arr[] that represents an Arithmetic Progression (AP) with exactly 
one missing element, find the missing number.
*/
int findMissing(vector<int> &arr)
{
    // code here
    int n=arr.size(),i=0;
    int diff=(arr[n-1]-arr[0])/(n);
    
    if(diff==arr[1]-arr[0] || diff== arr[n-1]-arr[n-2])
    {
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]!=arr[i]+diff)
            {
             
                return arr[i]+diff;
            }
        }
    }
    
    diff=(arr[n-1]-arr[0])/(n-1);
    return arr[n-1]+diff;   
}

int main()
{
    vector<int> arr;
    //input
    arr={2,4,8,10,12,14};
  
    cout<<"Required element:";
    cout<<findMissing(arr);
}