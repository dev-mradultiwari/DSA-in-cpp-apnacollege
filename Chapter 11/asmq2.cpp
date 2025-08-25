#include <iostream>
using namespace std;

int main(){
    int n;
    int mult;
    cout<<"enter the no: ";
    cin>>n;

    for (int strt = 1; strt <= 10; strt++)
    {
       mult = strt*n;
       cout<<strt<<"x"<<n<<"="<<mult<<endl; 
    }
    
    return 0;
}