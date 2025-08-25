#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    char operation;
    cout<<"enter first number: ";
    cin>>num1;

    cout<<"enter second number: ";
    cin>>num2;

    cout<<"Enter the symbol: ";
    cin>>operation;
    
    switch (operation)
    {
    case '+' : cout<<"Your answer is "<<num1+num2;
               break;
    case '-' : cout<<"Your answer is "<<num1-num2;
               break;
    case '/' : cout<<"Your answer is "<<num1/num2;
               break;
    case '*' : cout<<"Your answer is "<<num1*num2;
               break;
    
    default: cout<<"invalid operation";
        break;
    }
    

    return 0;
}