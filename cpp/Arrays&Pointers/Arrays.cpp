#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter marks of sudent :"<<i+1<<endl;
        cin>>marks[i];
    }
    for(int j=0;j<5;j++)
    {
cout<<"The marks of student :"<<j+1<<" is "<<marks[j]<<endl;
    }
    return 0;
}