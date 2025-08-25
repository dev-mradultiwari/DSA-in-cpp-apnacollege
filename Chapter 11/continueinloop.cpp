#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i < 11; i++)
    {
        if (i==3)
        {
            continue; //all the statements after this will be skipped and back to loop again
        }
        cout<<i<<endl;
        
    }
    
    return 0;

}