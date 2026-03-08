#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        int size=a.size();
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return a==b;
    }

int main()
{
    vector<int>a={1,4,6,8,};
     vector<int> b={4,1,5,7};

     vector<int>c={1,4,6,8,};
     vector<int> d={4,1,8,6};
     if(checkEqual(a,b)) {
        cout<<"Equals"<<endl;
     }else{
        cout<<"Not equals"<<endl;
     }

     if(checkEqual(c,d)) {
        cout<<"Equals"<<endl;
     }else{
        cout<<"Not equals"<<endl;
     }
}