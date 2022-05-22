#include <iostream>
using namespace std;

int main()
{

    int i=5;
    for(int i=0; i<26; ++i) // i only exist inside the for-loop 
        cout<<char('a'+i);
    cout<<endl;

    for (int i=0; i<26; i+=2) // another i only exist inside the for-loop 
        cout<<char('A'+i);
    cout<<endl;

    cout<<i<<endl; // i remains unchanged 
    cout<<i++<<endl;
    cout<<i<<endl;
    cout<<++i<<endl;

    for (int i=15, j=0; i>j; i-=2, j+=3){
        cout<<i<<","<<j<<endl;
    }
    
    for (; i<10;++i)
    {
        cout<<i<<endl;
    }

    return 0; 
}