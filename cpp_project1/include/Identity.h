#pragma once
#include <iostream>
using namespace std;

class Identity
{
    public:

    //操作菜单
    virtual void operMenu()=0;
    //用户名
    string m_Name;
    //用户密码
    string m_Pwd;
};
