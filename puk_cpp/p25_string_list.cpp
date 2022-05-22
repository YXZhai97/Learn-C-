#include <iostream>
#include <string>
using namespace std;

string weekdays[]={"Mon", "Tue", "Wen", "Thur", "Fri", "Sat", "Sun"};// 数组的初始化
int two_d_array[2][3]={{1,2,3},{4,5,6}};

int a[10];
int main()
{
    int n;
    cin>>n;
    a[11]=11; //数组越界 编译器是允许的
    if (n>7 || n<1)
        cout<<"Invalid input"<<endl;
    else
        cout<<weekdays[n-1]<<endl;;
    
    cout<<a[0]<<a[9]<<a[11]<<endl;
    
    return 0; 
}

