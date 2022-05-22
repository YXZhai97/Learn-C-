#include <iostream>
using namespace std;

int main()
{

    int n; 
    char c;
    float f;
    scanf("%d%c%f", &n, &c,&f);
    printf("%d,%c,%f",n,c,f );
    cout<<"n="<<n<<",f="<<f<<endl;
    int n1,n2;
    char c1;
    float f1;
    cin>>n1 >>n2 >>c1 >>f1 ;
    cout<<n1<<","<<n2<<","<<c1<<","<<f1<<endl;

    int ch;
    while ((ch=cin.get())!='\n')
    {
        cout <<(char)ch;
    }


    return 0;
}