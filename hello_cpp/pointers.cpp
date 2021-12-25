#include <iostream>
using namespace std;

int main(){

    int age=19;
    int *pAge=&age;
    double gpa=2.7;
    string name="Mike";
    // print the memorry adress of the data
    cout<<pAge<<endl;
    // dereference the pointer 
    cout<<*pAge;

    return 0;

}
