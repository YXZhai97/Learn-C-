#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>

void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //通过迭代器来访问容器中的数据

    vector<int>::iterator itBegin=v.begin();//迭代器起始位置
    vector<int>::iterator itEnd=v.end();
    
    for (vector<int>::iterator it=itBegin;it!=itEnd;it++)
    {
        cout<<*it<<endl;
    }
}




int main()
{
    test01();
}