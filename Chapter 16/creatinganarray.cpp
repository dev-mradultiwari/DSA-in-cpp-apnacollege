#include <iostream>
using namespace std;



int main(){
    int marks[50/*it is the size or no of elements in array*/] = {1, 2, 3 /*it is the values stored in array*/};
    cout<<marks[0/*it is index*/]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; // it will give 0 because we had only declared till 2nd index but if we had not declared any of the index then it will print garbage value
    cout<<"second way to declare array "<<endl;
    int marks2[] = {4, 5, 6}; // it will automatically takes the size by the elements written in it like if we had written three elements then the size of array is 3
    cout<<marks2[0]<<endl;
    cout<<marks2[1]<<endl;
    cout<<marks2[2]<<endl;
    cout<<marks2[3]<<endl; // it will give error because when we use the array that will automatically takes the size then it will give us 1 as the value of index greater than the assigned values
    return 0;
}
