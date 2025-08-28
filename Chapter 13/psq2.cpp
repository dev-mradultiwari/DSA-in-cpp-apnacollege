#include <iostream>
using namespace std;

// for even - true for odd - false

bool iseven(int n){
        if (n%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
               
}

int main(){
   cout<<iseven(17)<<endl;
   return 0;
    }