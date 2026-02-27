#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
        //arr size
       int size=arr.size();
       //hash array
       vector<int>hash(size+1,0);
       //result array
        vector<int>result;
        
        //mapping frequency
        for(int i=0;i<size;i++)
        {
            hash[arr[i]]+=1;
        }
        
        //if element repeats;
        for(int i=0;i<size;i++)
        {
            if(i!=0 && hash[i]==2){
                result.push_back(i);
            }
        }
        //returning answer array;
        return result;
    }

    int main(){

    vector<int> nums={1,4,3,5,6,2,5,3,7};
    

    vector<int> duplicates=findDuplicates(nums);
    for(int i=0;i<duplicates.size();i++){
        
        cout<<duplicates[i]<<" ";
    }



    }