#include<iostream>
using namespace std;
void swapValue(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"Swap value: "<<x<<" "<<y<<endl;

}
int main()
{
    int a=5;
    int b=10;
    cout<<"Before swap : "<<a<<" "<<b<<endl;
    swapValue(a,b);
    cout<<"After swap : "<<a<<" "<<b<<endl;
    return 0;

}