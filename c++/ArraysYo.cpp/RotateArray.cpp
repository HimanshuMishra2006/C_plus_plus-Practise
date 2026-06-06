#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*Rotate an array upto d places in clock-wise direction : 
  arr=1 2 3 4 5 , d= 2, then resultant array = 3 4 5 1 2 */

void rotateArr(vector<int>& arr, int d)
    {
        //let arr= 1 2 3 4 5  , d=2 ;
        
         d=d%arr.size();  
        
         reverse(arr.begin(),arr.begin()+d);   // 2 1 3 4 5
         reverse(arr.begin()+d,arr.end());     // 2 1 5 4 3
         reverse(arr.begin(),arr.end());       // 3 4 5 1 2
    }

int main()
{
    vector<int> arr;
    int x,d;
    cout<<"Enter value of d :";
    cin>>d;
    cout<<"Enter array elements, leaving one,every element occurs even times:(ctrl+z to stop)"<<endl;
    
    //input arr
    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Original Array : ";
    for(int i:arr)
    {
        cout<<arr[i]<<" ";
    }
    rotateArr(arr,d);

    cout<<"Resultant Array : ";
    for(int i:arr)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
