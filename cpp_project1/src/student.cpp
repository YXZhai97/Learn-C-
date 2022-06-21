#include "student.h"

Student::Student();

//有参数构造
Student::Student(int id, string name, string pwd);

//菜单界面
void Student::operMenu()=0;

//申请预约
void Student::applyOrder();
//查看自己预约
void Student::showOrder();

//查看所有预约
void Student::showAllOrder();
//取消预约
void Student::cancelOrder();