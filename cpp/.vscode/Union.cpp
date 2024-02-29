#include<iostream>
using namespace std;
union UnionExampleCode
{
    int intvalue;
    float floatvalue;
    char charvalue;
    double doublevalue;
};
int main()
{
    UnionExampleCode UEC;
    UEC.intvalue=100;
    cout<<"The value of int is :"<<UEC.intvalue<<endl;
    UEC.floatvalue=78.9;
    cout<<"The value of float is :"<<UEC.floatvalue<<endl;
    UEC.charvalue='H';
    cout<<"The value of char is :"<<UEC.charvalue<<endl;
    UEC.doublevalue=89.88489;
    cout<<"The value of double is:"<<UEC.doublevalue<<endl;
    cout<<"Size of the union :"<<sizeof(UnionExampleCode)<<" "<<"BYTES"<<endl;
}

    