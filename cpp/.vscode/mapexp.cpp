#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>mv{1,5,3,2,4};
     cout<<"The following elements in the vector are :"<<endl;

    for(auto it=mv.begin();it!=mv.end();it++)
    {
    cout<<(*it)<<endl;
    }
    int sum=0;
    for(auto it=mv.begin();it!=mv.end();it++)
    sum+=(*it);
    cout<<"The sum of the all elements in the vector:"<<sum<<endl;

}