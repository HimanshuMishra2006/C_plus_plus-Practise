/*You are given two arrays a[] and b[], 
return the Union of both the arrays in any order.
The Union of two arrays is a collection of all distinct 
elements present in either of the arrays.
If an element appears more than once in one or both arrays, 
it should be included only once in the result.*/


#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // map to store elements of both arr;
        unordered_map<int,int> mpp;
        //output arr
        vector<int>result;
        
        for(int i=0;i<a.size();i++)
        {
            mpp[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++)
        {
            mpp[b[i]]++;
        }
        
        for(auto it:mpp)
        {
            result.push_back(it.first);
        }
        
        return result;
    }

int main()
{
    //input
    vector<int>a={1,2,3,4,5};
    vector<int>b={1,2,3};

    cout<<"Union Array: "<<endl;

    vector<int>result=findUnion(a,b);

    for(int num:result)

    {
        cout<<num<<" ";
    }
    return 0;
    
}