#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>myvector;
    myvector.push_back(0);
    for(int i=1;i<=10;i++){
        myvector.push_back(i);
    }
    for(int vect:myvector)
    cout<<vect<<endl;
}