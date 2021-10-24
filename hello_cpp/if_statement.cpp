#include <iostream>

using namespace std;

int main(){

    bool isMale=false;
    bool isTall=false;

    // if statement 
    if(isMale && isTall){
        cout<<"You are a tall Male";

    }
    else if(isMale && !isTall){
        cout << "You are not a tall Male";

    }
    else if(!isMale && isTall){
        cout<<"You are tall but not Male";
    }
    else{
        cout<<"You are not Male and not tall";
    }

    return 0;
}
