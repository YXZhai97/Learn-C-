#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
//纯虚函数
    virtual void Boil()=0;
    virtual void Brew()=0;
    virtual void PourInCup()=0;
    virtual void PutSomething()=0;
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }


};

class Coffee: public AbstractDrinking
{
public:
    void Boil()
    {
        cout<<"boil water for coffe"<<endl;
    }

    void Brew()
    {
        cout<<"brew coffe"<<endl;
    }

    void PourInCup()
    {
        cout<<"coffe in cup"<<endl;
    }
    void PutSomething()
    {
        cout<<"put milk"<<endl;

    }
};

void doWork(AbstractDrinking *abs)
{
    abs->makeDrink();
    delete abs;

}

void test01()
{
    doWork(new Coffee);
}

int main()
{
    test01();
}
