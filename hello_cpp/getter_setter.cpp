#include <iostream>
using namespace std;

class Movie{
    private:
        string rating;

    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title=aTitle;
            director=aDirector;
            setRating(aRating);

        }

        void setRating(string aRating){
            
            rating=aRating;
        }
        
        string getRating(){
            return rating;
        }
};

int main(){

    Movie avengers("The Avengers", "Eason", "oo");
    avengers.setRating("dffff");
    cout<<avengers.getRating()<<endl;
    return 0;

}