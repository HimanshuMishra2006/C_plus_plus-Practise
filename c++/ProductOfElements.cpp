//Program to print an array of Products of its own elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>arr={6,5,4,3};
    int size=arr.size();
    //an empty vec to store products;
    vector <int>vec;
    int product;

    for(int i=0;i<size;i++){
        product=1;
        for(int j=0;j<size;j++){
            if(i!=j){        
        product*=arr[j];
            }
        }vec.push_back(product);
       
    }
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
          
    }
}