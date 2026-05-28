#include <bits/stdc++.h>
using namespace std;

/*Print Squares of length n through '*' 
with exactly one space between them.*/
void Pattern1(int n)
{
  string row=""; 
  
  for(int i=0;i<n;i++)
  {
      row+="* ";
  } 
 
  
  for(int i=0;i<n;i++)
  {
      cout<<row<<endl;
  }
} 

int main() {
    int n;
    cout<<"Enter side:";
    cin >> n;
    
    Pattern1(n);
   
    //cout<<endl;
    
    return 0;
}
