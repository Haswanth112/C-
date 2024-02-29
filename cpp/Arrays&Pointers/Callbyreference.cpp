#include<iostream>
using namespace std;
void swapvaluebyref(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"The values are swaped :"<<x<<" "<<y<<endl;
}
int main()
{
    int a=10;
    int b=20;
    cout<<"The values before swap:"<<a<<" "<<b<<endl;
    swapvaluebyref(a,b);
    cout<<"The values after swap :"<<a<<" "<<b<<endl;
    return 0;

}

