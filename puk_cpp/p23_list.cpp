#include <iostream>
using namespace std;

#define NUM 10
int a[NUM]; 
int b[]={1,2,3,4,5};
int main()
{

    cout<<sizeof(a)<<endl;
    for (int i=0;i<NUM;++i)
        cin>>a[i];
    for(int i=NUM-1; i>=0;--i)
        cout<<a[i]<<" ";

    


    return 0;
}