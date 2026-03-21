 #include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>
 
 const long long MOD = 1e9 + 7;
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
        unordered_set<int>set1(arr1.begin(),arr1.end());
        unordered_set<int>set2(arr2.begin(),arr2.end());
        
        long long sum=0;
        
        for(int num:set1)
        {
            if(set2.count(num)) sum = (sum + num) % MOD;
        }
        return sum;
    }

    int main()
    {
        vector<int>a={1,2,3,4,5};
        vector<int>b={5,7,3,9,1};

        int n1=a.size();
        int n2=b.size();

        cout<<"sum of Commonn elements:"<<commonSum(n1,n2,a,b);

    }