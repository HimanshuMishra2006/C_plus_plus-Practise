#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/* arr=[1,4,6,2,3,5] 
    sum of first half=1+4+6=11
    sum of second half= 2+3+5=10
    thus to balance the array, add 1 in second half.
*/
int minValueToBalance(vector<int> &arr)
{
    
    int sum1=0,sum2=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(i<arr.size()/2) sum1+=arr[i];
        if(i>=arr.size()/2) sum2+=arr[i];
    }
    
    return abs(sum1-sum2);
}

int main()
{
    vector<int> arr;
    int x;

    //input
    cout<<"Enter even no. of elements (press ctrl+z and enter to terminate inputs) :"<<endl;

    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"Array : ";
    for(int it:arr)
    {
        cout<<it<<" ";
    }

    cout<<endl;

    cout<<"Minimum value to balance the array is : "<<minValueToBalance(arr);

}
