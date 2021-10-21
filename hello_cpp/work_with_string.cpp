#include <iostream>
using namespace std;

int main(){

    string phrase="technical university of munich";

    cout <<phrase<< endl;
    // use function length()
    cout << phrase.length()<<endl;
    //index the phrase 
    cout << phrase[0]<< endl;

    // modify the first char 
    phrase[0]='T';
    cout << phrase<< endl;

    // find() return the first index of the char 
    cout << phrase.find("i")<<endl;

    // subsection of the string, start with index 10 and grab 10 characters 
    cout << phrase.substr(10,10)<<endl;



  
    return 0;
}
