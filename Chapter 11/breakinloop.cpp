#include <iostream>
using namespace std;

int main(){
    int i = 5;
    while (i<10)
    {
        if (i==7)
        {
          break;  
        }
        
        cout<<i;
        i++;
    }
    
    return 0;
}