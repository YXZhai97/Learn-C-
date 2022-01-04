// 类和对象-继承
//菱形继承 

#include<iostream>
using namespace std;

class Animal
{
public:
    int m_Age;

    void speek()
    {
        cout<<"animal is talking"<<endl;
    }
};

class Cat:public Animal
{
public :
void speek()
{
    cout<<"cat is talking"<<endl;
    }
};

// 虚继承
class Sheep :virtual public Animal{};
// 虚继承
class Tuo: virtual public Animal{};

class SheepTuo: public Sheep, public Tuo{};


void test01(){
    SheepTuo st;
    st.Sheep::m_Age=18;
    st.Tuo::m_Age=28;
    st.m_Age=11;
   

    cout<<"SheepTuo's age:"<<st.Sheep::m_Age<<endl;
    cout<<"SheepTuo's age:"<<st.Tuo::m_Age<<endl;
    cout<<"SheepTuo's age:"<<st.m_Age<<endl;
}

// 多态案例---计算器
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

class AddCalculator: public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1+m_Num2;
    }
};

int main()
{
    test01();
    Cat cat;
    cat.speek();
    cout<<cat.m_Age<<endl;
    AddCalculator add;
    add.m_Num1=1;
    add.m_Num2=2;
    int result;
    result=add.getResult();
    cout<<"add resulr:"<<result<<endl;


}