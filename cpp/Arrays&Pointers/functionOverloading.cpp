#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Sum + :"<< " "<<(a+b)<<endl;

}
void add(double a,double b)
{
    cout<<"Sum +:"<<" "<<(a+b)<<endl;

}
int main()
{
    add(10,2);
    add(10.23,9.34);

}