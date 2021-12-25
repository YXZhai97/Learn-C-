#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        // constructor function 
        Book(){
            title="No title";
            pages=0;
            author="No author";
        }
        Book(string aTitle, string aAuthor, int aPages){
            cout<<"Create object"<<endl;
            title=aTitle;
            author=aAuthor;
            pages=aPages;
        }


};

class Student{
    

}

int main(){

    // define a object 
    Book book1("Harry Potter", "Jk Rolling", 100);
    book1.title="Harry Poter";
    cout<<book1.pages<<endl;
    cout<<book1.title<<endl;
    Book book2;
    cout<< book2.author<<endl;

    return 0;
}