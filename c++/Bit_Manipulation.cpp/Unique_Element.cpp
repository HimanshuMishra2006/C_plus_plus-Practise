#include<iostream>
using namespace std;
#include<vector>
//Bit manipulation can help us walk through this ques easily;
int findUnique(vector<int> &arr){
        
    int res=0;

    for(int i=0;i<arr.size();i++)
    {
        res=res^arr[i];      // every even occuring number cancels itself out;
    }
    
    return res;     //thus leaving us the unique element;
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

    cout<<"Unique Element : "<<findUnique(arr);   // TC -> O(n);  SC -> O(n)

    return 0;
}
