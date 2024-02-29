#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int *ptr=(int*)malloc(sizeof(int));
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number :"<<endl;
        cin>>*(ptr+i);
    }
    cout<<"The numbers are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;

    }
    free(ptr);
    return 0;
}