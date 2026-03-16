#include<iostream>
using namespace std;
#include<vector>

int countBuildings(vector<int> &height) {
        // code here
        int count=1;
        int max=height[0];
        int size=height.size();
        for(int i=0;i<size;i++){
            // if(height[i+1]>height[i]){
            //     max=height[i+1];
            // }
            if(height[i]>max){
                max=height[i];
                count+=1;
            }
        }
        return count;
    }

int main()
{
    vector<int> height={1,4,2,6,7,8,5,9,0};
    cout<<"the buildings that will see the sunrise : ";
    cout<<countBuildings(height);
}    