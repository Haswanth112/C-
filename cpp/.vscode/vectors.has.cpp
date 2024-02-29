#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int,string>v;
    v.insert(1,"haswanth");
    v.insert(2,"Reddy");
    for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<endl;

    
    
}