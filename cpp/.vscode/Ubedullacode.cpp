#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>myvector;
    int i;
    myvector.push_back(3);
    for(i=1;i<=10;i++){
        myvector.push_back(i+5);
    }
    for(int vect:myvector)
    cout<<vect<<endl;
}