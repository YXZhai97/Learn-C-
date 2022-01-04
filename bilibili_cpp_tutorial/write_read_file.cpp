#include <iostream>
#include <fstream>
using namespace std;

void test1()
{
    //包含头文件 fstream 
    //创建文件的地址
    string FILE="/home/yixing/Desktop/Github/LearnCpp/file/test.txt";
    //创建流对象
    ofstream ofs;

    // 指定打开方式
    ofs.open(FILE, ios::out);
  
    //写
    ofs<<"name: Eason Zhai"<<endl;
    ofs<<"age: 24"<<endl;
    ofs<<"school: TUM"<<endl;
    ofs<<"email: yixing.zhai97@gmail.com"<<endl;


    //关闭文件
    ofs.close();


}

int main()
{
    test1();
};