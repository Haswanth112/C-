#include<iostream>
using namespace std;


	void swapNum(int x,int y)
	{
		int temp=x;
		x=y;
		y=temp;
		cout<<"Swap value :"<<x<<" "<<y<<endl;
	}
	int main()
	{
		int a=10;
		int b=20;
		cout<<"Before the swap a is :"<<a<<" "<<b<<endl;
		swapNum(a,b);
		cout<<"After the swap a is::"<<a<<" "<<b<<endl;
		return 0;
	
	}
