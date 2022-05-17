#include<iostream>
using namespace std;
/*
input output 
*/

int main()
{
    int a,b;
    scanf("%d%d", &a, &b); // input 2 variable

    char c,d,e;
    scanf("%c%c%c", &c,&d,&e);

    printf("I have %d dollars.\n", a);
    printf("I want to buy :\n %d book.\n",a);

    printf("%d", a+b);

    printf("%c%c%c",c,d,e);

    return 0;
}