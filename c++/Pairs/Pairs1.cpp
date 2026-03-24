#include<iostream>
using namespace std;

pair<int, int> get(int a, int b) {
        // code here
        a=a-b;
        b=a+b;
        a=b-a;
        
        return {a,b};
}

int main()
{
    int a=9;
    int b=13;
    cout<<"Befor Swapping, a="<<a<<", b="<<b<<endl;
    pair<int,int>swapped=get(a,b);

    cout<<"After Swapping, a="<<swapped.first<<", b="<<swapped.second<<endl;

}