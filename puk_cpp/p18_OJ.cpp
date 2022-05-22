#include <iostream>
using namespace std;

int loop1()
{
    int n, m;
    while(scanf("%d%d",&n,&m)!=EOF){
        printf("%d",n+m);
    }
    return 0;
}

int loop2()
{
    int n, max;
    while (scanf("%d",&n)!=0){
        if (n>max){
            max=n;
        }
    }
    printf("%d", max);
    return 0;
}

int main()
{

    loop2();
    return 0;
}