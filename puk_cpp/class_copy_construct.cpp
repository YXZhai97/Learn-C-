#include<iostream>
using namespace std;
#include <cstring>

class Complex{

    public:
        double real, imag;

    Complex(){
        cout<<"Constructor called"<<endl;
    }

    // 复制构造函数
    Complex(const Complex &c){
        real=c.real;
        imag=c.imag;
        cout<<"Copy_Constructor called";

    }
};

int main(){

    Complex c1;
    Complex c2(c1);//用一个对象初始化另一个对象
    return 0;
    
}
