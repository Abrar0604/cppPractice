#include<iostream>
using namespace std;

int main(){
    int *a;
    cout<<"The address of a is"<<a<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"The address of a is::"<<a<<endl;
        a++;
    }
return 0;}