#include <iostream>
using namespace std;

//last time we solved fizzbuzz in easier way by dividing it again and again but it is the time consuming process so i takes more time than this prpgram we are going to write

int main(){
int n;
cout<<"enter the no";
cin>>n;

int fizz = 0, buzz = 0;

for (int idx = 1; idx <= n ; idx++)
{
    fizz++;
    buzz++;

    if (fizz==3 && buzz==5)
    {
        cout<<"fizzbuzz"<<endl;
        fizz=0; buzz=0;
    }

    else if (fizz==3)
    {
       cout<<"fizz"<<endl;
       fizz = 0;
    }

    else if (buzz==5)
    {
        cout<<"buzz"<<endl;
        buzz=0;
    }

    else
    {
        cout<<idx<<endl;
    }
     
        
}

    return 0;
}