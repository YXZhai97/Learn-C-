#include <iostream>

using namespace std;


// a game to guess number using while loop

int main(){

    int secretNum=12;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outofguess=false;

    while(secretNum!= guess && !outofguess ){

        if(guesscount<guesslimit){
            cout << "Enter a guess: ";
            cin >> guess;
            guesscount++;
        }
        else{
            outofguess=true;
        }


    }
    if(outofguess==false){
        cout <<"You win!";
    }
    else{
        cout <<"You loss!";
    }

    return 0;

}
