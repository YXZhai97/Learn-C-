//定义结构体

#include<iostream>
#include<string>
using namespace std;

//定义结构体
struct student 
{
    string name;
    int age;
    int score;
};

int main(){

    //创建结构体实例
    struct student s1;
    s1.name="eason zhai";
    s1.age=24;
    s1.score=100;
    cout<<s1.name<<endl;

    //创建结构体 方法2
    struct student s2={"Johon", 22, 90};
    cout<<s2.name<<endl;

    // 创建结构体数组

    struct student studentArray[3]= {
        {"jack", 22, 67},
        {"Erick", 44, 50},
        {"Will", 32, 98}
    };
    cout<<studentArray[1].name<<endl;

    //结构体指针
    // 用结构体指针访问结构体中的变量 使用->访问
    struct student *p = &s2;
    cout<<p->name<<endl;

    // 嵌套结构体

    struct teacher
    {
        int id;
        int age;
        struct student stu;
        
        
    };

    teacher t;
    t.id=10;
    t.stu.name="eason";
    t.stu.age=22;
    t.stu.score=100;
  
    cout<<t.stu.name<<endl;

    //结构提做函数参数
    

   

    return 0;

}

