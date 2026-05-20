#include <bits/stdc++.h>
using namespace std;

/*Input: 5

Output:
A
AB
ABC
ABCD
ABCDE
*/

void printTriangle(int n)
{    
    
    for(int row=1;row<=n;row++)
    {
        char temp='A'+row-1;
        for(char i='A';i<=temp;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter side:";
    cin >> n;
    
    printTriangle(n);
       
    return 0;
}