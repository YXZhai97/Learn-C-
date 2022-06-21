#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

class Student:public Identity
{
    public:

        //默认构造
        Student();

        //有参数构造
        Student(int id, string name, string pwd);

        //菜单界面
        virtual void operMenu()=0;

        //申请预约
        void applyOrder();
        //查看自己预约
        void showOrder();

        //查看所有预约
        void showAllOrder();
        //取消预约
        void cancelOrder();

        //用户ID
        int m_Id;

};