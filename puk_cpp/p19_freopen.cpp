#include <iostream>
using namespace std;

int main()
{

    freopen("readin.txt","r", stdin);
    int n, mx=0;
    while (cin>>n){
        if (n>mx)
            mx=n;
    }
    printf("max number: %d",mx);
    return 0; 
}