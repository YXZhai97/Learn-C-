#include <iostream>

// import some thing 
#include <cmath>

using namespace std;

int main(){

    int wnum=5;
    double dnum=-5.5;

    cout<<5+7<<endl;
    cout<<10%3<<endl;
    cout <<dnum++<<endl;
    cout<<dnum*wnum<<endl;
    // integer devision returns a integer 
    cout<<10/3<<endl;
    cout<<10.0/3.0<<endl;

    // basic math functions 
    cout <<pow(2,5)<<endl;
    cout<<pow(10,2)<<endl;
    cout<<sqrt(25)<<endl;
    cout<<round(4.5)<<endl;

    // round the number up
    cout<<ceil(4.3)<<endl;

    //round the number down 
    cout<<floor(4.6)<<endl;

    //find min or max nums 
    cout<<fmin(4,5)<<endl;
    cout<<fmax(4,5)<<endl;


    return 0;
}