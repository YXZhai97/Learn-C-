#include <iostream>
#include <cmath>
using namespace std;

// define the return type 

double cube(double num){

    double res=num*num*num;
    return res;

}

int main(){

    double answer=cube(5.0);
    cout << answer;
    return 0;

}
