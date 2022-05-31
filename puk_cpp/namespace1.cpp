#include <iostream>
using namespace std;


namespace first_space{
   void print1(int n);
   int n=10;

}

namespace second_space{

    int n=20;
}

void first_space::print1(int n)
{
    cout<<n<<endl;
}

using namespace first_space;

int main(){

    cout<<n<<endl;
    print1(n);

}


