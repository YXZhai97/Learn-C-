#include <iostream>
#include <string>
using namespace std;


void Swap(int *p1, int *p2)
{

    int temp =*p1;
    *p1=*p2;
    *p2=temp;

    return; 
}

int main(){

    int a[]={1,2,3,4}; // 数组的名字a就是一个指针常量

    int b=6;
    int *p1=a;
    int *p2=&b;
    cout<<p1[2]<<endl;
    cout<<p2[2]<<endl;
    
    int m=3, n=4;
    cout<<"m:"<<m<<endl;
    cout<<"n:"<<n<<endl;
    Swap(&m, &n);
    cout<<"m:"<<m<<endl;
    cout<<"n:"<<n<<endl;

    

    return 0; 
}