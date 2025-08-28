#include <iostream>
using namespace std;

int sum(int a, int b = 1){ // a and b are parameters and we had assigned a default value to the b whenever the value of b is not given it will automatically take 1 as the value for b
    int sum = a+b;
    return sum;
}

int main(){
    int s = sum(2, 4); // here 2 and 4 are argument
    cout<<"sum = "<<s<<endl;
    return 0;
}