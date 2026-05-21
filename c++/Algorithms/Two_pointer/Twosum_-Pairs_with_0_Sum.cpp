#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>result;
        int l=0,r=arr.size()-1;
        
        while(l<r)
        {
            if(arr[l] + arr[r] == 0)
            {
                result.push_back({arr[l],arr[r]});
                l++;r--;
                while (l < r && arr[l] == arr[l-1]) l++;
                while (l < r && arr[r] == arr[r+1]) r--;
            }
            else if (arr[l] + arr[r]>0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return result;
}

int main()
{
    vector<int>arr;
    int x;
    cout<<"Enter values of the array(stop using ctrl+z):";
    while(cin>>x)
    {
        arr.push_back(x);
    }
    vector<vector<int>>result=getPairs(arr);
    for (auto &pair : result)
    {
        cout << "(" << pair[0] << ", " << pair[1] << ")\n";
    }
}