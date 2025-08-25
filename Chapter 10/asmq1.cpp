#include <iostream>
using namespace std;

int main(){
        int num;
        cout<<"enter the number: ";
        cin>>num;

        if(num<0){
            cout<<"negative";
        }
        else if(num>0){
            cout<<"positive";
        }
        else{
            cout<<"zero";
        }
        

    return 0;
}