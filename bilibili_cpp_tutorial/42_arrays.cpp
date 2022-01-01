#include<iostream>
using namespace std;

int main(){
    
    int a1[5]={1,2,3,4,5};
    int *p1=a1;
    for (int i=0; i<5; i++){
        cout<<a1[i]<<endl;
        cout<<p1[i]<<endl;
    }
    cout<<*p1<<endl;


    int m[2][3]={{1,2,3},{2,3,4}};//连续的储存空间
    int num=1;
    int * p=&num;
    cout<<num<<endl;
    *p=10;
    cout<<num<<endl;

    cout<<sizeof(a1)<<endl;
    cout<<sizeof(a1[1])<<endl;
    cout<<a1<<endl; // the adress of the first element in the array 
    cout<<&a1[1]<<endl; // the adress of the second element in the array 


    return 0;
}
