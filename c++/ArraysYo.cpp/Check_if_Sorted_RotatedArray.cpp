#include<iostream>
using namespace std;
#include<vector>

bool check(vector<int>& nums)
{
        int drop=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                drop+=1;
            }
            
        }

        if(drop==0) return true;

        if(drop==1 && nums[nums.size()-1]<=nums[0])
        {
            return true;
        }

        return false;
}

int main()
{
    vector<int>arr={4,5,1,2,3};
    vector<int>nums={2,1,3,4,5};

    if(check(arr))
    {
        cout<<"yes,it is sorted rotated array.";
    }
    else{
        cout<<"No,its not.";
    }

    cout<<endl;
    
    if(check(nums))
    {
        cout<<"yes,it is sorted rotated array.";
    }
    else{
        cout<<"No,its not.";
    }
}