//代码区 
//全局区
    //全局变量， 静态变量，字符串常量， 该区域的数据在程序结束后由操作系统释放
    // 全局变量和局部变量不在一个存储区
//栈区
    //形参地址和局部变量地址， 当函数执行完后被释放
//堆区 
    //由程序员分配和释放
    //使用new 来开辟空间

#include<iostream>
using namespace std;

int *func()
{
    //在堆区创建整型数据
    int *p=new int(10);
    return p;
}

void test01()
{
    int *p=func();
    cout <<*p<<endl;
}
int main(){

    test01();
    return 0;
}