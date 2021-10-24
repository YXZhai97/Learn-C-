#include <iostream>

using namespace std;

string getWeekDay(int day){
    string dayName;

    switch (day)
    {
    case 1:
        dayName="Monday";
        break;
    case 2:
        dayName="Tuesday";
        break;
    
    case 3:
        dayName="Wendesday";
        break;
    
    case 4:
        dayName="Thursday";
        break;
    
    case 5:
        dayName="Friday";
        break;
    case 6:
        dayName="Saturday";
        break;
    
    case 7:
        dayName="Sunday";
        break;
    default:
        dayName="Invalid Dayname ";
        break;
    }

    return dayName;
}

int main(){

    string name;
    int day;
    cout<<"Enter a day number from 1 to 7"<<endl;
    cin>>day;
    name=getWeekDay(day);
    cout<<"Today is "<<name<<endl;

    return 0;
}