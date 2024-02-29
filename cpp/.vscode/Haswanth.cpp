#include<iostream>
#include<thread>
using namespace std;
void function1(){
    for(int i=0;i<=5;i++){
    cout<<i<<"  ";
    }
}
void function2(){
    for(int i=0;i<=3;i++)
    {
    cout<<i<<" ";
}
}

int main()
{
    thread mythread1(function1);
    thread mythread2(function2);
    mythread1.join();
    mythread2.join();
    return 0;
}