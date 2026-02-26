#include<iostream>
#include<vector>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int sizeA=a.size();
        int sizeB=b.size(),maxVal=0;
        //maximum value of a[];
        for(int i=0;i<sizeA;i++)
        {
            if (a[i] > maxVal)
            {
                maxVal = a[i];
            }
        }
        //declare hashArray
        vector<int>hash(maxVal+1,0);
        
        for(int i=0;i<sizeA;i++)
        {
         hash[a[i]]+=1;   
        }
        //check for elements of b, if in a;
        for(int i=0;i<sizeB;i++)
        {
            if(b[i]>maxVal || hash[b[i]]==0){
            return false;
            }
            hash[b[i]]--;
        }
        return true;
      }

      int main(){
        vector<int> a = {11, 7, 1, 13, 21, 3, 7, 3};
        vector<int> b ={11, 3, 7, 1, 7};
        if(isSubset(a,b))
        {
            cout<<"Subset";
        }else{
            cout<<"Not a subset";
        }
      }
