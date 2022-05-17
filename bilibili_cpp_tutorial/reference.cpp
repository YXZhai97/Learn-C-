#include<iostream>
using namespace std;

int main()
{
    double a=4, b=5;
    double & r1=a;
    double & r2=r1;

    r2=10;
    cout<<a<<endl;
    cout<<r1<<endl;
}

