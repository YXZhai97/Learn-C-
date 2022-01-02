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

    Person p;
    p.m_Name="Johan";
    cout<<p.m_Name<<endl;

};