#include <iostream>

using namespace std;


// define a compare function 
int getMax(int num1, int num2){

    int res;

    if(num1>num2){

        res=num1;
    }
    else{
        res=num2;
    }
    return res;
}

int main(){

    int res=getMax(2,4);
    cout<< "The bigger one is "<<res<<endl;
    return 0;


}