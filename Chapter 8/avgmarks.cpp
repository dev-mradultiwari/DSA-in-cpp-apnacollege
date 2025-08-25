#include <iostream>
using namespace std;

int main(){
    int s1;
    int s2;
    int s3;
    cout<<"Enter marks in subject 1 : ";
    cin>>s1;
    cout<<"Enter marks in subject 2 : ";
    cin>>s2;
    cout<<"Enter marks in subject 3 : ";
    cin>>s3;
    float avg = (float) (s1+s2+s3)/3;
    cout<<"Your avg marks is "<<avg;
    return 0;
}