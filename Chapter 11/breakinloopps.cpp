#include <iostream>
using namespace std;

int main(){
    int n;
    do
    {
        cout<<"Enter the number: ";
        cin>>n;
        if (n%10==0)
        {
            cout<<"its a multiple of 10";
            break;
        }
        
        cout<<"the number entered by you is not a multiple of 10, try again"<<endl;
        
    } while (true);
    
    return 0; 
}