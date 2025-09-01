#include <iostream>
using namespace std;

char getNextChar(char n){
    if (n == 'z')
    {
        return 'a';
    }
    else{
        return ++n;
    }
}

int main(){
    cout<<getNextChar('z');
    return 0;
}