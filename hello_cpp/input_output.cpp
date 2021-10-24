#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int age;
    string name;

    cout<<"Enter your age:"<<endl;
    cin >>age;
    cout <<"Your are "<< age <<" 34years old"<<endl;
    cout <<"Enter your name:"<<endl;
    // cin.ignore makes getline works after cin 
    cin.ignore();
    getline(cin,name);
    cout<<"Hello "<<name<<endl;
   
    
    return 0;
}


