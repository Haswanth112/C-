#include<iostream>
using namespace std;
void myswap(int x,int y)
{
   int temp=x;
    x=y;
    y=temp;
    cout<<"The values are inside swap :"<<x<<" "<<y<<endl;
}
    int main()
    {
        int a=10;
        int b=20;
        cout<<"The vales before the swap :"<<a<<" "<<b<<endl;
        myswap(a,b);
        cout<<"The values after the swap :"<<a<<" "<<b<<endl;

    }
