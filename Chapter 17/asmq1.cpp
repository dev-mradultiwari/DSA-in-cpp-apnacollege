#include <iostream>
using namespace std;

bool isDistinct(int *nums, int n){
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (nums[i] == nums[j])
        {
            return false;
        }
        
    }
    
}
    return true;

}

int main(){
    int nums[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(nums)/sizeof(int);
    cout<<isDistinct(nums, n);
    return 0;
}