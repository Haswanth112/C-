#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int *ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number :"<<endl;
        cin>>*(ptr+i);
    
    }
    cout<<"The following Numbers are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    free(ptr);
    return 0;
}