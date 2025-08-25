
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the n: ";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        for (int a = 2; a < sqrt(i); a++)
        {
            if (i%a==0)
            {
                /* code */
            }
            
        }
        
    }
    

    return 0;
}