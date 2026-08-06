#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

//function which finds the first element of the array which does not repeat again
int firstNonRepeating(vector<int>& arr) {

        //unordered map for hashing the elements
        unordered_map<int,int>res;
        
        for(int i=0;i<arr.size();i++)
        {
            res[arr[i]]+=1;
        }

        //compairing through the array rather than the u_map to maintain the order
        for(int it:arr)
        {
            if(res[it]==1)return it;
        }

        //if no elements found non-repeating
        return 0;
}

int main()
{
    //input
    vector<int>arr;
    int x;

    cout<<"Enter array elements(ctrl+z to stop): "<<endl;
    while(cin>>x)
    {
      arr.push_back(x);  
    }

    cout<<"First non-repeating element : "<<firstNonRepeating(arr);
}
