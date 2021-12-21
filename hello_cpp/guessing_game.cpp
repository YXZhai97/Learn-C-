#include <iostream>

using namespace std;

int main(){

    int secretNum=7;
    int guess, time=0;
    while(secretNum!=guess){
        cout<<"Enter a number:";
        cin>>guess;
        time+=1;
        if(time>4){
            cout<<"You loss, max guess times reached";
            break;
        }
    }
    if(guess==secretNum){
        cout<<"You win";
    }
    
}