#include <iostream>
#include <cmath>
using namespace std;

// create another function
// define return type of the function 
// void means no return 

void sayHi(string name, int age){

    cout << "Hello "<<name<<endl;
    cout << "You are "<<age<<" years old"<<endl;
}


int main(){

    // call the function 
    sayHi("Eason",24);
    return 0;


}