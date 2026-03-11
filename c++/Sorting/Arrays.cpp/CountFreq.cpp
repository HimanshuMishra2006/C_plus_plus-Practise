#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void reverseArray(vector<int> &arr) {
        // code here
        int left=0,right=arr.size()-1;
        
        while(left<right)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
}

int main()
{
    
    vector <int> arr={2,5,3,6,7,5,2,4};
    cout<<"Original Array:";
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    reverseArray(arr);
    cout<<"Reversed Array:";

    for(int n:arr)
    {
        cout<<n<<" ";
    }
}