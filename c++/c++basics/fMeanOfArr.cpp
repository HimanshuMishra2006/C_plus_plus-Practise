 #include<iostream>
using namespace std;
#include<vector>
 
 int findMean(vector<int>& arr) {
        
        int i=0,sum=0;
        
        while(i<arr.size())
        {
            sum+=arr[i];
            i++;
        }
        
        return sum/arr.size();
}

int main()
{
    vector<int>arr;
    cout<<"Enter Array Elements:"<<endl;

    int x;

    while(cin>>x)
    {
        arr.push_back(x);
    }

    cout<<"mean of the array is : "<<findMean(arr);
    return 0;
} 