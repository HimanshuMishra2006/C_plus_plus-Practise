#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int getOddOccurrence(vector<int>& arr) {
        // code here
        int maxVal = *max_element(arr.begin(), arr.end());
        vector<int> hash(maxVal+1,0);
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]+=1;
        }
        
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]%2!=0)
            {
                return i;
            }
        }
    }
 
int main()
{
    
    vector <int> arr={2,5,3,5,3,6,7,5,2,7,6};
    cout<<"Odd_Occuring element is: ";
    cout<<getOddOccurrence(arr);
}    