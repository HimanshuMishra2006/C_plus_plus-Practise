#include<iostream>
using namespace std;
#include<vector>

 int multiply(vector<int> &arr) {
       
        int sumLeft=0;
        int sumRight=0;
        int n=arr.size()/2;
        
        for(int i=0;i<arr.size();i++)
        {
            if(i<n)
            {
                sumLeft+=arr[i];
            }
            else{
                sumRight+=arr[i];
            }
        }
        return sumLeft*sumRight;
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

    cout<<"Required product is : "<<multiply(arr);
    return 0;
}   