//CEILING PROBLEM;
// A ceiling is the just greater char or equal (in the array)  than the input char

#include<iostream>
using namespace std;

string ceilingchar(string target,int size,string arr[]){
int i=0;

    while(i<size)
    {   
        if((target==arr[i])|| (arr[i]>target))
        {
           return arr[i];
           break;
        }
        else{
        i++;
        }
    }
    return "not found";
}
int main()
{
    string target;
    cout<<"Enter Target char:";
    cin>>target;

    string nums[]={"b","c","d","e","f","g","h","i"};
    int size=sizeof(nums)/sizeof(nums[0]);
    cout<<"Ceiling for "<<target<<" :"<<ceilingchar(target,size, nums);
    
    return 0;
}