#include<iostream>
using namespace std;
class Myclass
{
    public:
    int myNum;
    string myString;
};
int main()
{
    Myclass myobj;
    myobj.myNum=12;
    myobj.myString="Haswanth";
    cout<<myobj.myNum<<endl;
    cout<<myobj.myString<<endl;
    return 0;
}