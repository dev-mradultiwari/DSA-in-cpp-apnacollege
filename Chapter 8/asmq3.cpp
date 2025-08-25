#include <iostream>
using namespace std;

int main (){
    int principal;
    float rate;
    float time;
    cout<<"Enter the prinncipal amount: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;

    float sic = (float) (principal*rate*time)/100;
    cout<<"Your total interest amount is "<<sic;
    return 0;

}