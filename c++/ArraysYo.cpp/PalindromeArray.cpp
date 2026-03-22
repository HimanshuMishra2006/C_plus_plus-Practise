#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

bool isPerfect(vector<int> &arr) {
        // code here
        vector<int> reversed_arr=arr;
        reverse(reversed_arr.begin(),reversed_arr.end());
        return arr==reversed_arr;
    }
 
int main()
{
    vector<int> arr1={8,3,5,7,1,2,6,4,9,0};
    cout<<"print 0 for false and 1 for true:"<<endl;
    cout<<"for 1st array:"<<isPerfect(arr1);
    cout<<endl;
    vector<int> arr2={1,2,3,2,1};
    cout<<"for 2nd array:"<<isPerfect(arr2);
}    