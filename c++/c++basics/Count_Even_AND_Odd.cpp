#include<iostream>
using namespace std;
#include<vector>

void countOddEven(vector<int>& arr) {
        // code here
        int countEven=0,countOdd=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
        cout<<countOdd<<" "<<countEven<<endl;
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

    countOddEven(arr);
    return 0;
}   

