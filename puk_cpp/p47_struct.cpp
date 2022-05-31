#include <iostream>
using namespace std;
#include <string>
#include <cstring>

struct Date{
    int year;
    int month;
    int day;

};

struct StudentEx{

    unsigned ID;
    char szName[20];
    float fGPA;
    Date birthday;
};

struct Employee{
    string name;
    int age;
    int salary;
    Employee *next;

}

int main()
{
    StudentEx stu;
    cin>>stu.fGPA;
    stu.ID=12345;
    strcpy(stu.szName,"Eason");
    stu.birthday.year=1997;
    unsigned int *p=&stu.ID ;

    StudentEx stu2={1234, "Tom", 1.7, {1997, 10, 22}};//初始化结构体

    


}