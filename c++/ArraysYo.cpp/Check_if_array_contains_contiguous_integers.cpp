#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool areElementsContiguous(vector<int>& arr) {
        // Complete the function
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1] || arr[i+1]==arr[i]+1)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        
        return true;
}

int main()
{
    vector<int> a={2,5,4,9,7,6,8,5,2,1};
    if(areElementsContiguous(a))
    {
        cout<<"Yes,it is contagious";
    }else{
        cout<<"No,it is not a contagious array";

    }

}