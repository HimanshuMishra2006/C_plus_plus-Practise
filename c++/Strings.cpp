#include<iostream>
using namespace std;
int main(){
   string s,p;
   cout<<"Enter a name: ";
   getline(cin,s);
   cout<<"Add something to it:"; 
   getline(cin,p);
   cout<<"Final name: ";
   string w=s+p;
   //getline(cin,w);
   cout<<w<<" "<<endl;
  //  cout<<w+" mishra";

    string a="Himanshu\n";
   string b="Mishra";
  //  cout<<(a+b);

   
   return 0;
}