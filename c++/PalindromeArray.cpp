#include<iostream>
using namespace std;
#include<vector>

void isPalinArray(vector<int> &arr) {
        // code here to check if every element of the array is palindrome;
        int size=arr.size();
        int i=0,flag=0,digit=0,revno=0;
        for(i=0;i<size;i++){
        digit=0,revno=0;
        int temp=arr[i];
        while(arr[i]!=0)
        {
            digit=arr[i]%10;
            revno=revno*10+digit;
            arr[i]=arr[i]/10;   
        }
        if(temp==revno)
        {
            flag+=1;
        }
        }
        if(flag==size){
            cout<<flag<<"  "<<"YEs"<<endl;
        }else{
            cout<<"no";
        }
        
    }
    int main()
    {
        vector<int> arr={121,131,202};
        isPalinArray(arr);

    }