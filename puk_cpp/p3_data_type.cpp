#include <iostream>
using namespace std;

int main()
{

    int n=5,b=2;
    float c=2;
    cout<<n/b<<endl;
    cout<<(double)n/b<<endl;
    cout<<n/c<<endl; 
    
    double f=9.14;
    int d = (int) f;
    cout<<d<<endl;
    cout<<f<<endl;
    f=d/2;
    cout<<f<<endl;
    f=double(d)/2;
    cout<<f<<endl;


    return 0;
}