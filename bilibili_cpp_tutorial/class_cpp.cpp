#include<iostream>
using namespace std;

class Student
{
public:
    string m_Name;
    int m_Id;

    void showStudent()
    {
        cout<<m_Name<<m_Id<<endl;
    }

    void setName(string name)
    {
        m_Name=name;
    }

    void setId(int id)
    {
        m_Id=id;
    }



};

class Person
{
public:
    string m_Name;
    int age;
    int m_A;

    //静态成员函数， 只能访问静态变量
    static void st_func()
    {
        cout<<"inside static function"<<endl;
    }

    Person(int a, string n)
    {
        cout<<"inside Person construct"<<endl;
        m_Name=n;
        age=a;
    }

    Person()
    {
        age=50;
    }
    
    ~Person()
    {
        cout<<"inside delete class"<<endl;
    }

    void func()
    {
        m_Name="Eason";
        m_Car="BMW";
        m_Password=123456;

    }

protected:
    string m_Car;

private:
    int m_Password;

};


int main()
{
    Student s1;
    s1.m_Name="Wijin";
    s1.m_Id=11;
    s1.showStudent();
    s1.setName("will");
    s1.showStudent();

    //有参数构造
    Person p(22,"Eason");
    p.st_func();
  
    cout<<p.m_Name<<endl;
    Person p2=Person(10,"jjj");
    cout<<p2.age<<endl;

    //无参数构造
    Person p3;
    cout<<p3.age<<endl;
    Person::st_func();

    return 0;

};