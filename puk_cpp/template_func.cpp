#include <iostream>
using namespace std;

template <class T1, class T2>
void Swap(T1 &a, T2 &b){
    T1 tmp=a;
    a=b;
    b=T1(tmp);
}

int main()
{
    int n=3, m=4;
    Swap(n,m);
    cout<<"n="<<n<<endl;
    cout<<"m="<<m<<endl;

    double a=3.5;
    int b=4;
    Swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

}