#include <iostream>
using namespace std;
#include <string>
int main()
{

    int **pp;
    int *p;

    int n=12345;
    p=&n;
    pp=&p;

    cout<<*(*pp)<<endl;


    char *chp="please input your name:\n";
    cout<<chp;
    char name[20];
    char *pName=name;
    cin>>pName;
    cout<<"Your name is:"<<pName;
    




    return 0; 
}