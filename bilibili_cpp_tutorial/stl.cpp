#include<iostream>
#include <vector>
#include<string>
using namespace std;

void test01()
{   
    //创建了一个vector容器
    vector<int> v;
    
    // 向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator itBegin=v.begin();//起始迭代器
    vector<int>::iterator iteEnd=v.end();//结束迭代器， 指向容器中最后一个元素的下一个位置

    //通过迭代器来访问容器中的数据
    while (itBegin!=iteEnd){
        cout<<*itBegin<<endl;
        itBegin++;
    }




}

// string 容器

void test02()
{
    //字符串赋值的方法
    string s1;
    const char * str=" hello world";
    string s2(str);
    cout<<"s2= "<<s2<<endl;
    cout<<*str<<endl;

    string str3;
    str3.assign("Hello C++");
    cout<<"str3= "<<str3<<endl;

    string str4;
    str4.assign("Hello C++",5); //前n个字符进行赋值 
    cout<<"str4= "<<str4<<endl;



}

//vector容器 可以动态扩展 
void test03()
{


}



int main()
{
    test02();
}